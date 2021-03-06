//
//  FoursquarePost.h
//  Woddl
//
//  Created by Oleg Komaristov on 08.11.13.
//  Copyright (c) 2013 IDS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Post.h"

@class FoursquareOthersProfile;

@interface FoursquarePost : Post

@property (nonatomic, retain) NSSet *likedBy;

@property (nonatomic,strong) ComplationLikingBlock completionBlock;
@property (nonatomic,strong) FailLikingBlock failBlock;
@property (nonatomic,strong) ComplationCommentBlock complCommentBlock;
@property (nonatomic,strong) FailCommentBlock failComplationCommentBlock;
@property (nonatomic,strong) ComplationRefreshCommentsBlock getCommentComplationBlock;
@property (nonatomic,strong) ComplationLoadMoreCommentsBlock loadMoreCommentComplationBlock;

-(void)addLikeWithCompletionBlock:(ComplationLikingBlock)complationBlock_ andFailBlock:(FailLikingBlock)failBlock_;
-(void)addCommentWithMessage:(NSString*)message andCompletionBlock:(ComplationCommentBlock)complationBlock_ withFailBlock:(FailCommentBlock)failCommentBlock_;
-(void)commentsRefreshWithComplationBlock:(ComplationRefreshCommentsBlock)complationBlock;
-(void)commentsLoadMoreFrom:(NSUInteger)from to:(NSUInteger)to withComplationBlock:(ComplationRefreshCommentsBlock)complationBlock;
@end

@interface FoursquarePost (CoreDataGeneratedAccessors)

- (void)addLikedByObject:(FoursquareOthersProfile *)value;
- (void)removeLikedByObject:(FoursquareOthersProfile *)value;
- (void)addLikedBy:(NSSet *)values;
- (void)removeLikedBy:(NSSet *)values;

@end
