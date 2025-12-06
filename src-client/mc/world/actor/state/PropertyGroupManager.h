#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class HashedString;
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

    MCAPI void ingestActorPropertyDataTag(::CompoundTag const& propertyData);

    MCAPI void registerGroup(::HashedString const& id, ::std::shared_ptr<::PropertyGroup const> group);

    MCAPI void tryInitPropertiesOnActor(::Actor& actor) const;
    // NOLINTEND
};
