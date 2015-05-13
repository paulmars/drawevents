//
//  ViewController.h
//  drawevents
//
//  Created by Paul McKellar on 5/13/15.
//  Copyright (c) 2015 pm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <NSStreamDelegate> {
//    NSInputStream *inputStream;
    NSOutputStream *outputStream;
}

@end

