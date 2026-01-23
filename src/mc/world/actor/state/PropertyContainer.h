#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyValues.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class PropertyGroup;
class PropertyMetadata;
class RenderParams;
class Tag;
struct MolangScriptArg;
struct PropertySyncData;
struct PropertyValues;
// clang-format on

class PropertyContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>>> mPropertyGroup;
    ::ll::TypedStorage<8, 104, ::PropertyValues>                                         mValues;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyContainer(
        ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup,
        ::RenderParams&                                           renderParams
    );

    MCAPI bool _readValueFromTag(::PropertyMetadata const& propertyMetadata, ::Tag const& tag);

    MCAPI void addEntryToSyncData(::PropertyMetadata const& propMetadata, ::PropertySyncData& syncData) const;

    MCAPI bool getMolangValue(uint64 propertyNameHash, ::MolangScriptArg& out) const;

    MCAPI void readLoadedProperties(::CompoundTag const& loadedPropertyTag);

    MCAPI void setAliasProperties(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::Tag>> const& aliasProperties,
        ::std::string const&                                                  aliasName,
        ::std::string const&                                                  canonicalName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup, ::RenderParams& renderParams);
    // NOLINTEND
};
