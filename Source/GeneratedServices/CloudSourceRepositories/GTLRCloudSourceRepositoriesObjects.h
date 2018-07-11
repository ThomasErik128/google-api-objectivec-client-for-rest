// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Source Repositories API (sourcerepo/v1)
// Description:
//   Access source code repositories hosted by Google.
// Documentation:
//   https://cloud.google.com/source-repositories/docs/apis

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudSourceRepositories_AuditConfig;
@class GTLRCloudSourceRepositories_AuditLogConfig;
@class GTLRCloudSourceRepositories_Binding;
@class GTLRCloudSourceRepositories_MirrorConfig;
@class GTLRCloudSourceRepositories_Policy;
@class GTLRCloudSourceRepositories_ProjectConfig;
@class GTLRCloudSourceRepositories_ProjectConfig_PubsubConfigs;
@class GTLRCloudSourceRepositories_PubsubConfig;
@class GTLRCloudSourceRepositories_Repo;
@class GTLRCloudSourceRepositories_Repo_PubsubConfigs;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudSourceRepositories_AuditLogConfig.logType

/**
 *  Admin reads. Example: CloudIAM getIamPolicy
 *
 *  Value: "ADMIN_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudSourceRepositories_AuditLogConfig_LogType_AdminRead;
/**
 *  Data reads. Example: CloudSQL Users list
 *
 *  Value: "DATA_READ"
 */
GTLR_EXTERN NSString * const kGTLRCloudSourceRepositories_AuditLogConfig_LogType_DataRead;
/**
 *  Data writes. Example: CloudSQL Users create
 *
 *  Value: "DATA_WRITE"
 */
GTLR_EXTERN NSString * const kGTLRCloudSourceRepositories_AuditLogConfig_LogType_DataWrite;
/**
 *  Default case. Should never be this.
 *
 *  Value: "LOG_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudSourceRepositories_AuditLogConfig_LogType_LogTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRCloudSourceRepositories_PubsubConfig.messageFormat

/**
 *  The message payload is a JSON string of SourceRepoEvent.
 *
 *  Value: "JSON"
 */
GTLR_EXTERN NSString * const kGTLRCloudSourceRepositories_PubsubConfig_MessageFormat_Json;
/**
 *  Unspecified.
 *
 *  Value: "MESSAGE_FORMAT_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudSourceRepositories_PubsubConfig_MessageFormat_MessageFormatUnspecified;
/**
 *  The message payload is a serialized protocol buffer of SourceRepoEvent.
 *
 *  Value: "PROTOBUF"
 */
GTLR_EXTERN NSString * const kGTLRCloudSourceRepositories_PubsubConfig_MessageFormat_Protobuf;

/**
 *  Specifies the audit configuration for a service.
 *  The configuration determines which permission types are logged, and what
 *  identities, if any, are exempted from logging.
 *  An AuditConfig must have one or more AuditLogConfigs.
 *  If there are AuditConfigs for both `allServices` and a specific service,
 *  the union of the two AuditConfigs is used for that service: the log_types
 *  specified in each AuditConfig are enabled, and the exempted_members in each
 *  AuditLogConfig are exempted.
 *  Example Policy with multiple AuditConfigs:
 *  {
 *  "audit_configs": [
 *  {
 *  "service": "allServices"
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  "exempted_members": [
 *  "user:foo\@gmail.com"
 *  ]
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  },
 *  {
 *  "log_type": "ADMIN_READ",
 *  }
 *  ]
 *  },
 *  {
 *  "service": "fooservice.googleapis.com"
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  "exempted_members": [
 *  "user:bar\@gmail.com"
 *  ]
 *  }
 *  ]
 *  }
 *  ]
 *  }
 *  For fooservice, this policy enables DATA_READ, DATA_WRITE and ADMIN_READ
 *  logging. It also exempts foo\@gmail.com from DATA_READ logging, and
 *  bar\@gmail.com from DATA_WRITE logging.
 */
@interface GTLRCloudSourceRepositories_AuditConfig : GTLRObject

/** The configuration for logging of each type of permission. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudSourceRepositories_AuditLogConfig *> *auditLogConfigs;

/**
 *  Specifies a service that will be enabled for audit logging.
 *  For example, `storage.googleapis.com`, `cloudsql.googleapis.com`.
 *  `allServices` is a special value that covers all services.
 */
