#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseCommandBlock {
public:
    // prevent constructor by default
    BaseCommandBlock& operator=(BaseCommandBlock const&);
    BaseCommandBlock(BaseCommandBlock const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BaseCommandBlock@@QEAA@XZ
    MCAPI BaseCommandBlock();

    // symbol: ?getCommand@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCommand() const;

    // symbol: ?getLastOutput@BaseCommandBlock@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getLastOutput() const;

    // symbol: ?getName@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getRawName@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getRawName() const;

    // symbol: ?getSuccessCount@BaseCommandBlock@@QEBAHXZ
    MCAPI int getSuccessCount() const;

    // symbol: ?getTickDelay@BaseCommandBlock@@QEBAHXZ
    MCAPI int getTickDelay() const;

    // symbol: ?getTrackOutput@BaseCommandBlock@@QEBA_NXZ
    MCAPI bool getTrackOutput() const;

    // symbol: ?load@BaseCommandBlock@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?performCommand@BaseCommandBlock@@QEAA_NAEAVBlockSource@@AEBUActorUniqueID@@@Z
    MCAPI bool performCommand(class BlockSource& region, struct ActorUniqueID const& minecartId);

    // symbol: ?performCommand@BaseCommandBlock@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@AEA_N@Z
    MCAPI bool performCommand(class BlockSource& region, class BlockPos const& pos, bool& markForSaving);

    // symbol: ?save@BaseCommandBlock@@QEBA_NAEAVCompoundTag@@@Z
    MCAPI bool save(class CompoundTag& tag) const;

    // symbol:
    // ?setCommand@BaseCommandBlock@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setCommand(class BlockSource& region, class BlockPos const& pos, std::string const& command);

    // symbol:
    // ?setCommand@BaseCommandBlock@@QEAAXAEAVBlockSource@@AEBUActorUniqueID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setCommand(class BlockSource& region, struct ActorUniqueID const& entityId, std::string const& command);

    // symbol:
    // ?setLastOutput@BaseCommandBlock@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI void setLastOutput(std::string const& lastOutput, std::vector<std::string> const& params);

    // symbol: ?setName@BaseCommandBlock@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setName(std::string const& name);

    // symbol: ?setShouldExecuteOnFirstTick@BaseCommandBlock@@QEAAX_N@Z
    MCAPI void setShouldExecuteOnFirstTick(bool shouldExecute);

    // symbol: ?setSuccessCount@BaseCommandBlock@@QEAAXH@Z
    MCAPI void setSuccessCount(int successCount);

    // symbol: ?setTickDelay@BaseCommandBlock@@QEAAXH@Z
    MCAPI void setTickDelay(int tickDelay);

    // symbol: ?setTrackOutput@BaseCommandBlock@@QEAAX_N@Z
    MCAPI void setTrackOutput(bool trackOutput);

    // symbol: ?shouldExecuteOnFirstTick@BaseCommandBlock@@QEBA_NXZ
    MCAPI bool shouldExecuteOnFirstTick() const;

    // symbol: ??1BaseCommandBlock@@QEAA@XZ
    MCAPI ~BaseCommandBlock();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z
    MCAPI bool _performCommand(class BlockSource& region, class CommandOrigin const& origin, bool& markForSaving);

    // symbol:
    // ?_setCommand@BaseCommandBlock@@AEAAXAEAVBlockSource@@AEBVCommandOrigin@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _setCommand(class BlockSource& region, class CommandOrigin const& origin, std::string const& command);

    // symbol: ?compile@BaseCommandBlock@@AEAAXAEBVCommandOrigin@@AEAVLevel@@@Z
    MCAPI void compile(class CommandOrigin const& origin, class Level& level);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?DefaultCommandBlockName@BaseCommandBlock@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DefaultCommandBlockName;

    // NOLINTEND
};
