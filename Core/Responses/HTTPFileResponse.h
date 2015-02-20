#import <Foundation/Foundation.h>
#import "HTTPResponse.h"

@class HTTPConnection;


@interface HTTPFileResponse : NSObject <HTTPResponse>
{
	HTTPConnection *connection;
	
	NSString *filePath;
	UInt64 fileLength;
	UInt64 fileOffset;
	
	BOOL aborted;
	
	int fileFD;
	void *buffer;
	NSUInteger bufferSize;
}

@property (nonatomic,strong) NSString *mimeType;
@property (nonatomic,strong) NSString *attachmentName;

- (id)initWithFilePath:(NSString *)filePath forConnection:(HTTPConnection *)connection;
- (NSString *)filePath;

@end
