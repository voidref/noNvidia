//
//  gfxCardStatusAppDelegate.h
//  gfxCardStatus
//
//  Created by Cody Krieger on 4/22/10.
//  Copyright 2010 Cody Krieger. All rights reserved.
//

#import "GSPreferences.h"
#import "GSGPU.h"

@interface gfxCardStatusAppDelegate : NSObject <NSApplicationDelegate,GSGPUDelegate> {
    GSPreferences *_prefs;
}

@end
