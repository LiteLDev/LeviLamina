/**
 * @file  BaseCommandBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseCommandBlock.
 *
 */
class BaseCommandBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECOMMANDBLOCK
public:
    class BaseCommandBlock& operator=(class BaseCommandBlock const &) = delete;
    BaseCommandBlock(class BaseCommandBlock const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BaseCommandBlock\@\@QEAA\@XZ
     */
    MCAPI BaseCommandBlock();
    /**
     * @symbol  ?getCommand\@BaseCommandBlock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getCommand() const;
    /**
     * @symbol  ?getLastOutput\@BaseCommandBlock\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getLastOutput() const;
    /**
     * @symbol  ?getName\@BaseCommandBlock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol  ?getRawName\@BaseCommandBlock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getRawName() const;
    /**
     * @symbol  ?getSuccessCount\@BaseCommandBlock\@\@QEBAHXZ
     */
    MCAPI int getSuccessCount() const;
    /**
     * @symbol  ?getTickDelay\@BaseCommandBlock\@\@QEBAHXZ
     */
    MCAPI int getTickDelay() const;
    /**
     * @symbol  ?getTrackOutput\@BaseCommandBlock\@\@QEBA_NXZ
     */
    MCAPI bool getTrackOutput() const;
    /**
     * @symbol  ?getVersion\@BaseCommandBlock\@\@QEBAHXZ
     */
    MCAPI int getVersion() const;
    /**
     * @symbol  ?load\@BaseCommandBlock\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?performCommand\@BaseCommandBlock\@\@QEAA_NAEAVBlockSource\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool performCommand(class BlockSource &, struct ActorUniqueID const &);
    /**
     * @symbol  ?performCommand\@BaseCommandBlock\@\@QEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEA_N\@Z
     */
    MCAPI bool performCommand(class BlockSource &, class BlockPos const &, bool &);
    /**
     * @symbol  ?save\@BaseCommandBlock\@\@QEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?setCommand\@BaseCommandBlock\@\@QEAAXAEAVBlockSource\@\@AEBUActorUniqueID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCommand(class BlockSource &, struct ActorUniqueID const &, std::string const &);
    /**
     * @symbol  ?setCommand\@BaseCommandBlock\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCommand(class BlockSource &, class BlockPos const &, std::string const &);
    /**
     * @symbol  ?setLastOutput\@BaseCommandBlock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void setLastOutput(std::string const &, std::vector<std::string> const &);
    /**
     * @symbol  ?setName\@BaseCommandBlock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(std::string const &);
    /**
     * @symbol  ?setShouldExecuteOnFirstTick\@BaseCommandBlock\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldExecuteOnFirstTick(bool);
    /**
     * @symbol  ?setSuccessCount\@BaseCommandBlock\@\@QEAAXH\@Z
     */
    MCAPI void setSuccessCount(int);
    /**
     * @symbol  ?setTickDelay\@BaseCommandBlock\@\@QEAAXH\@Z
     */
    MCAPI void setTickDelay(int);
    /**
     * @symbol  ?setTrackOutput\@BaseCommandBlock\@\@QEAAX_N\@Z
     */
    MCAPI void setTrackOutput(bool);
    /**
     * @symbol  ?shouldExecuteOnFirstTick\@BaseCommandBlock\@\@QEBA_NXZ
     */
    MCAPI bool shouldExecuteOnFirstTick() const;
    /**
     * @symbol  ??1BaseCommandBlock\@\@QEAA\@XZ
     */
    MCAPI ~BaseCommandBlock();

//private:
    /**
     * @symbol  ?_performCommand\@BaseCommandBlock\@\@AEAA_NAEAVBlockSource\@\@AEBVCommandOrigin\@\@AEA_N\@Z
     */
    MCAPI bool _performCommand(class BlockSource &, class CommandOrigin const &, bool &);
    /**
     * @symbol  ?_setCommand\@BaseCommandBlock\@\@AEAAXAEAVBlockSource\@\@AEBVCommandOrigin\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _setCommand(class BlockSource &, class CommandOrigin const &, std::string const &);
    /**
     * @symbol  ?compile\@BaseCommandBlock\@\@AEAAXAEBVCommandOrigin\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void compile(class CommandOrigin const &, class Level &);

private:
    /**
     * @symbol  ?DefaultCommandBlockName\@BaseCommandBlock\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DefaultCommandBlockName;

};