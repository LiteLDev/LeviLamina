#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
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
    ::ll::UntypedStorage<8, 24> mUnk4f1df6;
    ::ll::UntypedStorage<8, 64> mUnkb73d7f;
    ::ll::UntypedStorage<8, 64> mUnk324226;
    ::ll::UntypedStorage<8, 24> mUnka580d9;
    ::ll::UntypedStorage<8, 24> mUnk91d7f8;
    ::ll::UntypedStorage<8, 24> mUnk14df04;
    ::ll::UntypedStorage<8, 96> mUnk4ec795;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyGroup& operator=(PropertyGroup const&);
    PropertyGroup(PropertyGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyGroup();

    MCNAPI void _addBoolProperty(::std::string const& name, bool clientSync, bool defaultValue);

    MCNAPI void _addEnumIndexProperty(
        ::std::string const&                 name,
        bool                                 clientSync,
        ::ExpressionNode&&                   defaultExpression,
        ::std::vector<::HashedString> const& enumValues
    );

    MCNAPI void _addEnumIndexProperty(
        ::std::string const&                 name,
        bool                                 clientSync,
        uint64                               defaultValue,
        ::std::vector<::HashedString> const& enumValues
    );

    MCNAPI void _addFloatProperty(
        ::std::string const& name,
        bool                 clientSync,
        ::ExpressionNode&&   defaultExpression,
        float                rangeMin,
        float                rangeMax
    );

    MCNAPI void
    _addFloatProperty(::std::string const& name, bool clientSync, float defaultValue, float rangeMin, float rangeMax);

    MCNAPI void _addIntProperty(
        ::std::string const& name,
        bool                 clientSync,
        ::ExpressionNode&&   defaultExpression,
        int                  rangeMin,
        int                  rangeMax
    );

    MCNAPI void
    _addIntProperty(::std::string const& name, bool clientSync, int defaultValue, int rangeMin, int rangeMax);

    MCNAPI void
    _addPropertyMetadata(::std::string const& name, bool clientSync, ::PropertyMetadata::ContainedType propertyType);

    MCNAPI ::std::string const& _getFriendlyJsonTypeString(::PropertyMetadata::ContainedType type);

    MCNAPI bool _loadPropertyFromJson(
        ::std::string const& name,
        ::Json::Value const& propertyNode,
        ::MolangVersion      molangVersion,
        bool                 clientSync
    );

    MCNAPI void _reserveSpaceForTypes(::std::vector<uint64> const& typeCounts);

    MCNAPI bool _validateDataType(::Json::Value const& value, ::PropertyMetadata::ContainedType type);

    MCNAPI bool getDefaultBoolValue(uint64 boolArrayIndex, ::RenderParams& renderParams) const;

    MCNAPI uint64 getDefaultEnumIndexValue(
        uint64               enumIndexArrayIndex,
        ::RenderParams&      renderParams,
        ::std::string const& propertyName
    ) const;

    MCNAPI float getDefaultFloatValue(uint64 floatArrayIndex, ::RenderParams& renderParams) const;

    MCNAPI int getDefaultIntValue(uint64 intArrayIndex, ::RenderParams& renderParams) const;

    MCNAPI ::ListTag getNetworkSyncPropertyDescriptionsAsListTag() const;

    MCNAPI ::PropertyMetadata const* getPropertyMetadata(uint64 propertyNameHash) const;

    MCNAPI ~PropertyGroup();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PropertyMetadata::ContainedType _getJsonPropertyType(::Json::Value const& typeNode);

    MCNAPI static bool
    _tryGetClientSync(::std::string const& propertyName, ::Json::Value const& propertyNode, bool& clientSyncOut);

    MCNAPI static bool isValidEnumEntry(::std::string const& entryValue);

    MCNAPI static ::std::shared_ptr<::PropertyGroup const>
    loadPropertiesFromJson(::Json::Value const& root, ::MolangVersion molangVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint64 const& MAX_ENUM_SIZE();

    MCNAPI static uint64 const& MAX_ENUM_VALUE_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