@property(nonatomic, copy, nullable) NSString *service;

@end


/**
 *  Provides the configuration for logging a type of permissions.
 *  Example:
 *  {
 *  "audit_log_configs": [
 *  {
 *  "log_type": "DATA_READ",
 *  "exempted_members": [
 *  "user:foo\@gmail.com"
 *  ]
 *  },
 *  {
 *  "log_type": "DATA_WRITE",
 *  }
 *  ]
 *  }
 *  This enables 'DATA_READ' and 'DATA_WRITE' logging, while exempting
 *  foo\@gmail.com from DATA_READ logging.
 */
@interface GTLRCloudSourceRepositories_AuditLogConfig : GTLRObject

/**
 *  Specifies the identities that do not cause logging for this type of
 *  permission.
 *  Follows the same format of Binding.members.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *exemptedMembers;

/**
 *  The log type that this config enables.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudSourceRepositories_AuditLogConfig_LogType_AdminRead
 *        Admin reads. Example: CloudIAM getIamPolicy (Value: "ADMIN_READ")
 *    @arg @c kGTLRCloudSourceRepositories_AuditLogConfig_LogType_DataRead Data
 *        reads. Example: CloudSQL Users list (Value: "DATA_READ")
 *    @arg @c kGTLRCloudSourceRepositories_AuditLogConfig_LogType_DataWrite Data
 *        writes. Example: CloudSQL Users create (Value: "DATA_WRITE")
 *    @arg @c kGTLRCloudSourceRepositories_AuditLogConfig_LogType_LogTypeUnspecified
 *        Default case. Should never be this. (Value: "LOG_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *logType;

@end


/**
 *  Associates `members` with a `role`.
 */
@interface GTLRCloudSourceRepositories_Binding : GTLRObject

/**
 *  Specifies the identities requesting access for a Cloud Platform resource.
 *  `members` can have the following values:
 *  * `allUsers`: A special identifier that represents anyone who is
 *  on the internet; with or without a Google account.
 *  * `allAuthenticatedUsers`: A special identifier that represents anyone
 *  who is authenticated with a Google account or a service account.
 *  * `user:{emailid}`: An email address that represents a specific Google
 *  account. For example, `alice\@gmail.com` .
 *  * `serviceAccount:{emailid}`: An email address that represents a service
 *  account. For example, `my-other-app\@appspot.gserviceaccount.com`.
 *  * `group:{emailid}`: An email address that represents a Google group.
 *  For example, `admins\@example.com`.
 *  * `domain:{domain}`: A Google Apps domain name that represents all the
 *  users of that domain. For example, `google.com` or `example.com`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/**
 *  Role that is assigned to `members`.
 *  For example, `roles/viewer`, `roles/editor`, or `roles/owner`.
 *  Required
 */
@property(nonatomic, copy, nullable) NSString *role;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudSourceRepositories_Empty : GTLRObject
@end


/**
 *  Response for ListRepos. The size is not set in the returned repositories.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "repos" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudSourceRepositories_ListReposResponse : GTLRCollectionObject

/**
 *  If non-empty, additional repositories exist within the project. These
 *  can be retrieved by including this value in the next ListReposRequest's
 *  page_token field.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The listed repos.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudSourceRepositories_Repo *> *repos;

@end


/**
 *  Configuration to automatically mirror a repository from another
 *  hosting service, for example GitHub or Bitbucket.
 */
@interface GTLRCloudSourceRepositories_MirrorConfig : GTLRObject

/**
 *  ID of the SSH deploy key at the other hosting service.
 *  Removing this key from the other service would deauthorize
 *  Google Cloud Source Repositories from mirroring.
 */
@property(nonatomic, copy, nullable) NSString *deployKeyId;

/** URL of the main repository at the other hosting service. */
@property(nonatomic, copy, nullable) NSString *url;

/**
 *  ID of the webhook listening to updates to trigger mirroring.
 *  Removing this webhook from the other hosting service will stop
 *  Google Cloud Source Repositories from receiving notifications,
 *  and thereby disabling mirroring.
 */
@property(nonatomic, copy, nullable) NSString *webhookId;

@end


