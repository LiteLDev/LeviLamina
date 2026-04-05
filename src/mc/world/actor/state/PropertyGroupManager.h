#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class PropertyGroup;
// clang-format on

class PropertyGroupManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::PropertyGroup const>>>
        mPropertyGroups;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CompoundTag getActorPropertyDataTag(::HashedString const& actorCanonicalName) const;

#ifdef LL_PLAT_C
    MCAPI void ingestActorPropertyDataTag(::CompoundTag const& propertyData);

    MCAPI void registerGroup(::HashedString const& id, ::std::shared_ptr<::PropertyGroup const> group);
#endif

    MCAPI void tryInitPropertiesOnActor(::Actor& actor) const;
    // NOLINTEND
};
