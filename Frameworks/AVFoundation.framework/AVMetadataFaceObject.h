/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject {
    AVMetadataFaceObjectInternal *_internal;
}

@property(readonly) int faceID;
@property(readonly) BOOL hasRollAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float rollAngle;
@property(readonly) float yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (void)dealloc;
- (id)description;
- (int)faceID;
- (BOOL)hasRollAngle;
- (BOOL)hasYawAngle;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (float)rollAngle;
- (float)yawAngle;

@end