/**
 *  Defines an Identity and Access Management (IAM) policy. It is used to
 *  specify access control policies for Cloud Platform resources.
 *  A `Policy` consists of a list of `bindings`. A `binding` binds a list of
 *  `members` to a `role`, where the members can be user accounts, Google
 *  groups,
 *  Google domains, and service accounts. A `role` is a named list of
 *  permissions
 *  defined by IAM.
 *  **JSON Example**
 *  {
 *  "bindings": [
 *  {
 *  "role": "roles/owner",
 *  "members": [
 *  "user:mike\@example.com",
 *  "group:admins\@example.com",
 *  "domain:google.com",
 *  "serviceAccount:my-other-app\@appspot.gserviceaccount.com"
 *  ]
 *  },
 *  {
 *  "role": "roles/viewer",
 *  "members": ["user:sean\@example.com"]
 *  }
 *  ]
 *  }
 *  **YAML Example**
 *  bindings:
 *  - members:
 *  - user:mike\@example.com
 *  - group:admins\@example.com
 *  - domain:google.com
 *  - serviceAccount:my-other-app\@appspot.gserviceaccount.com
 *  role: roles/owner
 *  - members:
 *  - user:sean\@example.com
 *  role: roles/viewer
 *  For a description of IAM and its features, see the
 *  [IAM developer's guide](https://cloud.google.com/iam/docs).
 */
@interface GTLRCloudSourceRepositories_Policy : GTLRObject

/** Specifies cloud audit logging configuration for this policy. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudSourceRepositories_AuditConfig *> *auditConfigs;

/**
 *  Associates a list of `members` to a `role`.
 *  `bindings` with no members will result in an error.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudSourceRepositories_Binding *> *bindings;

/**
 *  `etag` is used for optimistic concurrency control as a way to help
 *  prevent simultaneous updates of a policy from overwriting each other.
 *  It is strongly suggested that systems make use of the `etag` in the
 *  read-modify-write cycle to perform policy updates in order to avoid race
 *  conditions: An `etag` is returned in the response to `getIamPolicy`, and
 *  systems are expected to put that etag in the request to `setIamPolicy` to
 *  ensure that their change will be applied to the same version of the policy.
 *  If no `etag` is provided in the call to `setIamPolicy`, then the existing
 *  policy is overwritten blindly.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Deprecated.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  Cloud Source Repositories configuration of a project.
 */
@interface GTLRCloudSourceRepositories_ProjectConfig : GTLRObject

/**
 *  Reject a Git push that contains a private key.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *enablePrivateKeyCheck;

/** The name of the project. Values are of the form `projects/<project>`. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  How this project publishes a change in the repositories through Cloud
 *  Pub/Sub. Keyed by the topic names.
 */
@property(nonatomic, strong, nullable) GTLRCloudSourceRepositories_ProjectConfig_PubsubConfigs *pubsubConfigs;

@end


/**
 *  How this project publishes a change in the repositories through Cloud
 *  Pub/Sub. Keyed by the topic names.
 *
 *  @note This class is documented as having more properties of
 *        GTLRCloudSourceRepositories_PubsubConfig. Use @c -additionalJSONKeys
 *        and @c -additionalPropertyForName: to get the list of properties and
 *        then fetch them; or @c -additionalProperties to fetch them all at
 *        once.
 */
@interface GTLRCloudSourceRepositories_ProjectConfig_PubsubConfigs : GTLRObject
@end


/**
 *  Configuration to publish a Cloud Pub/Sub message.
 */
@interface GTLRCloudSourceRepositories_PubsubConfig : GTLRObject

/**
 *  The format of the Cloud Pub/Sub messages.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudSourceRepositories_PubsubConfig_MessageFormat_Json The
 *        message payload is a JSON string of SourceRepoEvent. (Value: "JSON")
 *    @arg @c kGTLRCloudSourceRepositories_PubsubConfig_MessageFormat_MessageFormatUnspecified
 *        Unspecified. (Value: "MESSAGE_FORMAT_UNSPECIFIED")
 *    @arg @c kGTLRCloudSourceRepositories_PubsubConfig_MessageFormat_Protobuf
 *        The message payload is a serialized protocol buffer of
 *        SourceRepoEvent. (Value: "PROTOBUF")
 */
@property(nonatomic, copy, nullable) NSString *messageFormat;

