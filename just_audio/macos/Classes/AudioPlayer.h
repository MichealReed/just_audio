#import <FlutterMacOS/FlutterMacOS.h>
#import <AVFoundation/AVFoundation.h>

@interface AudioPlayer : NSObject<FlutterStreamHandler, AVPlayerItemMetadataOutputPushDelegate>

@property (readonly, nonatomic) AVQueuePlayer *player;
@property (readonly, nonatomic) float speed;
@property (readonly, nonatomic) int visualizerCaptureSize;

- (instancetype)initWithRegistrar:(NSObject<FlutterPluginRegistrar> *)registrar playerId:(NSString*)idParam;
- (void)dispose;

@end

enum ProcessingState {
	none,
	loading,
	buffering,
	ready,
	completed,
	error
};

enum LoopMode {
	loopOff,
	loopOne,
	loopAll
};
