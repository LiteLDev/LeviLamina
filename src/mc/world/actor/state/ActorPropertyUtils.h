#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityOverrides;
class HashedString;
class PropertyComponent;
class PropertyGroup;
class PropertyMetadata;
struct ActorUniqueID;
struct MolangScriptArg;
struct PropertySyncData;
// clang-format on

namespace ActorPropertyUtils {
// functions
// NOLINTBEGIN
MCAPI ::PropertyMetadata const* _getMetadataIfTypeMatches(
    ::PropertyGroup const&            propertyGroup,
    uint64                            propertyNameHash,
    ::PropertyMetadata::ContainedType propertyType
);

MCAPI void addPendingEventResponseChange(
    ::PropertyComponent const& props,
    ::Actor&                   actor,
    ::HashedString const&      propertyName,
    ::MolangScriptArg const&   molangResult,
    ::std::string const&       displayName
);

#ifdef LL_PLAT_C
MCAPI void ingestPropertySyncData(
    ::PropertyComponent&      props,
    ::PropertySyncData const& syncData,
    ::ActorUniqueID           id,
    ::EntityOverrides const&  overrides
);
#endif

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

MCAPI bool tryQueueVariantValue(
    ::PropertyComponent const&                             properties,
    ::Actor&                                               actor,
    uint64                                                 propertyNameHash,
    ::std::variant<int, float, bool, ::std::string> const& value
);
// NOLINTEND

} // namespace ActorPropertyUtils
