//
//  IOSdeviceModel.h
//
//
//
//  Created by Choong on 26/04/2019.
//  From Trese, Tib, OhhMee
//
//https://stackoverflow.com/questions/11197509/how-to-get-device-make-and-model-on-ios/11197770#11197770


#import <Foundation/Foundation.h>
#import <sys/utsname.h>

@interface IosDeviceModel: NSObject{

}

- (NSString *)deviceName;

@end

