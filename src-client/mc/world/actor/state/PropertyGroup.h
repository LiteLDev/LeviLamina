#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/actor/state/DefaultPropertyValues.h"
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class HashedString;
class ListTag;
class PropertyMetadata;
class RenderParams;
namespace Json { class Value; }
// clang-format on

class PropertyGroup : public ::std::enable_shared_from_this<::PropertyGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PropertyMetadata>> mPropertyMetadata;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<uint64, uint64, ::std::less<uint64>, ::std::vector<uint64>, ::std::vector<int64>>>
                                                                            mPropertyIndexesByHash;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, uint64>>  mPropertyIndexesByString;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<int, int>>>         mIntPropertyLimits;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, float>>>     mFloatPropertyLimits;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::HashedString>>> mStringEnumValues;
    ::ll::TypedStorage<8, 96, ::DefaultPropertyValues>                      mDefaultValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyGroup();

    MCAPI void _addBoolProperty(::std::string const& name, bool clientSync, bool defaultValue);

    MCAPI void _addEnumIndexProperty(
        ::std::string const&                 name,
        bool                                 clientSync,
        ::ExpressionNode&&                   defaultExpression,
        ::std::vector<::HashedString> const& enumValues
    );

    MCAPI void _addEnumIndexProperty(
        ::std::string const&                 name,
        bool                                 clientSync,
        uint64                               defaultValue,
        ::std::vector<::HashedString> const& enumValues
    );

    MCAPI void _addFloatProperty(
        ::std::string const& name,
        bool                 clientSync,
        ::ExpressionNode&&   defaultExpression,
        float                rangeMin,
        float                rangeMax
    );

    MCAPI void
    _addFloatProperty(::std::string const& name, bool clientSync, float defaultValue, float rangeMin, float rangeMax);

    MCAPI void _addIntProperty(
        ::std::string const& name,
        bool                 clientSync,
        ::ExpressionNode&&   defaultExpression,
        int                  rangeMin,
        int                  rangeMax
    );

    MCAPI void
    _addIntProperty(::std::string const& name, bool clientSync, int defaultValue, int rangeMin, int rangeMax);

    MCAPI void
    _addPropertyMetadata(::std::string const& name, bool clientSync, ::PropertyMetadata::ContainedType propertyType);

    MCAPI ::std::string const& _getFriendlyJsonTypeString(::PropertyMetadata::ContainedType type);

    MCAPI bool _loadPropertyFromJson(
        ::std::string const& name,
        ::Json::Value const& propertyNode,
        ::MolangVersion      molangVersion,
        bool                 clientSync
    );

    MCAPI void _reserveSpaceForTypes(::std::vector<uint64> const& typeCounts);

    MCAPI bool _validateDataType(::Json::Value const& value, ::PropertyMetadata::ContainedType type);

    MCAPI bool getDefaultBoolValue(uint64 boolArrayIndex, ::RenderParams& renderParams) const;

    MCAPI uint64 getDefaultEnumIndexValue(
        uint64               enumIndexArrayIndex,
        ::RenderParams&      renderParams,
        ::std::string const& propertyName
    ) const;

    MCAPI float getDefaultFloatValue(uint64 floatArrayIndex, ::RenderParams& renderParams) const;

    MCAPI int getDefaultIntValue(uint64 intArrayIndex, ::RenderParams& renderParams) const;

    MCAPI ::ListTag getNetworkSyncPropertyDescriptionsAsListTag() const;

    MCAPI ~PropertyGroup();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PropertyMetadata::ContainedType _getJsonPropertyType(::Json::Value const& typeNode);

    MCAPI static bool isValidEnumEntry(::std::string const& entryValue);

    MCAPI static ::std::shared_ptr<::PropertyGroup const>
    loadPropertiesFromJson(::Json::Value const& root, ::MolangVersion molangVersion);

    MCAPI static ::std::shared_ptr<::PropertyGroup const> loadPropertiesFromNetworkSync(::ListTag const& propertiesTag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& MAX_ENUM_SIZE();

    MCAPI static uint64 const& MAX_ENUM_VALUE_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
