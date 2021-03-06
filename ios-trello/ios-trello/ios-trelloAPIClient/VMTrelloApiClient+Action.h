//
//  VMTrelloApiClient+Action.h
//  ios-trello
//
//  Created by Vince Mansel on 5/29/12.
//  Copyright (c) 2012 waveOcean Software. All rights reserved.
//

#import "VMTrelloApiClient.h"

/*
 action
 
 GET /1/actions/[action_id]

 IMPLEMENTED:
 
 PLANNED:
 
 GET /1/actions/[action_id]/[field]
 GET /1/actions/[action_id]/board
 GET /1/actions/[action_id]/board/[field]
 GET /1/actions/[action_id]/card
 GET /1/actions/[action_id]/card/[field]
 GET /1/actions/[action_id]/list
 GET /1/actions/[action_id]/list/[field]
 GET /1/actions/[action_id]/member
 GET /1/actions/[action_id]/member/[field]
 GET /1/actions/[action_id]/memberCreator
 GET /1/actions/[action_id]/memberCreator/[field]
 GET /1/actions/[action_id]/organization
 GET /1/actions/[action_id]/organization/[field]
 
 */

@interface VMTrelloApiClient (Action)

- (void)get1Actions:(NSString *)action_id success:(void (^)(id JSON))JSONSuccess_block;
- (void)get1Actions:(NSString *)action_id success:(void (^)(id JSON))JSONSuccess_block failure:(void (^)(NSError *error))failure;

@end
