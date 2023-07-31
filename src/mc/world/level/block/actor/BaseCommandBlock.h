#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseCommandBlock {

public:
    // prevent constructor by default
    BaseCommandBlock& operator=(BaseCommandBlock const&) = delete;
    BaseCommandBlock(BaseCommandBlock const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BaseCommandBlock\@\@QEAA\@XZ
     */
    MCAPI BaseCommandBlock();
    /**
     * @symbol
     * ?getCommand\@BaseCommandBlock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getCommand() const;
    /**
     * @symbol
     * ?getLastOutput\@BaseCommandBlock\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getLastOutput() const;
    /**
     * @symbol
     * ?getName\@BaseCommandBlock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const;
    /**
     * @symbol ?getTickDelay\@BaseCommandBlock\@\@QEBAHXZ
     */
    MCAPI int getTickDelay() const;
    /**
     * @symbol ?getTrackOutput\@BaseCommandBlock\@\@QEBA_NXZ
     */
    MCAPI bool getTrackOutput() const;
    /**
     * @symbol ?getVersion\@BaseCommandBlock\@\@QEBAHXZ
     */
    MCAPI int getVersion() const;
    /**
     * @symbol ?load\@BaseCommandBlock\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?performCommand\@BaseCommandBlock\@\@QEAA_NAEAVBlockSource\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool performCommand(class BlockSource&, struct ActorUniqueID const&);
    /**
     * @symbol ?save\@BaseCommandBlock\@\@QEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool save(class CompoundTag&) const;
    /**
     * @symbol
     * ?setCommand\@BaseCommandBlock\@\@QEAAXAEAVBlockSource\@\@AEBUActorUniqueID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCommand(class BlockSource&, struct ActorUniqueID const&, std::string const&);
    /**
     * @symbol
     * ?setCommand\@BaseCommandBlock\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCommand(class BlockSource&, class BlockPos const&, std::string const&);
    /**
     * @symbol
     * ?setLastOutput\@BaseCommandBlock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void setLastOutput(std::string const&, std::vector<std::string> const&);
    /**
     * @symbol
     * ?setName\@BaseCommandBlock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(std::string const&);
    /**
     * @symbol ?setShouldExecuteOnFirstTick\@BaseCommandBlock\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldExecuteOnFirstTick(bool);
    /**
     * @symbol ?setTickDelay\@BaseCommandBlock\@\@QEAAXH\@Z
     */
    MCAPI void setTickDelay(int);
    /**
     * @symbol ?setTrackOutput\@BaseCommandBlock\@\@QEAAX_N\@Z
     */
    MCAPI void setTrackOutput(bool);
    /**
     * @symbol ?shouldExecuteOnFirstTick\@BaseCommandBlock\@\@QEBA_NXZ
     */
    MCAPI bool shouldExecuteOnFirstTick() const;
    /**
     * @symbol ??1BaseCommandBlock\@\@QEAA\@XZ
     */
    MCAPI ~BaseCommandBlock();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_performCommand\@BaseCommandBlock\@\@AEAA_NAEAVBlockSource\@\@AEBVCommandOrigin\@\@AEA_N\@Z
     */
    MCAPI bool _performCommand(class BlockSource&, class CommandOrigin const&, bool&);
    /**
     * @symbol
     * ?_setCommand\@BaseCommandBlock\@\@AEAAXAEAVBlockSource\@\@AEBVCommandOrigin\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _setCommand(class BlockSource&, class CommandOrigin const&, std::string const&);
    /**
     * @symbol ?compile\@BaseCommandBlock\@\@AEAAXAEBVCommandOrigin\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void compile(class CommandOrigin const&, class Level&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?DefaultCommandBlockName\@BaseCommandBlock\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DefaultCommandBlockName;
    // NOLINTEND
};
