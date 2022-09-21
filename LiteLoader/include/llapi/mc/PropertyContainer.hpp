/**
 * @file  MC/PropertyContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyContainer.
 *
 */
class PropertyContainer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYCONTAINER
public:
    class PropertyContainer& operator=(class PropertyContainer const &) = delete;
    PropertyContainer(class PropertyContainer const &) = delete;
    PropertyContainer() = delete;
#endif

public:
    /**
     * @hash   1160808014
     * @symbol ??0PropertyContainer@@QEAA@V?$not_null@V?$shared_ptr@$$CBVPropertyGroup@@@std@@@gsl@@AEAVRenderParams@@@Z
     */
    MCAPI PropertyContainer(class gsl::not_null<class std::shared_ptr<class PropertyGroup const>>, class RenderParams &);
    /**
     * @hash   -1948748226
     * @symbol ?addAdditionalSaveDataToCompoundTag@PropertyContainer@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveDataToCompoundTag(class CompoundTag &) const;
    /**
     * @hash   520695009
     * @symbol ?addSerializationDataToCompoundTag@PropertyContainer@@QEBAXAEAVCompoundTag@@AEBVPropertyMetadata@@@Z
     */
    MCAPI void addSerializationDataToCompoundTag(class CompoundTag &, class PropertyMetadata const &) const;
    /**
     * @hash   -1325420959
     * @symbol ?getMolangValue@PropertyContainer@@QEBA_N_KAEAUMolangScriptArg@@@Z
     */
    MCAPI bool getMolangValue(unsigned __int64, struct MolangScriptArg &) const;
    /**
     * @hash   -239181256
     * @symbol ?readLoadedProperties@PropertyContainer@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void readLoadedProperties(class CompoundTag const &);
    /**
     * @hash   -1363447415
     * @symbol ?setAliasProperties@PropertyContainer@@QEAAXAEBV?$unordered_map@VHashedString@@V?$shared_ptr@VTag@@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$shared_ptr@VTag@@@std@@@std@@@3@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1@Z
     */
    MCAPI void setAliasProperties(class std::unordered_map<class HashedString, class std::shared_ptr<class Tag>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::shared_ptr<class Tag>>>> const &, std::string const &, std::string const &);
    /**
     * @hash   -329570542
     * @symbol ?setBoolValue@PropertyContainer@@QEAAX_K_N@Z
     */
    MCAPI void setBoolValue(unsigned __int64, bool);
    /**
     * @hash   1926662599
     * @symbol ?setEnumIndexValue@PropertyContainer@@QEAAX_K0@Z
     */
    MCAPI void setEnumIndexValue(unsigned __int64, unsigned __int64);
    /**
     * @hash   -1556499328
     * @symbol ?setFloatValue@PropertyContainer@@QEAAX_KM@Z
     */
    MCAPI void setFloatValue(unsigned __int64, float);
    /**
     * @hash   -1551796894
     * @symbol ?setIntValue@PropertyContainer@@QEAAX_KH@Z
     */
    MCAPI void setIntValue(unsigned __int64, int);

//private:
    /**
     * @hash   -1747887249
     * @symbol ?_addDataToCompoundTag@PropertyContainer@@AEBAXAEAVCompoundTag@@AEBVPropertyMetadata@@@Z
     */
    MCAPI void _addDataToCompoundTag(class CompoundTag &, class PropertyMetadata const &) const;
    /**
     * @hash   -1510726616
     * @symbol ?_readValueFromTag@PropertyContainer@@AEAA_NAEBVPropertyMetadata@@AEBVTag@@@Z
     */
    MCAPI bool _readValueFromTag(class PropertyMetadata const &, class Tag const &);

private:

};