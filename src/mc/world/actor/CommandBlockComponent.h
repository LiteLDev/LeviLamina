#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockComponent {

public:
    // prevent constructor by default
    CommandBlockComponent& operator=(CommandBlockComponent const&) = delete;
    CommandBlockComponent(CommandBlockComponent const&)            = delete;

public:
    /**
     * @symbol ??0CommandBlockComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CommandBlockComponent(class CommandBlockComponent&&); // NOLINT
    /**
     * @symbol ??0CommandBlockComponent\@\@QEAA\@XZ
     */
    MCAPI CommandBlockComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@CommandBlockComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?decrementTickCount\@CommandBlockComponent\@\@QEAAHXZ
     */
    MCAPI int decrementTickCount(); // NOLINT
    /**
     * @symbol ?getBaseCommandBlock\@CommandBlockComponent\@\@QEAAAEAVBaseCommandBlock\@\@XZ
     */
    MCAPI class BaseCommandBlock& getBaseCommandBlock(); // NOLINT
    /**
     * @symbol ?getCurrentTickCount\@CommandBlockComponent\@\@QEBAHXZ
     */
    MCAPI int getCurrentTickCount() const; // NOLINT
    /**
     * @symbol ?getTicking\@CommandBlockComponent\@\@QEBA_NXZ
     */
    MCAPI bool getTicking() const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@CommandBlockComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol
     * ?onCommandBlockUpdate\@CommandBlockComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_NV34\@H2\@Z
     */
    MCAPI void onCommandBlockUpdate(class Actor&, std::string const&, bool, std::string, int, bool); // NOLINT
    /**
     * @symbol ??4CommandBlockComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CommandBlockComponent& operator=(class CommandBlockComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@CommandBlockComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?resetCurrentTick\@CommandBlockComponent\@\@QEAAXXZ
     */
    MCAPI void resetCurrentTick(); // NOLINT
    /**
     * @symbol
     * ?setLastOutput\@CommandBlockComponent\@\@QEAAXAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLastOutput(class Actor&, std::string const&); // NOLINT
    /**
     * @symbol ?setTicking\@CommandBlockComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setTicking(bool); // NOLINT
};
