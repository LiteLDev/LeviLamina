#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionDiffList;
class EntityOverrides;
class HashedString;
class PropertyComponent;
class PropertyGroup;
struct ActorUniqueID;
struct MolangScriptArg;
struct PropertySyncData;
// clang-format on

namespace ActorPropertyUtils {
// functions
// NOLINTBEGIN
MCAPI bool _checkAndQueueBoolValue(
    ::PropertyGroup const&,
    uint64                     overallIndex,
    ::ActorDefinitionDiffList* actorDiffList,
    bool                       value
);

MCAPI bool _checkAndQueueEnumIndexValueByHash(
    ::PropertyGroup const&     propertyGroup,
    uint64                     enumIndexArrayIndex,
    uint64                     overallIndex,
    ::ActorDefinitionDiffList* actorDiffList,
    uint64                     value
);

MCAPI bool _checkAndQueueFloatValue(
    ::PropertyGroup const&,
    uint64,
    uint64                     overallIndex,
    ::ActorDefinitionDiffList* actorDiffList,
    float                      value
);

MCAPI bool _checkAndQueueIntValue(
    ::PropertyGroup const&,
    uint64,
    uint64                     overallIndex,
    ::ActorDefinitionDiffList* actorDiffList,
    int                        value
);

MCAPI void addPendingEventResponseChange(
    ::PropertyComponent const& props,
    ::Actor&                   actor,
    ::HashedString const&      propertyName,
    ::MolangScriptArg const&   molangResult,
    ::std::string const&       displayName
);

MCAPI_C void ingestPropertySyncData(
    ::PropertyComponent&      props,
    ::PropertySyncData const& syncData,
    ::ActorUniqueID           id,
    ::EntityOverrides const&  overrides
);

MCAPI bool tryQueueBoolValue(::PropertyComponent const& props, ::Actor& actor, uint64 propertyNameHash, bool value);

MCAPI bool
tryQueueEnumIndexValueByIndex(::PropertyComponent const& props, ::Actor& actor, uint64 propertyNameHash, uint64 value);

MCAPI bool tryQueueEnumIndexValueByString(
    ::PropertyComponent const& props,
    ::Actor&                   actor,
    uint64                     propertyNameHash,
    ::std::string const&       value
);

MCAPI bool tryQueueFloatValue(::PropertyComponent const& props, ::Actor& actor, uint64 propertyNameHash, float value);

MCAPI bool tryQueueIntValue(::PropertyComponent const& props, ::Actor& actor, uint64 propertyNameHash, int value);
// NOLINTEND

} // namespace ActorPropertyUtils
