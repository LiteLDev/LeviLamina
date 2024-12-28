#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class PropertyGroup;
class RenderParams;
class Tag;
struct MolangScriptArg;
struct PropertySyncData;
// clang-format on

class PropertyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk69cc48;
    ::ll::UntypedStorage<4, 4>   mUnkc8cddf;
    ::ll::UntypedStorage<4, 4>   mUnk1e10c4;
    ::ll::UntypedStorage<4, 4>   mUnkb23db7;
    ::ll::UntypedStorage<4, 4>   mUnkd8981d;
    ::ll::UntypedStorage<1, 1>   mUnk4ecda4;
    ::ll::UntypedStorage<8, 120> mUnk9f800e;
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

    MCAPI bool getMolangValue(uint64 propertyNameHash, ::MolangScriptArg& out) const;

    MCAPI ::PropertyMetadata::ContainedType getPropertyType(uint64 h) const;

    MCAPI ::HashedString const& getString(uint64 h) const;

    MCAPI bool hasDirtyProperties() const;

    MCAPI ::PropertyComponent& operator=(::PropertyComponent&&);

    MCAPI ::PropertySyncData packAllSyncData() const;

    MCAPI ::PropertySyncData packDirtySyncData();

    MCAPI void readLoadedProperties(::CompoundTag const& loadedPropertyTag);

    MCAPI void setAliasProperties(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::Tag>> const& aliasProperties,
        ::std::string const&                                                  aliasName,
        ::std::string const&                                                  canonicalName
    );

    MCAPI ::std::optional<bool> tryGetBool(uint64 h) const;

    MCAPI ::std::optional<float> tryGetFloat(uint64 h) const;

    MCAPI ::std::optional<int> tryGetInt(uint64 h) const;

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
