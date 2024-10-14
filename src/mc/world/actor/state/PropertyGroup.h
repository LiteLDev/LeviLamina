#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyGroup {
public:
    // prevent constructor by default
    PropertyGroup& operator=(PropertyGroup const&);
    PropertyGroup(PropertyGroup const&);

public:
    // NOLINTBEGIN
    MCAPI PropertyGroup();

    MCAPI bool getDefaultBoolValue(uint64 boolArrayIndex, class RenderParams& renderParams) const;

    MCAPI uint64 getDefaultEnumIndexValue(
        uint64              enumIndexArrayIndex,
        class RenderParams& renderParams,
        std::string const&  propertyName
    ) const;

    MCAPI float getDefaultFloatValue(uint64 floatArrayIndex, class RenderParams& renderParams) const;

    MCAPI int getDefaultIntValue(uint64 intArrayIndex, class RenderParams& renderParams) const;

    MCAPI class ListTag getNetworkSyncPropertyDescriptionsAsListTag() const;

    MCAPI class PropertyMetadata const* getPropertyMetadata(uint64 propertyNameHash) const;

    MCAPI bool hasAnyClientSyncProperties() const;

    MCAPI ~PropertyGroup();

    MCAPI static bool isValidEnumEntry(std::string const& entryValue);

    MCAPI static std::shared_ptr<class PropertyGroup const>
    loadPropertiesFromJson(class Json::Value const& root, class SemVersion const& engineVersion);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addBoolProperty(std::string const& name, bool clientSync, bool defaultValue);

    MCAPI void _addEnumIndexProperty(
        std::string const&                     name,
        bool                                   clientSync,
        uint64                                 defaultValue,
        std::vector<class HashedString> const& enumValues
    );

    MCAPI void
    _addFloatProperty(std::string const& name, bool clientSync, float defaultValue, float rangeMin, float rangeMax);

    MCAPI void _addIntProperty(std::string const& name, bool clientSync, int defaultValue, int rangeMin, int rangeMax);

    MCAPI void
    _addPropertyMetadata(std::string const& name, bool clientSync, ::PropertyMetadata::ContainedType propertyType);

    MCAPI std::string const& _getFriendlyJsonTypeString(::PropertyMetadata::ContainedType type);

    MCAPI bool _loadPropertyFromJson(
        std::string const&       name,
        class Json::Value const& propertyNode,
        ::MolangVersion          molangVersion,
        bool                     clientSync
    );

    MCAPI void _reserveSpaceForTypes(std::vector<uint64> const& typeCounts);

    MCAPI bool _validateDataType(class Json::Value const& value, ::PropertyMetadata::ContainedType type);

    MCAPI static ::PropertyMetadata::ContainedType _getJsonPropertyType(class Json::Value const& typeNode);

    MCAPI static bool
    _tryGetClientSync(std::string const& propertyName, class Json::Value const& propertyNode, bool& clientSyncOut);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static uint64 const& MAX_ENUM_SIZE();

    MCAPI static uint64 const& MAX_ENUM_VALUE_SIZE();

    // NOLINTEND
};
