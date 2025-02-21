#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyContainer(
        ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup,
        ::RenderParams&                                           renderParams
    );

    MCAPI void _addDataToCompoundTag(::CompoundTag& compoundTag, ::PropertyMetadata const& propertyMetadata) const;

    MCAPI bool _readValueFromTag(::PropertyMetadata const& propertyMetadata, ::Tag const& tag);

    MCAPI void addEntryToSyncData(::PropertyMetadata const& propMetadata, ::PropertySyncData& syncData) const;

    MCAPI bool getMolangValue(uint64 propertyNameHash, ::MolangScriptArg& out) const;

    MCAPI ::std::optional<::std::variant<int, float, bool, ::std::string>> getValueVariant(uint64 propertyNameHash
    ) const;

    MCAPI void readLoadedProperties(::CompoundTag const& loadedPropertyTag);

    MCAPI void setAliasProperties(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::Tag>> const& aliasProperties,
        ::std::string const&                                                  aliasName,
        ::std::string const&                                                  canonicalName
    );

    MCAPI void setFloatValue(uint64 floatArrayIndex, float value);

    MCAPI void setIntValue(uint64 intArrayIndex, int value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup, ::RenderParams& renderParams);
    // NOLINTEND
};
