/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKCapabilitiesManager : NSObject {
    BOOL _isRingtoneStoreAvailable;
    BOOL _isToneStoreAvailable;
}

@property BOOL isRingtoneStoreAvailable;
@property BOOL isToneStoreAvailable;

+ (id)sharedCapabilitiesManager;

- (void)_checkRingtoneStoreAvailability;
- (void)dealloc;
- (BOOL)hasTelephonyCapability;
- (BOOL)hasUserGeneratedVibrationsCapability;
- (BOOL)hasVibratorCapability;
- (id)init;
- (BOOL)isRingtoneStoreAvailable;
- (BOOL)isToneStoreAvailable;
- (void)setIsRingtoneStoreAvailable:(BOOL)arg1;
- (void)setIsToneStoreAvailable:(BOOL)arg1;

@end
