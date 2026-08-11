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
        48,
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
    MCAPI void _addBoolProperty(::std::string const& name, bool clientSync, ::ExpressionNode&& defaultExpression);

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

    MCAPI bool _loadPropertyFromJson(
        ::std::string const&  name,
        ::Json::Value const&  propertyNode,
        ::MolangVersion const molangVersion,
        bool                  clientSync
    );

#ifdef LL_PLAT_C
    MCAPI void _reserveSpaceForTypes(::std::vector<uint64> const& typeCounts);
#endif

    MCAPI bool getDefaultBoolValue(uint64 boolArrayIndex, ::RenderParams& renderParams) const;

    MCAPI uint64 getDefaultEnumIndexValue(
        uint64               enumIndexArrayIndex,
        ::RenderParams&      renderParams,
        ::std::string const& propertyName
    ) const;

    MCAPI float getDefaultFloatValue(uint64 floatArrayIndex, ::RenderParams& renderParams) const;

    MCAPI int getDefaultIntValue(uint64 intArrayIndex, ::RenderParams& renderParams) const;

    MCAPI ::PropertyMetadata const* getPropertyMetadata(uint64 propertyNameHash) const;

    MCAPI ::PropertyMetadata const* getPropertyMetadataByString(::std::string const& propertyName) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PropertyMetadata::ContainedType _getJsonPropertyType(::Json::Value const& typeNode);

    MCAPI static ::std::shared_ptr<::PropertyGroup const>
    loadPropertiesFromJson(::Json::Value const& root, ::MolangVersion molangVersion);
    // NOLINTEND
};
