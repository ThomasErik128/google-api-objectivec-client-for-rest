// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Replica Pool API (replicapool/v1beta1)
// Description:
//   The Replica Pool API allows users to declaratively provision and manage
//   groups of Google Compute Engine instances based on a common template.
// Documentation:
//   https://developers.google.com/compute/docs/replica-pool/

#import "GTLRReplicaPoolQuery.h"

#import "GTLRReplicaPoolObjects.h"

@implementation GTLRReplicaPoolQuery

@dynamic fields;

@end

@implementation GTLRReplicaPoolQuery_PoolsDelete

@dynamic poolName, projectName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithObject:(GTLRReplicaPool_PoolsDeleteRequest *)object
                    projectName:(NSString *)projectName
                   zoneProperty:(NSString *)zoneProperty
                       poolName:(NSString *)poolName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"poolName", @"projectName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools/{poolName}";
  GTLRReplicaPoolQuery_PoolsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.poolName = poolName;
  query.loggingName = @"replicapool.pools.delete";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_PoolsGet

@dynamic poolName, projectName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithProjectName:(NSString *)projectName
                        zoneProperty:(NSString *)zoneProperty
                            poolName:(NSString *)poolName {
  NSArray *pathParams = @[
    @"poolName", @"projectName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools/{poolName}";
  GTLRReplicaPoolQuery_PoolsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.poolName = poolName;
  query.expectedObjectClass = [GTLRReplicaPool_Pool class];
  query.loggingName = @"replicapool.pools.get";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_PoolsInsert

@dynamic projectName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithObject:(GTLRReplicaPool_Pool *)object
                    projectName:(NSString *)projectName
                   zoneProperty:(NSString *)zoneProperty {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"projectName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools";
  GTLRReplicaPoolQuery_PoolsInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.expectedObjectClass = [GTLRReplicaPool_Pool class];
  query.loggingName = @"replicapool.pools.insert";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_PoolsList

@dynamic maxResults, pageToken, projectName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithProjectName:(NSString *)projectName
                        zoneProperty:(NSString *)zoneProperty {
  NSArray *pathParams = @[
    @"projectName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools";
  GTLRReplicaPoolQuery_PoolsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.expectedObjectClass = [GTLRReplicaPool_PoolsListResponse class];
  query.loggingName = @"replicapool.pools.list";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_PoolsResize

@dynamic numReplicas, poolName, projectName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithProjectName:(NSString *)projectName
                        zoneProperty:(NSString *)zoneProperty
                            poolName:(NSString *)poolName {
  NSArray *pathParams = @[
    @"poolName", @"projectName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools/{poolName}/resize";
  GTLRReplicaPoolQuery_PoolsResize *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.poolName = poolName;
  query.expectedObjectClass = [GTLRReplicaPool_Pool class];
  query.loggingName = @"replicapool.pools.resize";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_PoolsUpdatetemplate

@dynamic poolName, projectName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithObject:(GTLRReplicaPool_Template *)object
                    projectName:(NSString *)projectName
                   zoneProperty:(NSString *)zoneProperty
                       poolName:(NSString *)poolName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"poolName", @"projectName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools/{poolName}/updateTemplate";
  GTLRReplicaPoolQuery_PoolsUpdatetemplate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.poolName = poolName;
  query.loggingName = @"replicapool.pools.updatetemplate";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_ReplicasDelete

@dynamic poolName, projectName, replicaName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithObject:(GTLRReplicaPool_ReplicasDeleteRequest *)object
                    projectName:(NSString *)projectName
                   zoneProperty:(NSString *)zoneProperty
                       poolName:(NSString *)poolName
                    replicaName:(NSString *)replicaName {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[
    @"poolName", @"projectName", @"replicaName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools/{poolName}/replicas/{replicaName}";
  GTLRReplicaPoolQuery_ReplicasDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.poolName = poolName;
  query.replicaName = replicaName;
  query.expectedObjectClass = [GTLRReplicaPool_Replica class];
  query.loggingName = @"replicapool.replicas.delete";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_ReplicasGet

@dynamic poolName, projectName, replicaName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithProjectName:(NSString *)projectName
                        zoneProperty:(NSString *)zoneProperty
                            poolName:(NSString *)poolName
                         replicaName:(NSString *)replicaName {
  NSArray *pathParams = @[
    @"poolName", @"projectName", @"replicaName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools/{poolName}/replicas/{replicaName}";
  GTLRReplicaPoolQuery_ReplicasGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.poolName = poolName;
  query.replicaName = replicaName;
  query.expectedObjectClass = [GTLRReplicaPool_Replica class];
  query.loggingName = @"replicapool.replicas.get";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_ReplicasList

@dynamic maxResults, pageToken, poolName, projectName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithProjectName:(NSString *)projectName
                        zoneProperty:(NSString *)zoneProperty
                            poolName:(NSString *)poolName {
  NSArray *pathParams = @[
    @"poolName", @"projectName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools/{poolName}/replicas";
  GTLRReplicaPoolQuery_ReplicasList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.poolName = poolName;
  query.expectedObjectClass = [GTLRReplicaPool_ReplicasListResponse class];
  query.loggingName = @"replicapool.replicas.list";
  return query;
}

@end

@implementation GTLRReplicaPoolQuery_ReplicasRestart

@dynamic poolName, projectName, replicaName, zoneProperty;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"zoneProperty" : @"zone" };
}

+ (instancetype)queryWithProjectName:(NSString *)projectName
                        zoneProperty:(NSString *)zoneProperty
                            poolName:(NSString *)poolName
                         replicaName:(NSString *)replicaName {
  NSArray *pathParams = @[
    @"poolName", @"projectName", @"replicaName", @"zone"
  ];
  NSString *pathURITemplate = @"{projectName}/zones/{zone}/pools/{poolName}/replicas/{replicaName}/restart";
  GTLRReplicaPoolQuery_ReplicasRestart *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.projectName = projectName;
  query.zoneProperty = zoneProperty;
  query.poolName = poolName;
  query.replicaName = replicaName;
  query.expectedObjectClass = [GTLRReplicaPool_Replica class];
  query.loggingName = @"replicapool.replicas.restart";
  return query;
}

@end
