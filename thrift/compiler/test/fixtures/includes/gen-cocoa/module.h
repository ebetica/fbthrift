/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
* @generated by https://github.com/korovkin/thrift
*/

#import <Foundation/Foundation.h>

#import <thrift/TProtocol.h>
#import <thrift/TApplicationException.h>
#import <thrift/TProtocolException.h>
#import <thrift/TProtocolUtil.h>
#import <thrift/TProcessor.h>
#import <thrift/TObjective-C.h>
#import <thrift/TBase.h>
#import <thrift/TBaseStruct.h>
#import "includes.h"

@interface MyStruct : TBaseStruct <TBase, NSCoding> {
  Included * __thrift_MyIncludedField;

  BOOL __thrift_MyIncludedField_set;
}

@property (nonatomic, retain) Included * MyIncludedField;

- (id) init;
- (id) initWithMyIncludedField: (Included *) MyIncludedField;
- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;
- (void) validate;

- (BOOL) MyIncludedFieldIsSet;
@end

@interface moduleConstants : TBaseStruct {
}
@end