/**
 *  Email address of the service account used for publishing Cloud Pub/Sub
 *  messages. This service account needs to be in the same project as the
 *  PubsubConfig. When added, the caller needs to have
 *  iam.serviceAccounts.actAs permission on this service account. If
 *  unspecified, it defaults to the compute engine default service account.
 */
@property(nonatomic, copy, nullable) NSString *serviceAccountEmail;

/**
 *  A topic of Cloud Pub/Sub. Values are of the form
 *  `projects/<project>/topics/<topic>`. The project needs to be the same
 *  project as this config is in.
 */
@property(nonatomic, copy, nullable) NSString *topic;

@end


/**
 *  A repository (or repo) is a Git repository storing versioned source content.
 */
@interface GTLRCloudSourceRepositories_Repo : GTLRObject

/**
 *  How this repository mirrors a repository managed by another service.
 *  Read-only field.
 */
@property(nonatomic, strong, nullable) GTLRCloudSourceRepositories_MirrorConfig *mirrorConfig;

/**
 *  Resource name of the repository, of the form
 *  `projects/<project>/repos/<repo>`. The repo name may contain slashes.
 *  eg, `projects/myproject/repos/name/with/slash`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  How this repository publishes a change in the repository through Cloud
 *  Pub/Sub. Keyed by the topic names.
 */
@property(nonatomic, strong, nullable) GTLRCloudSourceRepositories_Repo_PubsubConfigs *pubsubConfigs;

/**
 *  The disk usage of the repo, in bytes. Read-only field. Size is only
 *  returned by GetRepo.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *size;

/**
 *  URL to clone the repository from Google Cloud Source Repositories.
 *  Read-only field.
 */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  How this repository publishes a change in the repository through Cloud
 *  Pub/Sub. Keyed by the topic names.
 *
 *  @note This class is documented as having more properties of
 *        GTLRCloudSourceRepositories_PubsubConfig. Use @c -additionalJSONKeys
 *        and @c -additionalPropertyForName: to get the list of properties and
 *        then fetch them; or @c -additionalProperties to fetch them all at
 *        once.
 */
@interface GTLRCloudSourceRepositories_Repo_PubsubConfigs : GTLRObject
@end


/**
 *  Request message for `SetIamPolicy` method.
 */
@interface GTLRCloudSourceRepositories_SetIamPolicyRequest : GTLRObject

/**
 *  REQUIRED: The complete policy to be applied to the `resource`. The size of
 *  the policy is limited to a few 10s of KB. An empty policy is a
 *  valid policy but certain Cloud Platform services (such as Projects)
 *  might reject them.
 */
@property(nonatomic, strong, nullable) GTLRCloudSourceRepositories_Policy *policy;

/**
 *  OPTIONAL: A FieldMask specifying which fields of the policy to modify. Only
 *  the fields in the mask will be modified. If no mask is provided, the
 *  following default mask is used:
 *  paths: "bindings, etag"
 *  This field is only used by Cloud IAM.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

@end


/**
 *  Request message for `TestIamPermissions` method.
 */
@interface GTLRCloudSourceRepositories_TestIamPermissionsRequest : GTLRObject

/**
 *  The set of permissions to check for the `resource`. Permissions with
 *  wildcards (such as '*' or 'storage.*') are not allowed. For more
 *  information see
 *  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Response message for `TestIamPermissions` method.
 */
@interface GTLRCloudSourceRepositories_TestIamPermissionsResponse : GTLRObject

/**
 *  A subset of `TestPermissionsRequest.permissions` that the caller is
 *  allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Request for UpdateProjectConfig.
 */
@interface GTLRCloudSourceRepositories_UpdateProjectConfigRequest : GTLRObject

/** The new configuration for the project. */
@property(nonatomic, strong, nullable) GTLRCloudSourceRepositories_ProjectConfig *projectConfig;

/**
 *  A FieldMask specifying which fields of the project_config to modify. Only
 *  the fields in the mask will be modified. If no mask is provided, this
 *  request is no-op.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

@end


/**
 *  Request for UpdateRepo.
 */
@interface GTLRCloudSourceRepositories_UpdateRepoRequest : GTLRObject

/** The new configuration for the repository. */
@property(nonatomic, strong, nullable) GTLRCloudSourceRepositories_Repo *repo;

/**
 *  A FieldMask specifying which fields of the repo to modify. Only the fields
 *  in the mask will be modified. If no mask is provided, this request is
 *  no-op.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
