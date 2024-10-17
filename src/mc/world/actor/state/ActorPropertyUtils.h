#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorPropertyUtils {
// NOLINTBEGIN
MCAPI bool _checkAndQueueBoolValue(
    class PropertyGroup const&,
    uint64                         overallIndex,
    class ActorDefinitionDiffList* actorDiffList,
    bool                           value
);

MCAPI bool _checkAndQueueEnumIndexValueByHash(
    class PropertyGroup const&     propertyGroup,
    uint64                         enumIndexArrayIndex,
    uint64                         overallIndex,
    class ActorDefinitionDiffList* actorDiffList,
    uint64                         value
);

MCAPI bool _checkAndQueueFloatValue(
    class PropertyGroup const&,
    uint64,
    uint64                         overallIndex,
    class ActorDefinitionDiffList* actorDiffList,
    float                          value
);

MCAPI bool _checkAndQueueIntValue(
    class PropertyGroup const&,
    uint64,
    uint64                         overallIndex,
    class ActorDefinitionDiffList* actorDiffList,
    int                            value
);

MCAPI void addPendingEventResponseChange(
    class PropertyComponent const& props,
    class Actor&                   actor,
    class HashedString const&      propertyName,
    struct MolangScriptArg const&  molangResult,
    std::string const&             displayName
);

MCAPI bool
tryQueueBoolValue(class PropertyComponent const& props, class Actor& actor, uint64 propertyNameHash, bool value);

MCAPI bool tryQueueEnumIndexValueByIndex(
    class PropertyComponent const& props,
    class Actor&                   actor,
    uint64                         propertyNameHash,
    uint64                         value
);

MCAPI bool tryQueueEnumIndexValueByString(
    class PropertyComponent const& props,
    class Actor&                   actor,
    uint64                         propertyNameHash,
    std::string const&             value
);

MCAPI bool
tryQueueFloatValue(class PropertyComponent const& props, class Actor& actor, uint64 propertyNameHash, float value);

MCAPI bool
tryQueueIntValue(class PropertyComponent const& props, class Actor& actor, uint64 propertyNameHash, int value);
// NOLINTEND

}; // namespace ActorPropertyUtils
