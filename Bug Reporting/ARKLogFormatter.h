//
//  ARKLogFormatter.h
//  Aardvark
//
//  Created by Dan Federman on 10/6/14.
//  Copyright (c) 2014 Square, Inc. All rights reserved.
//

@protocol ARKLogFormatter <NSObject>

@required

/// Returns an array of NSStrings that represent the logs.
- (NSArray *)formattedLogs:(NSArray *)logs;

/// Returns formattedLogs as plain text, stripping out images.
- (NSString *)formattedLogsAsPlainText:(NSArray *)logs;

/// Returns formattedLogsAsPlainText as NSData.
- (NSData *)formattedLogsAsData:(NSArray *)logs;

/// Returns the most recent image in a log as a PNG.
- (NSData *)mostRecentImageAsPNG:(NSArray *)logs;

/// Returns errorLogsToInclude recent error logs as a NSString.
- (NSString *)recentErrorLogsAsPlainText:(NSArray *)logs count:(NSUInteger)errorLogsToInclude;

@end