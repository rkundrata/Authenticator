//
//  ATCConstants.h
//  Authenticator
//
//  Created by Tong G. on 2/9/16.
//  Copyright © 2016 Tong Kuo. All rights reserved.
//

// Notification Names
NSString extern* const ATCNewTotpEntryDidAddNotif;
NSString extern* const ATCTotpBadgeViewShouldUpdateNotif;
NSString extern* const ATCHintFieldShouldUpdateNotif;
NSString extern* const ATCShouldShowWarningsNotif;
NSString extern* const ATCBeginScanningQRCodeOnScreenNotif;
NSString extern* const ATCFinishScanningQRCodeOnScreenNotif;
NSString extern* const ATCMasterPasswordDidChangeNotif;

// User Info Key
NSString extern* const kTotpEntry;
NSString extern* const kQRCodeContents;

// Constants
uint64_t extern const ATCFixedTimeStep;
uint64_t extern const ATCWarningTimeStep;

// Shared Hex HTML Colorn
NSString extern* const ATCHexNormalPINColor;
NSString extern* const ATCHexWarningPINColor;

NSColor* ATCNormalPINColor(void);
NSColor* ATCWarningPINColor(void);
NSColor* ATCAlternativeWarningPINColor(void);
NSColor* ATCControlColor(void);

NSURL* ATCVaultsDirURL(void);
NSURL* ATCDefaultVaultsDirURL(void);
NSURL* ATCImportedVaultsDirURL(void);
NSURL* ATCTemporaryDirURL(void);

NSString extern* const ATCTotpAuthURLTemplate;

NSString extern* const ATCUnitedTypeIdentifier;

NSString extern* const ATCPinCodePboardType;;
