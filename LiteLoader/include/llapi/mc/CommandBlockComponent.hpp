/**
 * @file  MC/CommandBlockComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandBlockComponent.
 *
 */
class CommandBlockComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKCOMPONENT
public:
    class CommandBlockComponent& operator=(class CommandBlockComponent const &) = delete;
    CommandBlockComponent(class CommandBlockComponent const &) = delete;
#endif

public:
    /**
     * @hash   -918198905
     * @symbol ??0CommandBlockComponent@@QEAA@XZ
     */
    MCAPI CommandBlockComponent();
    /**
     * @hash   1103502591
     * @symbol ??0CommandBlockComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI CommandBlockComponent(class CommandBlockComponent &&);
    /**
     * @hash   -1688569480
     * @symbol ?addAdditionalSaveData@CommandBlockComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1522968390
     * @symbol ?decrementTickCount@CommandBlockComponent@@QEAAHXZ
     */
    MCAPI int decrementTickCount();
    /**
     * @hash   -1172872848
     * @symbol ?getBaseCommandBlock@CommandBlockComponent@@QEAAAEAVBaseCommandBlock@@XZ
     */
    MCAPI class BaseCommandBlock & getBaseCommandBlock();
    /**
     * @hash   -275080186
     * @symbol ?getCurrentTickCount@CommandBlockComponent@@QEBAHXZ
     */
    MCAPI int getCurrentTickCount() const;
    /**
     * @hash   -1993191814
     * @symbol ?getTicking@CommandBlockComponent@@QEBA_NXZ
     */
    MCAPI bool getTicking() const;
    /**
     * @hash   -2015137966
     * @symbol ?initFromDefinition@CommandBlockComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   1826041030
     * @symbol ?onCommandBlockUpdate@CommandBlockComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NV34@H2@Z
     */
    MCAPI void onCommandBlockUpdate(class Actor &, std::string const &, bool, std::string, int, bool);
    /**
     * @hash   94000090
     * @symbol ??4CommandBlockComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class CommandBlockComponent & operator=(class CommandBlockComponent &&);
    /**
     * @hash   -356396442
     * @symbol ?readAdditionalSaveData@CommandBlockComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -480564735
     * @symbol ?resetCurrentTick@CommandBlockComponent@@QEAAXXZ
     */
    MCAPI void resetCurrentTick();
    /**
     * @hash   -1134009023
     * @symbol ?setLastOutput@CommandBlockComponent@@QEAAXAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setLastOutput(class Actor &, std::string const &);
    /**
     * @hash   -1634227838
     * @symbol ?setTicking@CommandBlockComponent@@QEAAX_N@Z
     */
    MCAPI void setTicking(bool);

};