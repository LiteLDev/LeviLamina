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
// clang-format on

class PropertyContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk3be86d;
    ::ll::UntypedStorage<8, 104> mUnkab9c5c;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyContainer& operator=(PropertyContainer const&);
    PropertyContainer(PropertyContainer const&);
    PropertyContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyContainer(
        ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup,
        ::RenderParams&                                           renderParams
    );

    MCAPI void _addDataToCompoundTag(::CompoundTag& compoundTag, ::PropertyMetadata const& propertyMetadata) const;

    MCAPI bool _readValueFromTag(::PropertyMetadata const& propertyMetadata, ::Tag const& tag);

    MCAPI bool _trySetEnumIndexByString(uint64 enumIndexArrayIndex, ::std::string const& value);

    MCAPI bool getMolangValue(uint64 propertyNameHash, ::MolangScriptArg& out) const;

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
