#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorPropertyUtils {
// NOLINTBEGIN
// symbol: ?_checkAndQueueBoolValue@ActorPropertyUtils@@YA_NAEBVPropertyGroup@@_KPEAVActorDefinitionDiffList@@_N@Z
MCAPI bool _checkAndQueueBoolValue(class PropertyGroup const&, uint64, class ActorDefinitionDiffList*, bool value);

// symbol:
// ?_checkAndQueueEnumIndexValueByHash@ActorPropertyUtils@@YA_NAEBVPropertyGroup@@_K1PEAVActorDefinitionDiffList@@1@Z
MCAPI bool _checkAndQueueEnumIndexValueByHash(
    class PropertyGroup const&,
    uint64,
    uint64,
    class ActorDefinitionDiffList*,
    uint64 value
);

// symbol: ?_checkAndQueueFloatValue@ActorPropertyUtils@@YA_NAEBVPropertyGroup@@_K1PEAVActorDefinitionDiffList@@M@Z
MCAPI bool
_checkAndQueueFloatValue(class PropertyGroup const&, uint64, uint64, class ActorDefinitionDiffList*, float value);

// symbol: ?_checkAndQueueIntValue@ActorPropertyUtils@@YA_NAEBVPropertyGroup@@_K1PEAVActorDefinitionDiffList@@H@Z
MCAPI bool
_checkAndQueueIntValue(class PropertyGroup const&, uint64, uint64, class ActorDefinitionDiffList*, int value);

// symbol:
// ?addPendingEventResponseChange@ActorPropertyUtils@@YAXAEBVPropertyComponent@@AEAVActor@@AEBVHashedString@@AEBUMolangScriptArg@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void addPendingEventResponseChange(
    class PropertyComponent const& props,
    class Actor&                   actor,
    class HashedString const&      propertyName,
    struct MolangScriptArg const&,
    std::string const& displayName
);

// symbol: ?tryQueueBoolValue@ActorPropertyUtils@@YA_NAEBVPropertyComponent@@AEAVActor@@_K_N@Z
MCAPI bool tryQueueBoolValue(class PropertyComponent const& props, class Actor& actor, uint64, bool value);

// symbol: ?tryQueueEnumIndexValueByIndex@ActorPropertyUtils@@YA_NAEBVPropertyComponent@@AEAVActor@@_K2@Z
MCAPI bool
tryQueueEnumIndexValueByIndex(class PropertyComponent const& props, class Actor& actor, uint64, uint64 value);

// symbol:
// ?tryQueueEnumIndexValueByString@ActorPropertyUtils@@YA_NAEBVPropertyComponent@@AEAVActor@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool tryQueueEnumIndexValueByString(
    class PropertyComponent const& props,
    class Actor&                   actor,
    uint64,
    std::string const& value
);

// symbol: ?tryQueueFloatValue@ActorPropertyUtils@@YA_NAEBVPropertyComponent@@AEAVActor@@_KM@Z
MCAPI bool tryQueueFloatValue(class PropertyComponent const& props, class Actor& actor, uint64, float value);

// symbol: ?tryQueueIntValue@ActorPropertyUtils@@YA_NAEBVPropertyComponent@@AEAVActor@@_KH@Z
MCAPI bool tryQueueIntValue(class PropertyComponent const& props, class Actor& actor, uint64, int value);
// NOLINTEND

}; // namespace ActorPropertyUtils
