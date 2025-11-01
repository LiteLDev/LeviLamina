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
    ::ll::TypedStorage<4, 4, ::std::bitset<32>> mDirtyIntProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>> mDirtyFloatProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>> mDirtyBoolProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>> mDirtyEnumIndexProperties;
    ::ll::TypedStorage<1, 1, bool> mEverythingDirty;
    ::ll::TypedStorage<8, 120, ::PropertyContainer> mPropertyContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyComponent& operator=(PropertyComponent const&);
    PropertyComponent(PropertyComponent const&);
    PropertyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyComponent(::PropertyComponent&&);

    MCNAPI PropertyComponent(::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup, ::RenderParams& renderParams);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void applyPendingChanges(::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>> const& pendingChanges);

    MCNAPI bool getBool(uint64 h) const;

    MCNAPI float getFloat(uint64 h) const;

    MCNAPI int getInt(uint64 h) const;

    MCNAPI ::PropertyMetadata::ContainedType getPropertyType(uint64 h) const;

    MCNAPI ::PropertyMetadata::ContainedType getPropertyType(::HashedString const& h) const;

    MCNAPI ::HashedString const& getString(uint64 h) const;

    MCNAPI ::PropertyComponent& operator=(::PropertyComponent&&);

    MCNAPI ::PropertySyncData packDirtySyncData();

    MCNAPI ::std::optional<bool> tryGetBool(uint64 h) const;

    MCNAPI ::HashedString const* tryGetString(uint64 h) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PropertyComponent&&);

    MCNAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup, ::RenderParams& renderParams);
    // NOLINTEND

};
