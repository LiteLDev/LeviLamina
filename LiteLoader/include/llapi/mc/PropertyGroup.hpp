/**
 * @file  PropertyGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "PropertyMetadata.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyGroup.
 *
 */
class PropertyGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYGROUP
public:
    class PropertyGroup& operator=(class PropertyGroup const &) = delete;
    PropertyGroup(class PropertyGroup const &) = delete;
#endif

public:
    /**
     * @hash   1226767942
     * @symbol ??0PropertyGroup@@QEAA@XZ
     */
    MCAPI PropertyGroup();
    /**
     * @hash   -2047155659
     * @symbol ?getDefaultBoolValue@PropertyGroup@@QEBA_N_KAEAVRenderParams@@@Z
     */
    MCAPI bool getDefaultBoolValue(unsigned __int64, class RenderParams &) const;
    /**
     * @hash   -592434747
     * @symbol ?getDefaultEnumIndexValue@PropertyGroup@@QEBA_K_KAEAVRenderParams@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI unsigned __int64 getDefaultEnumIndexValue(unsigned __int64, class RenderParams &, std::string const &) const;
    /**
     * @hash   785311119
     * @symbol ?getDefaultFloatValue@PropertyGroup@@QEBAM_KAEAVRenderParams@@@Z
     */
    MCAPI float getDefaultFloatValue(unsigned __int64, class RenderParams &) const;
    /**
     * @hash   -224928485
     * @symbol ?getDefaultIntValue@PropertyGroup@@QEBAH_KAEAVRenderParams@@@Z
     */
    MCAPI int getDefaultIntValue(unsigned __int64, class RenderParams &) const;
    /**
     * @symbol ?getNetworkSyncPropertyDescriptionsAsListTag@PropertyGroup@@QEBA?AVListTag@@XZ
     */
    MCAPI class ListTag getNetworkSyncPropertyDescriptionsAsListTag() const;
    /**
     * @hash   -895021713
     * @symbol ?getPropertyMetadata@PropertyGroup@@QEBAPEBVPropertyMetadata@@_K@Z
     */
    MCAPI class PropertyMetadata const * getPropertyMetadata(unsigned __int64) const;
    /**
     * @hash   1544496470
     * @symbol ?getPropertyMetadataByString@PropertyGroup@@QEBAPEBVPropertyMetadata@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class PropertyMetadata const * getPropertyMetadataByString(std::string const &) const;
    /**
     * @hash   1826659830
     * @symbol ??1PropertyGroup@@QEAA@XZ
     */
    MCAPI ~PropertyGroup();
    /**
     * @hash   1576799096
     * @symbol ?MAX_ENUM_SIZE@PropertyGroup@@2_KB
     */
    MCAPI static unsigned __int64 const MAX_ENUM_SIZE;
    /**
     * @hash   1156859904
     * @symbol ?MAX_ENUM_VALUE_SIZE@PropertyGroup@@2_KB
     */
    MCAPI static unsigned __int64 const MAX_ENUM_VALUE_SIZE;
    /**
     * @hash   157738218
     * @symbol ?MAX_PROPERTIES_COUNT@PropertyGroup@@2_KB
     */
    MCAPI static unsigned __int64 const MAX_PROPERTIES_COUNT;
    /**
     * @hash   809926671
     * @symbol ?isValidEnumEntry@PropertyGroup@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool isValidEnumEntry(std::string const &);
    /**
     * @hash   796630605
     * @symbol ?loadPropertiesFromJson@PropertyGroup@@SA?AV?$shared_ptr@$$CBVPropertyGroup@@@std@@AEBVValue@Json@@AEBVSemVersion@@@Z
     */
    MCAPI static class std::shared_ptr<class PropertyGroup const> loadPropertiesFromJson(class Json::Value const &, class SemVersion const &);

//private:
    /**
     * @hash   -1018862647
     * @symbol ?_addBoolProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
     */
    MCAPI void _addBoolProperty(std::string const &, bool, bool);
    /**
     * @hash   396560857
     * @symbol ?_addEnumIndexProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N_KAEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@@Z
     */
    MCAPI void _addEnumIndexProperty(std::string const &, bool, unsigned __int64, std::vector<class HashedString> const &);
    /**
     * @hash   1649133961
     * @symbol ?_addFloatProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NMMM@Z
     */
    MCAPI void _addFloatProperty(std::string const &, bool, float, float, float);
    /**
     * @hash   -1092756669
     * @symbol ?_addIntProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHHH@Z
     */
    MCAPI void _addIntProperty(std::string const &, bool, int, int, int);
    /**
     * @hash   1814902652
     * @symbol ?_addPropertyMetadata@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NW4ContainedPropertyType@PropertyMetadata@@@Z
     */
    MCAPI void _addPropertyMetadata(std::string const &, bool, enum PropertyMetadata::ContainedPropertyType);
    /**
     * @hash   -1234370765
     * @symbol ?_getFriendlyJsonTypeString@PropertyGroup@@AEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContainedPropertyType@PropertyMetadata@@@Z
     */
    MCAPI std::string const & _getFriendlyJsonTypeString(enum PropertyMetadata::ContainedPropertyType);
    /**
     * @hash   -667979578
     * @symbol ?_loadPropertyFromJson@PropertyGroup@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@W4MolangVersion@@@Z
     */
    MCAPI bool _loadPropertyFromJson(std::string const &, class Json::Value const &, enum MolangVersion);
    /**
     * @hash   434318092
     * @symbol ?_reserveSpaceForTypes@PropertyGroup@@AEAAXAEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z
     */
    MCAPI void _reserveSpaceForTypes(std::vector<unsigned __int64> const &);
    /**
     * @hash   -1745747567
     * @symbol ?_validateDataType@PropertyGroup@@AEAA_NAEBVValue@Json@@W4ContainedPropertyType@PropertyMetadata@@@Z
     */
    MCAPI bool _validateDataType(class Json::Value const &, enum PropertyMetadata::ContainedPropertyType);
    /**
     * @hash   -1855704178
     * @symbol ?_getJsonPropertyType@PropertyGroup@@CA?AW4ContainedPropertyType@PropertyMetadata@@AEBVValue@Json@@@Z
     */
    MCAPI static enum PropertyMetadata::ContainedPropertyType _getJsonPropertyType(class Json::Value const &);

private:

};