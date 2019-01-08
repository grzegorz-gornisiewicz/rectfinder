//
//  ViewController.h
//  Window Finder
//
//  Created by Grzegorz Górnisiewicz on 19.02.2016.
//  Copyright © 2016 Long Road. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/videoio/cap_ios.h>

@interface ViewController : UIViewController<CvVideoCameraDelegate> {
    CvVideoCamera* _videoCamera;
    IBOutlet UIImageView* videoPreviewImageView;
    NSInteger counter;
}

@property (nonatomic, retain) CvVideoCamera* videoCamera;

@end

