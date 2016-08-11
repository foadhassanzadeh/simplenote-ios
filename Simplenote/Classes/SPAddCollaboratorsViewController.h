//
//  SPAddCollaboratorsViewController.h
//  Simplenote
//
//  Created by Tom Witkin on 7/27/13.
//  Copyright (c) 2013 Automattic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>
#import "SPEntryListViewController.h"


@class SPAddCollaboratorsViewController;
@protocol SPCollaboratorDelegate <NSObject>

@required

- (BOOL)collaboratorViewController:(SPAddCollaboratorsViewController *)viewController
               shouldAddCollaborator:(NSString *)collaboratorEmail;
- (void)collaboratorViewController:(SPAddCollaboratorsViewController *)viewController
                  didAddCollaborator:(NSString *)collaboratorEmail;
- (void)collaboratorViewController:(SPAddCollaboratorsViewController *)viewController
                  didRemoveCollaborator:(NSString *)collaboratorEmail;

@end

@interface SPAddCollaboratorsViewController : SPEntryListViewController <ABPeoplePickerNavigationControllerDelegate> {
    
    id<SPCollaboratorDelegate> collaboratorDelegate;
    BOOL hasPermissions;
}

@property (nonatomic, assign) id<SPCollaboratorDelegate> collaboratorDelegate;

- (void)setupWithCollaborators:(NSArray *)collaborators;


@end
