/**
 * @file  MC/FogCommandComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FogCommandComponent.
 *
 */
class FogCommandComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGCOMMANDCOMPONENT
public:
    class FogCommandComponent& operator=(class FogCommandComponent const &) = delete;
    FogCommandComponent(class FogCommandComponent const &) = delete;
    FogCommandComponent() = delete;
#endif

public:
    /**
     * @hash   -2076302232
     * @symbol ?addAdditionalSaveData@FogCommandComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1805324107
     * @symbol ?getFogSettingsStack@FogCommandComponent@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getFogSettingsStack() const;
    /**
     * @hash   982729908
     * @symbol ??4FogCommandComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class FogCommandComponent & operator=(class FogCommandComponent &&);
    /**
     * @hash   -358279645
     * @symbol ?popFogSetting@FogCommandComponent@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool popFogSetting(std::string const &);
    /**
     * @hash   33461015
     * @symbol ?pushFogSetting@FogCommandComponent@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI bool pushFogSetting(std::string const &, std::string const &);
    /**
     * @hash   -1285124672
     * @symbol ?readAdditionalSaveData@FogCommandComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1255261363
     * @symbol ?removeFogSettings@FogCommandComponent@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool removeFogSettings(std::string const &);

};