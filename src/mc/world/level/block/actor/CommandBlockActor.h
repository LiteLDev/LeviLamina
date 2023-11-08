#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@CommandBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 4, symbol: ?saveBlockData@CommandBlockActor@@UEBAXAEAVCompoundTag@@AEAVBlockSource@@@Z
    virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;

    // vIndex: 5, symbol:
    // ?loadBlockData@CommandBlockActor@@UEAAXAEBVCompoundTag@@AEAVBlockSource@@AEAVDataLoadHelper@@@Z
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);

    // vIndex: 6, symbol: ?onCustomTagLoadDone@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onCustomTagLoadDone(class BlockSource&);

    // vIndex: 8, symbol: ?onChanged@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource&);

    // vIndex: 11, symbol: ?onPlace@CommandBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onPlace(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 24, symbol:
    // ?getCustomName@CommandBlockActor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getCustomName() const;

    // vIndex: 25, symbol:
    // ?getFilteredCustomName@CommandBlockActor@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUIProfanityContext@@@Z
    virtual std::string const& getFilteredCustomName(class UIProfanityContext const&);

    // vIndex: 27, symbol:
    // ?setCustomName@CommandBlockActor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setCustomName(std::string const&);

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@CommandBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@CommandBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // vIndex: 42, symbol: ?_playerCanUpdate@CommandBlockActor@@MEBA_NAEBVPlayer@@@Z
    virtual bool _playerCanUpdate(class Player const&) const;

    // symbol: ?getBaseCommandBlock@CommandBlockActor@@QEAAAEAVBaseCommandBlock@@XZ
    MCAPI class BaseCommandBlock& getBaseCommandBlock();

    // symbol: ?getCommand@CommandBlockActor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCommand() const;

    // symbol: ?getCommandBlock@CommandBlockActor@@QEBAPEBVCommandBlock@@AEAVBlockSource@@@Z
    MCAPI class CommandBlock const* getCommandBlock(class BlockSource&) const;

    // symbol: ?getConditionalMode@CommandBlockActor@@QEBA_NAEAVBlockSource@@@Z
    MCAPI bool getConditionalMode(class BlockSource&) const;

    // symbol: ?getDelayOnActivation@CommandBlockActor@@QEBAHXZ
    MCAPI int getDelayOnActivation() const;

    // symbol: ?getMode@CommandBlockActor@@QEBA?AW4CommandBlockMode@@AEAVBlockSource@@@Z
    MCAPI ::CommandBlockMode getMode(class BlockSource&) const;

    // symbol: ?getPowered@CommandBlockActor@@QEBA_NXZ
    MCAPI bool getPowered() const;

    // symbol: ?getSuccessCount@CommandBlockActor@@QEBAHXZ
    MCAPI int getSuccessCount() const;

    // symbol: ?getTickDelay@CommandBlockActor@@QEBAHXZ
    MCAPI int getTickDelay() const;

    // symbol: ?isAutomatic@CommandBlockActor@@QEBA_NXZ
    MCAPI bool isAutomatic() const;

    // symbol: ?markConditionMet@CommandBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool markConditionMet(class BlockSource&);

    // symbol: ?markForSaving@CommandBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void markForSaving(class BlockSource&);

    // symbol: ?markForSaving@CommandBlockActor@@QEAAXAEAVBlockSource@@H_N@Z
    MCAPI void markForSaving(class BlockSource&, int, bool);

    // symbol: ?performCommand@CommandBlockActor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool performCommand(class BlockSource&);

    // symbol: ?setPowered@CommandBlockActor@@QEAAX_N@Z
    MCAPI void setPowered(bool);

    // symbol: ?setSuccessCount@CommandBlockActor@@QEAAXH@Z
    MCAPI void setSuccessCount(int);

    // symbol:
    // ?updateBlock@CommandBlockActor@@QEAAXAEAVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4CommandBlockMode@@_N33H3@Z
    MCAPI void updateBlock(
        class BlockSource&,
        std::string const&,
        std::string const&,
        ::CommandBlockMode,
        bool,
        bool,
        bool,
        int,
        bool
    );

    // symbol: ?wasConditionMet@CommandBlockActor@@QEAA_NXZ
    MCAPI bool wasConditionMet();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setAutomatic@CommandBlockActor@@AEAAXAEAVBlockSource@@_NW4CommandBlockMode@@@Z
    MCAPI void _setAutomatic(class BlockSource&, bool, ::CommandBlockMode);

    // NOLINTEND
};
