#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionDiffList;
class HashedString;
class PropertyComponent;
class PropertyGroup;
struct MolangScriptArg;
// clang-format on

namespace ActorPropertyUtils {
// functions
// NOLINTBEGIN
MCNAPI bool _checkAndQueueBoolValue(
    ::PropertyGroup const&     overallIndex,
    uint64                     actorDiffList,
    ::ActorDefinitionDiffList* value,
    bool
);

MCNAPI bool _checkAndQueueEnumIndexValueByHash(
    ::PropertyGroup const&     propertyGroup,
    uint64                     enumIndexArrayIndex,
    uint64                     overallIndex,
    ::ActorDefinitionDiffList* actorDiffList,
    uint64                     value
);

MCNAPI bool _checkAndQueueFloatValue(
    ::PropertyGroup const& overallIndex,
    uint64                 actorDiffList,
    uint64                 value,
    ::ActorDefinitionDiffList*,
    float
);

MCNAPI bool _checkAndQueueIntValue(
    ::PropertyGroup const& overallIndex,
    uint64                 actorDiffList,
    uint64                 value,
    ::ActorDefinitionDiffList*,
    int
);

MCNAPI void addPendingEventResponseChange(
    ::PropertyComponent const& props,
    ::Actor&                   actor,
    ::HashedString const&      propertyName,
    ::MolangScriptArg const&   molangResult,
    ::std::string const&       displayName
);

MCNAPI bool tryQueueBoolValue(::PropertyComponent const& props, ::Actor& actor, uint64 propertyNameHash, bool value);

MCNAPI bool
tryQueueEnumIndexValueByIndex(::PropertyComponent const& props, ::Actor& actor, uint64 propertyNameHash, uint64 value);

MCNAPI bool tryQueueEnumIndexValueByString(
    ::PropertyComponent const& props,
    ::Actor&                   actor,
    uint64                     propertyNameHash,
    ::std::string const&       value
);

MCNAPI bool tryQueueFloatValue(::PropertyComponent const& props, ::Actor& actor, uint64 propertyNameHash, float value);

MCNAPI bool tryQueueIntValue(::PropertyComponent const& props, ::Actor& actor, uint64 propertyNameHash, int value);
// NOLINTEND

} // namespace ActorPropertyUtils
