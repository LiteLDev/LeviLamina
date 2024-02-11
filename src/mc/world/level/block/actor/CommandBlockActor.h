#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/server/commands/CommandBlockMode.h"
#include "mc/world/level/block/actor/BlockActor.h"

class CommandBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    CommandBlockActor& operator=(CommandBlockActor const&);
    CommandBlockActor(CommandBlockActor const&);
    CommandBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CommandBlockActor@@UEAA@XZ
    virtual ~CommandBlockActor() = default;

    // vIndex: 1, symbol: ?load@CommandBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@CommandBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 4, symbol: ?saveBlockData@CommandBlockActor@@UEBAXAEAVCompoundTag@@AEAVBlockSource@@@Z
    virtual void saveBlockData(class CompoundTag& tag, class BlockSource& region) const;

    // vIndex: 5, symbol:
    // ?loadBlockData@CommandBlockActor@@UEAAXAEBVCompoundTag@@AEAVBlockSource@@AEAVDataLoadHelper@@@Z
    virtual void
    loadBlockData(class CompoundTag const& tag, class BlockSource& region, class DataLoadHelper& dataLoadHelper);

    // vIndex: 6, symbol: ?onCustomTagLoadDone@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onCustomTagLoadDone(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 11, symbol: ?onPlace@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onPlace(class BlockSource& region);

    // vIndex: 24, symbol:
    // ?getCustomName@CommandBlockActor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getCustomName() const;

    // vIndex: 25, symbol:
    // ?getFilteredCustomName@CommandBlockActor@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$not_null@V?$NonOwnerPointer@VUIProfanityContext@@@Bedrock@@@gsl@@@Z
    virtual std::string const& getFilteredCustomName(Bedrock::NotNullNonOwnerPtr<class UIProfanityContext> const&);

    // vIndex: 27, symbol:
    // ?setCustomName@CommandBlockActor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setCustomName(std::string const& str);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@CommandBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@CommandBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& tag, class BlockSource& region);

    // vIndex: 42, symbol: ?_playerCanUpdate@CommandBlockActor@@MEBA_NAEBVPlayer@@@Z
    virtual bool _playerCanUpdate(class Player const& player) const;

    // symbol: ?getBaseCommandBlock@CommandBlockActor@@QEAAAEAVBaseCommandBlock@@XZ
    MCAPI class BaseCommandBlock& getBaseCommandBlock();

    // symbol: ?getCommand@CommandBlockActor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCommand() const;

    // symbol: ?getCommandBlock@CommandBlockActor@@QEBAPEBVCommandBlock@@AEAVBlockSource@@@Z
    MCAPI class CommandBlock const* getCommandBlock(class BlockSource& region) const;

    // symbol: ?getConditionalMode@CommandBlockActor@@QEBA_NAEAVBlockSource@@@Z
    MCAPI bool getConditionalMode(class BlockSource& region) const;

    // symbol: ?getDelayOnActivation@CommandBlockActor@@QEBAHXZ
    MCAPI int getDelayOnActivation() const;

    // symbol: ?getMode@CommandBlockActor@@QEBA?AW4CommandBlockMode@@AEAVBlockSource@@@Z
    MCAPI ::CommandBlockMode getMode(class BlockSource& region) const;

    // symbol: ?getPowered@CommandBlockActor@@QEBA_NXZ
    MCAPI bool getPowered() const;

    // symbol: ?getSuccessCount@CommandBlockActor@@QEBAHXZ
    MCAPI int getSuccessCount() const;

    // symbol: ?getTickDelay@CommandBlockActor@@QEBAHXZ
    MCAPI int getTickDelay() const;

    // symbol: ?isAutomatic@CommandBlockActor@@QEBA_NXZ
    MCAPI bool isAutomatic() const;

    // symbol: ?markConditionMet@CommandBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool markConditionMet(class BlockSource& region);

    // symbol: ?markForSaving@CommandBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void markForSaving(class BlockSource& region);

    // symbol: ?markForSaving@CommandBlockActor@@QEAAXAEAVBlockSource@@H_N@Z
    MCAPI void markForSaving(class BlockSource& region, int oldSuccessCount, bool oldConditionMet);

    // symbol: ?performCommand@CommandBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool performCommand(class BlockSource& region);

    // symbol: ?setPowered@CommandBlockActor@@QEAAX_N@Z
    MCAPI void setPowered(bool powered);

    // symbol: ?setSuccessCount@CommandBlockActor@@QEAAXH@Z
    MCAPI void setSuccessCount(int successCount);

    // symbol:
    // ?updateBlock@CommandBlockActor@@QEAAXAEAVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4CommandBlockMode@@_N33H3@Z
    MCAPI void updateBlock(
        class BlockSource& region,
        std::string const& cmd,
        std::string const& name,
        ::CommandBlockMode newMode,
        bool               isConditional,
        bool               redstoneMode,
        bool               trackOutput,
        int                tickDelay,
        bool               executeFirstTick
    );

    // symbol: ?wasConditionMet@CommandBlockActor@@QEAA_NXZ
    MCAPI bool wasConditionMet();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setAutomatic@CommandBlockActor@@AEAAXAEAVBlockSource@@_NW4CommandBlockMode@@@Z
    MCAPI void _setAutomatic(class BlockSource& region, bool alwaysActive, ::CommandBlockMode currentMode);

    // NOLINTEND
};
