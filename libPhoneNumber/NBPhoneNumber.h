//
//  NBPhoneNumber.h
//  libPhoneNumber
//
//  Created by ishtar on 12. 12. 13..
//  Copyright (c) 2012년 NHN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NBPhoneNumberDefines.h"

@interface NBPhoneNumber : NSObject

// from phonemetadata.pb.js
/* 1 */ @property (nonatomic, assign, readwrite) UInt32 countryCode;
/* 2 */ @property (nonatomic, assign, readwrite) UInt64 nationalNumber;
/* 3 */ @property (nonatomic, strong, readwrite) NSString *extension;
/* 4 */ @property (nonatomic, assign, readwrite) BOOL italianLeadingZero;
/* 5 */ @property (nonatomic, strong, readwrite) NSString *rawInput;
/* 6 */ @property (nonatomic, strong, readwrite) NSNumber *countryCodeSource;
/* 7 */ @property (nonatomic, strong, readwrite) NSString *preferredDomesticCarrierCode;

- (void)clearCountryCodeSource;
- (NBECountryCodeSource)getCountryCodeSourceOrDefault;

@end