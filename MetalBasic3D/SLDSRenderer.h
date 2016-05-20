#import "SLDSView.h"
#import "SLDSViewController.h"

#import <Metal/Metal.h>

@interface SLDSRenderer : NSObject <SLDSViewControllerDelegate, SLDSViewDelegate>

// load all assets before triggering rendering
- (void)configure:(SLDSView *)view;

@end
