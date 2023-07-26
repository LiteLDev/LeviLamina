#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FogCommandComponent {

public:
    // prevent constructor by default
    FogCommandComponent& operator=(FogCommandComponent const&) = delete;
    FogCommandComponent(FogCommandComponent const&)            = delete;
    FogCommandComponent()                                      = delete;

public:
    /**
     * @symbol ?addAdditionalSaveData\@FogCommandComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?getFogSettingsStack\@FogCommandComponent\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getFogSettingsStack() const; // NOLINT
    /**
     * @symbol ??4FogCommandComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class FogCommandComponent& operator=(class FogCommandComponent&&); // NOLINT
    /**
     * @symbol
     * ?popFogSetting\@FogCommandComponent\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool popFogSetting(std::string const&); // NOLINT
    /**
     * @symbol
     * ?pushFogSetting\@FogCommandComponent\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI bool pushFogSetting(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@FogCommandComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol
     * ?removeFogSettings\@FogCommandComponent\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool removeFogSettings(std::string const&); // NOLINT
};
