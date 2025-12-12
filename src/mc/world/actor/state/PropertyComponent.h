#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyContainer.h"
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class PropertyGroup;
class RenderParams;
struct PropertySyncData;
// clang-format on

class PropertyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>>> mPropertyGroup;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>>                                          mDirtyIntProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>>                                          mDirtyFloatProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>>                                          mDirtyBoolProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>>                                          mDirtyEnumIndexProperties;
    ::ll::TypedStorage<1, 1, bool>                                                       mEverythingDirty;
    ::ll::TypedStorage<8, 120, ::PropertyContainer>                                      mPropertyContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyComponent& operator=(PropertyComponent const&);
    PropertyComponent(PropertyComponent const&);
    PropertyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyComponent(::PropertyComponent&&);

    MCAPI PropertyComponent(
        ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup,
        ::RenderParams&                                           renderParams
    );

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void
    applyPendingChanges(::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>> const& pendingChanges);

    MCAPI bool getBool(uint64 h) const;

    MCAPI float getFloat(uint64 h) const;

    MCAPI int getInt(uint64 h) const;

    MCAPI ::PropertyMetadata::ContainedType getPropertyType(::HashedString const& h) const;

    MCAPI ::PropertyMetadata::ContainedType getPropertyType(uint64 h) const;

    MCAPI ::HashedString const& getString(uint64 h) const;

    MCAPI ::PropertyComponent& operator=(::PropertyComponent&&);

    MCAPI ::PropertySyncData packDirtySyncData();

    MCAPI ::std::optional<bool> tryGetBool(uint64 h) const;

    MCAPI ::HashedString const* tryGetString(uint64 h) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PropertyComponent&&);

    MCAPI void*
    $ctor(::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup, ::RenderParams& renderParams);
    // NOLINTEND
};
