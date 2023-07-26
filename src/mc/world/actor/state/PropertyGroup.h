#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyGroup {

public:
    // prevent constructor by default
    PropertyGroup& operator=(PropertyGroup const&) = delete;
    PropertyGroup(PropertyGroup const&)            = delete;

public:
    /**
     * @symbol ??0PropertyGroup\@\@QEAA\@XZ
     */
    MCAPI PropertyGroup(); // NOLINT
    /**
     * @symbol ?getDefaultBoolValue\@PropertyGroup\@\@QEBA_N_KAEAVRenderParams\@\@\@Z
     */
    MCAPI bool getDefaultBoolValue(unsigned __int64, class RenderParams&) const; // NOLINT
    /**
     * @symbol
     * ?getDefaultEnumIndexValue\@PropertyGroup\@\@QEBA_K_KAEAVRenderParams\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned __int64
    getDefaultEnumIndexValue(unsigned __int64, class RenderParams&, std::string const&) const; // NOLINT
    /**
     * @symbol ?getDefaultFloatValue\@PropertyGroup\@\@QEBAM_KAEAVRenderParams\@\@\@Z
     */
    MCAPI float getDefaultFloatValue(unsigned __int64, class RenderParams&) const; // NOLINT
    /**
     * @symbol ?getDefaultIntValue\@PropertyGroup\@\@QEBAH_KAEAVRenderParams\@\@\@Z
     */
    MCAPI int getDefaultIntValue(unsigned __int64, class RenderParams&) const; // NOLINT
    /**
     * @symbol ?getNetworkSyncPropertyDescriptionsAsListTag\@PropertyGroup\@\@QEBA?AVListTag\@\@XZ
     */
    MCAPI class ListTag getNetworkSyncPropertyDescriptionsAsListTag() const; // NOLINT
    /**
     * @symbol ?getPropertyMetadata\@PropertyGroup\@\@QEBAPEBVPropertyMetadata\@\@_K\@Z
     */
    MCAPI class PropertyMetadata const* getPropertyMetadata(unsigned __int64) const; // NOLINT
    /**
     * @symbol ?hasAnyClientSyncProperties\@PropertyGroup\@\@QEBA_NXZ
     */
    MCAPI bool hasAnyClientSyncProperties() const; // NOLINT
    /**
     * @symbol ??1PropertyGroup\@\@QEAA\@XZ
     */
    MCAPI ~PropertyGroup(); // NOLINT
    /**
     * @symbol
     * ?isValidEnumEntry\@PropertyGroup\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isValidEnumEntry(std::string const&); // NOLINT
    /**
     * @symbol
     * ?loadPropertiesFromJson\@PropertyGroup\@\@SA?AV?$shared_ptr\@$$CBVPropertyGroup\@\@\@std\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class PropertyGroup const>
    loadPropertiesFromJson(class Json::Value const&, class SemVersion const&); // NOLINT
    /**
     * @symbol ?MAX_ENUM_SIZE\@PropertyGroup\@\@2_KB
     */
    MCAPI static unsigned __int64 const MAX_ENUM_SIZE; // NOLINT
    /**
     * @symbol ?MAX_ENUM_VALUE_SIZE\@PropertyGroup\@\@2_KB
     */
    MCAPI static unsigned __int64 const MAX_ENUM_VALUE_SIZE; // NOLINT

    // private:
    /**
     * @symbol
     * ?_addBoolProperty\@PropertyGroup\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCAPI void _addBoolProperty(std::string const&, bool, bool); // NOLINT
    /**
     * @symbol
     * ?_addEnumIndexProperty\@PropertyGroup\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N_KAEBV?$vector\@VHashedString\@\@V?$allocator\@VHashedString\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void
    _addEnumIndexProperty(std::string const&, bool, unsigned __int64, std::vector<class HashedString> const&); // NOLINT
    /**
     * @symbol
     * ?_addFloatProperty\@PropertyGroup\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NMMM\@Z
     */
    MCAPI void _addFloatProperty(std::string const&, bool, float, float, float); // NOLINT
    /**
     * @symbol
     * ?_addIntProperty\@PropertyGroup\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NHHH\@Z
     */
    MCAPI void _addIntProperty(std::string const&, bool, int, int, int); // NOLINT
    /**
     * @symbol
     * ?_addPropertyMetadata\@PropertyGroup\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NW4ContainedType\@PropertyMetadata\@\@\@Z
     */
    MCAPI void _addPropertyMetadata(std::string const&, bool, enum class PropertyMetadata::ContainedType); // NOLINT
    /**
     * @symbol
     * ?_getFriendlyJsonTypeString\@PropertyGroup\@\@AEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContainedType\@PropertyMetadata\@\@\@Z
     */
    MCAPI std::string const& _getFriendlyJsonTypeString(enum class PropertyMetadata::ContainedType); // NOLINT
    /**
     * @symbol
     * ?_loadPropertyFromJson\@PropertyGroup\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@W4MolangVersion\@\@_N\@Z
     */
    MCAPI bool
    _loadPropertyFromJson(std::string const&, class Json::Value const&, enum class MolangVersion, bool); // NOLINT
    /**
     * @symbol ?_reserveSpaceForTypes\@PropertyGroup\@\@AEAAXAEBV?$vector\@_KV?$allocator\@_K\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _reserveSpaceForTypes(std::vector<unsigned __int64> const&); // NOLINT
    /**
     * @symbol ?_validateDataType\@PropertyGroup\@\@AEAA_NAEBVValue\@Json\@\@W4ContainedType\@PropertyMetadata\@\@\@Z
     */
    MCAPI bool _validateDataType(class Json::Value const&, enum class PropertyMetadata::ContainedType); // NOLINT
    /**
     * @symbol ?_getJsonPropertyType\@PropertyGroup\@\@CA?AW4ContainedType\@PropertyMetadata\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static enum class PropertyMetadata::ContainedType _getJsonPropertyType(class Json::Value const&); // NOLINT

private:
};
