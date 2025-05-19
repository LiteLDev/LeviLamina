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
    MCNAPI PropertyContainer(
        ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup,
        ::RenderParams&                                           renderParams
    );

    MCNAPI void _addDataToCompoundTag(::CompoundTag& compoundTag, ::PropertyMetadata const& propertyMetadata) const;

    MCNAPI bool _readValueFromTag(::PropertyMetadata const& propertyMetadata, ::Tag const& tag);

    MCNAPI void addEntryToSyncData(::PropertyMetadata const& propMetadata, ::PropertySyncData& syncData) const;

    MCNAPI bool getMolangValue(uint64 propertyNameHash, ::MolangScriptArg& out) const;

    MCNAPI ::std::optional<::std::variant<int, float, bool, ::std::string>>
    getValueVariant(uint64 propertyNameHash) const;

    MCNAPI void readLoadedProperties(::CompoundTag const& loadedPropertyTag);

    MCNAPI void setAliasProperties(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::Tag>> const& aliasProperties,
        ::std::string const&                                                  aliasName,
        ::std::string const&                                                  canonicalName
    );

    MCNAPI void setFloatValue(uint64 floatArrayIndex, float value);

    MCNAPI void setIntValue(uint64 intArrayIndex, int value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup, ::RenderParams& renderParams);
    // NOLINTEND
};
