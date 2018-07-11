// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Profiler API (cloudprofiler/v2)
// Description:
//   Allows Google services manage the continuous profiling information.
// Documentation:
//   https://cloud.google.com/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudProfiler_CreateProfileRequest;
@class GTLRCloudProfiler_Profile;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Profiler query classes.
 */
@interface GTLRCloudProfilerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  CreateProfile creates a new profile resource in the online mode.
 *  The server ensures that the new profiles are created at a constant rate per
 *  deployment, so the creation request may hang for some time until the next
 *  profile session is available.
 *  The request may fail with ABORTED error if the creation is not available
 *  within ~1m, the response will indicate the duration of the backoff the
 *  client should take before attempting creating a profile again. The backoff
 *  duration is returned in google.rpc.RetryInfo extension on the response
 *  status. To a gRPC client, the extension will be return as a
 *  binary-serialized proto in the trailing metadata item named
 *  "google.rpc.retryinfo-bin".
 *
 *  Method: cloudprofiler.projects.profiles.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudProfilerCloudPlatform
 *    @c kGTLRAuthScopeCloudProfilerMonitoring
 *    @c kGTLRAuthScopeCloudProfilerMonitoringWrite
 */
@interface GTLRCloudProfilerQuery_ProjectsProfilesCreate : GTLRCloudProfilerQuery
// Previous library name was
//   +[GTLQueryCloudProfiler queryForProjectsProfilesCreateWithObject:parent:]

/** Parent project to create the profile in. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudProfiler_Profile.
 *
 *  CreateProfile creates a new profile resource in the online mode.
 *  The server ensures that the new profiles are created at a constant rate per
 *  deployment, so the creation request may hang for some time until the next
 *  profile session is available.
 *  The request may fail with ABORTED error if the creation is not available
 *  within ~1m, the response will indicate the duration of the backoff the
 *  client should take before attempting creating a profile again. The backoff
 *  duration is returned in google.rpc.RetryInfo extension on the response
 *  status. To a gRPC client, the extension will be return as a
 *  binary-serialized proto in the trailing metadata item named
 *  "google.rpc.retryinfo-bin".
 *
 *  @param object The @c GTLRCloudProfiler_CreateProfileRequest to include in
 *    the query.
 *  @param parent Parent project to create the profile in.
 *
 *  @return GTLRCloudProfilerQuery_ProjectsProfilesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudProfiler_CreateProfileRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  CreateOfflineProfile creates a new profile resource in the offline mode.
 *  The client provides the profile to create along with the profile bytes, the
 *  server records it.
 *
 *  Method: cloudprofiler.projects.profiles.createOffline
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudProfilerCloudPlatform
 *    @c kGTLRAuthScopeCloudProfilerMonitoring
 *    @c kGTLRAuthScopeCloudProfilerMonitoringWrite
 */
@interface GTLRCloudProfilerQuery_ProjectsProfilesCreateOffline : GTLRCloudProfilerQuery
// Previous library name was
//   +[GTLQueryCloudProfiler queryForProjectsProfilesCreateOfflineWithObject:parent:]

/** Parent project to create the profile in. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudProfiler_Profile.
 *
 *  CreateOfflineProfile creates a new profile resource in the offline mode.
 *  The client provides the profile to create along with the profile bytes, the
 *  server records it.
 *
 *  @param object The @c GTLRCloudProfiler_Profile to include in the query.
 *  @param parent Parent project to create the profile in.
 *
 *  @return GTLRCloudProfilerQuery_ProjectsProfilesCreateOffline
 */
+ (instancetype)queryWithObject:(GTLRCloudProfiler_Profile *)object
                         parent:(NSString *)parent;

@end

/**
 *  UpdateProfile updates the profile bytes and labels on the profile resource
 *  created in the online mode. Updating the bytes for profiles created in the
 *  offline mode is currently not supported: the profile content must be
 *  provided at the time of the profile creation.
 *
 *  Method: cloudprofiler.projects.profiles.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudProfilerCloudPlatform
 *    @c kGTLRAuthScopeCloudProfilerMonitoring
 *    @c kGTLRAuthScopeCloudProfilerMonitoringWrite
 */
@interface GTLRCloudProfilerQuery_ProjectsProfilesPatch : GTLRCloudProfilerQuery
// Previous library name was
//   +[GTLQueryCloudProfiler queryForProjectsProfilesPatchWithObject:name:]

/** Output only. Opaque, server-assigned, unique ID for this profile. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Field mask used to specify the fields to be overwritten. Currently only
 *  profile_bytes and labels fields are supported by UpdateProfile, so only
 *  those fields can be specified in the mask. When no mask is provided, all
 *  fields are overwritten.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRCloudProfiler_Profile.
 *
 *  UpdateProfile updates the profile bytes and labels on the profile resource
 *  created in the online mode. Updating the bytes for profiles created in the
 *  offline mode is currently not supported: the profile content must be
 *  provided at the time of the profile creation.
 *
 *  @param object The @c GTLRCloudProfiler_Profile to include in the query.
 *  @param name Output only. Opaque, server-assigned, unique ID for this
 *    profile.
 *
 *  @return GTLRCloudProfilerQuery_ProjectsProfilesPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudProfiler_Profile *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
