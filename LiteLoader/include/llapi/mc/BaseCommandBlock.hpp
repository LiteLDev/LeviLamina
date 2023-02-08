/**
 * @file  BaseCommandBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1017387583
     * @symbol  ??0BaseCommandBlock\@\@QEAA\@XZ
     */
    MCAPI BaseCommandBlock();
    /**
     * @hash   -1211934178
     * @symbol  ?getCommand\@BaseCommandBlock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getCommand() const;
    /**
     * @hash   1389229714
     * @symbol  ?getLastOutput\@BaseCommandBlock\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getLastOutput() const;
    /**
     * @hash   -11586436
     * @symbol  ?getName\@BaseCommandBlock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   -969461794
     * @symbol  ?getRawName\@BaseCommandBlock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getRawName() const;
    /**
     * @hash   1413621142
     * @symbol  ?getSuccessCount\@BaseCommandBlock\@\@QEBAHXZ
     */
    MCAPI int getSuccessCount() const;
    /**
     * @hash   -1637077128
     * @symbol  ?getTickDelay\@BaseCommandBlock\@\@QEBAHXZ
     */
    MCAPI int getTickDelay() const;
    /**
     * @hash   -1395008940
     * @symbol  ?getTrackOutput\@BaseCommandBlock\@\@QEBA_NXZ
     */
    MCAPI bool getTrackOutput() const;
    /**
     * @hash   1999248216
     * @symbol  ?getVersion\@BaseCommandBlock\@\@QEBAHXZ
     */
    MCAPI int getVersion() const;
    /**
     * @hash   -705318145
     * @symbol  ?load\@BaseCommandBlock\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1039119872
     * @symbol  ?performCommand\@BaseCommandBlock\@\@QEAA_NAEAVBlockSource\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool performCommand(class BlockSource &, struct ActorUniqueID const &);
    /**
     * @hash   -1482123892
     * @symbol  ?performCommand\@BaseCommandBlock\@\@QEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEA_N\@Z
     */
    MCAPI bool performCommand(class BlockSource &, class BlockPos const &, bool &);
    /**
     * @hash   -1214078313
     * @symbol  ?save\@BaseCommandBlock\@\@QEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool save(class CompoundTag &) const;
    /**
     * @hash   1408309696
     * @symbol  ?setCommand\@BaseCommandBlock\@\@QEAAXAEAVBlockSource\@\@AEBUActorUniqueID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCommand(class BlockSource &, struct ActorUniqueID const &, std::string const &);
    /**
     * @hash   441300506
     * @symbol  ?setCommand\@BaseCommandBlock\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCommand(class BlockSource &, class BlockPos const &, std::string const &);
    /**
     * @hash   -1376233618
     * @symbol  ?setLastOutput\@BaseCommandBlock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void setLastOutput(std::string const &, std::vector<std::string> const &);
    /**
     * @hash   -2041831394
     * @symbol  ?setName\@BaseCommandBlock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setName(std::string const &);
    /**
     * @hash   -950171242
     * @symbol  ?setShouldExecuteOnFirstTick\@BaseCommandBlock\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldExecuteOnFirstTick(bool);
    /**
     * @hash   594476200
     * @symbol  ?setSuccessCount\@BaseCommandBlock\@\@QEAAXH\@Z
     */
    MCAPI void setSuccessCount(int);
    /**
     * @hash   1629534358
     * @symbol  ?setTickDelay\@BaseCommandBlock\@\@QEAAXH\@Z
     */
    MCAPI void setTickDelay(int);
    /**
     * @hash   -1506200752
     * @symbol  ?setTrackOutput\@BaseCommandBlock\@\@QEAAX_N\@Z
     */
    MCAPI void setTrackOutput(bool);
    /**
     * @hash   -1198090576
     * @symbol  ?shouldExecuteOnFirstTick\@BaseCommandBlock\@\@QEBA_NXZ
     */
    MCAPI bool shouldExecuteOnFirstTick() const;
    /**
     * @hash   1460237021
     * @symbol  ??1BaseCommandBlock\@\@QEAA\@XZ
     */
    MCAPI ~BaseCommandBlock();

//private:
    /**
     * @hash   -5844582
     * @symbol  ?_performCommand\@BaseCommandBlock\@\@AEAA_NAEAVBlockSource\@\@AEBVCommandOrigin\@\@AEA_N\@Z
     */
    MCAPI bool _performCommand(class BlockSource &, class CommandOrigin const &, bool &);
    /**
     * @hash   1769303911
     * @symbol  ?_setCommand\@BaseCommandBlock\@\@AEAAXAEAVBlockSource\@\@AEBVCommandOrigin\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _setCommand(class BlockSource &, class CommandOrigin const &, std::string const &);
    /**
     * @hash   180379612
     * @symbol  ?compile\@BaseCommandBlock\@\@AEAAXAEBVCommandOrigin\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void compile(class CommandOrigin const &, class Level &);

private:
    /**
     * @hash   688363198
     * @symbol  ?DefaultCommandBlockName\@BaseCommandBlock\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DefaultCommandBlockName;

};