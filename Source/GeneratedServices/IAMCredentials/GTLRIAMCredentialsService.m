// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   IAM Service Account Credentials API (iamcredentials/v1)
// Description:
//   IAM Service Account Credentials API
// Documentation:
//   https://developers.google.com/identity/protocols/OAuth2ServiceAccount

#import "GTLRIAMCredentials.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeIAMCredentialsCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRIAMCredentialsService
//

@implementation GTLRIAMCredentialsService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://iamcredentials.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
