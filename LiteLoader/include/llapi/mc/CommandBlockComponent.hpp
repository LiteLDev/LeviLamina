/**
 * @file  CommandBlockComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1768660841
     * @symbol  ??0CommandBlockComponent\@\@QEAA\@XZ
     */
    MCAPI CommandBlockComponent();
    /**
     * @hash   1316029663
     * @symbol  ??0CommandBlockComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CommandBlockComponent(class CommandBlockComponent &&);
    /**
     * @hash   1755935880
     * @symbol  ?addAdditionalSaveData\@CommandBlockComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   672491078
     * @symbol  ?decrementTickCount\@CommandBlockComponent\@\@QEAAHXZ
     */
    MCAPI int decrementTickCount();
    /**
     * @hash   -1076250064
     * @symbol  ?getBaseCommandBlock\@CommandBlockComponent\@\@QEAAAEAVBaseCommandBlock\@\@XZ
     */
    MCAPI class BaseCommandBlock & getBaseCommandBlock();
    /**
     * @hash   8853030
     * @symbol  ?getCurrentTickCount\@CommandBlockComponent\@\@QEBAHXZ
     */
    MCAPI int getCurrentTickCount() const;
    /**
     * @hash   1451298170
     * @symbol  ?getTicking\@CommandBlockComponent\@\@QEBA_NXZ
     */
    MCAPI bool getTicking() const;
    /**
     * @hash   1429352018
     * @symbol  ?initFromDefinition\@CommandBlockComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   975240822
     * @symbol  ?onCommandBlockUpdate\@CommandBlockComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NV34\@H2\@Z
     */
    MCAPI void onCommandBlockUpdate(class Actor &, std::string const &, bool, std::string, int, bool);
    /**
     * @hash   306527162
     * @symbol  ??4CommandBlockComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CommandBlockComponent & operator=(class CommandBlockComponent &&);
    /**
     * @hash   -1207381162
     * @symbol  ?readAdditionalSaveData\@CommandBlockComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1331826223
     * @symbol  ?resetCurrentTick\@CommandBlockComponent\@\@QEAAXXZ
     */
    MCAPI void resetCurrentTick();
    /**
     * @hash   -1985270511
     * @symbol  ?setLastOutput\@CommandBlockComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLastOutput(class Actor &, std::string const &);
    /**
     * @hash   1809477970
     * @symbol  ?setTicking\@CommandBlockComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setTicking(bool);

};