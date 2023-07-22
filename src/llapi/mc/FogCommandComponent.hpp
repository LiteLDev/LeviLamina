/**
 * @file  FogCommandComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?addAdditionalSaveData\@FogCommandComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?getFogSettingsStack\@FogCommandComponent\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getFogSettingsStack() const;
    /**
     * @symbol  ??4FogCommandComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class FogCommandComponent & operator=(class FogCommandComponent &&);
    /**
     * @symbol  ?popFogSetting\@FogCommandComponent\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool popFogSetting(std::string const &);
    /**
     * @symbol  ?pushFogSetting\@FogCommandComponent\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI bool pushFogSetting(std::string const &, std::string const &);
    /**
     * @symbol  ?readAdditionalSaveData\@FogCommandComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?removeFogSettings\@FogCommandComponent\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool removeFogSettings(std::string const &);

};