#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorPropertyUtils {
// NOLINTBEGIN
MCAPI bool _checkAndQueueBoolValue(class PropertyGroup const&, uint64, class ActorDefinitionDiffList*, bool value);

MCAPI bool _checkAndQueueEnumIndexValueByHash(
    class PropertyGroup const&,
    uint64,
    uint64,
    class ActorDefinitionDiffList*,
    uint64 value
);

MCAPI bool
_checkAndQueueFloatValue(class PropertyGroup const&, uint64, uint64, class ActorDefinitionDiffList*, float value);

MCAPI bool
_checkAndQueueIntValue(class PropertyGroup const&, uint64, uint64, class ActorDefinitionDiffList*, int value);

MCAPI void addPendingEventResponseChange(
    class PropertyComponent const& props,
    class Actor&                   actor,
    class HashedString const&      propertyName,
    struct MolangScriptArg const&,
    std::string const& displayName
);

MCAPI bool tryQueueBoolValue(class PropertyComponent const& props, class Actor& actor, uint64, bool value);

MCAPI bool
tryQueueEnumIndexValueByIndex(class PropertyComponent const& props, class Actor& actor, uint64, uint64 value);

MCAPI bool tryQueueEnumIndexValueByString(
    class PropertyComponent const& props,
    class Actor&                   actor,
    uint64,
    std::string const& value
);

MCAPI bool tryQueueFloatValue(class PropertyComponent const& props, class Actor& actor, uint64, float value);

MCAPI bool tryQueueIntValue(class PropertyComponent const& props, class Actor& actor, uint64, int value);
// NOLINTEND

}; // namespace ActorPropertyUtils
