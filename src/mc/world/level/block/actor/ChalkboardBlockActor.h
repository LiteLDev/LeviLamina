#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ChalkboardSize.h"
#include "mc/world/level/block/actor/BlockActor.h"

class ChalkboardBlockActor : public ::BlockActor {
public:
    // ChalkboardBlockActor inner types declare
    // clang-format off
    class CachedLineData;
    class CachedMessageData;
    struct ChalkboardFinder;
    // clang-format on

    // ChalkboardBlockActor inner types define
    class CachedLineData {
    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);
        CachedLineData(CachedLineData const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0CachedLineData@ChalkboardBlockActor@@QEAA@XZ
        MCAPI CachedLineData();

        // symbol: ??1CachedLineData@ChalkboardBlockActor@@QEAA@XZ
        MCAPI ~CachedLineData();

        // NOLINTEND
    };

    class CachedMessageData {
    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData(CachedMessageData const&);
        CachedMessageData();

    public:
        // NOLINTBEGIN
        // symbol: ??1CachedMessageData@ChalkboardBlockActor@@QEAA@XZ
        MCAPI ~CachedMessageData();

        // NOLINTEND
    };

    struct ChalkboardFinder {
    public:
        // prevent constructor by default
        ChalkboardFinder& operator=(ChalkboardFinder const&);
        ChalkboardFinder(ChalkboardFinder const&);
        ChalkboardFinder();

    public:
        // NOLINTBEGIN
        // symbol: ?confirmedBroken@ChalkboardFinder@ChalkboardBlockActor@@QEBA_NAEAV2@AEAVBlockSource@@@Z
        MCAPI bool confirmedBroken(class ChalkboardBlockActor&, class BlockSource&) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ChalkboardBlockActor& operator=(ChalkboardBlockActor const&);
    ChalkboardBlockActor(ChalkboardBlockActor const&);
    ChalkboardBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ChalkboardBlockActor() = default;

    // vIndex: 1, symbol: ?load@ChalkboardBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@ChalkboardBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@ChalkboardBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 8, symbol: ?onChanged@ChalkboardBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 28, symbol:
    // ?getImmersiveReaderText@ChalkboardBlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
    virtual std::string getImmersiveReaderText(class BlockSource&);

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

    // vIndex: 37, symbol:
    // ?getUgcStrings@ChalkboardBlockActor@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const;

    // vIndex: 38, symbol:
    // ?setUgcStrings@ChalkboardBlockActor@@UEBAXAEAVCompoundTag@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void setUgcStrings(class CompoundTag&, std::vector<std::string> const&) const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@ChalkboardBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@ChalkboardBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ??0ChalkboardBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit ChalkboardBlockActor(class BlockPos const&);

    // symbol: ?getChalkboardSize@ChalkboardBlockActor@@QEBA?BW4ChalkboardSize@@XZ
    MCAPI ::ChalkboardSize const getChalkboardSize() const;

    // symbol: ?getLocked@ChalkboardBlockActor@@QEBA_NXZ
    MCAPI bool getLocked() const;

    // symbol: ?getRotation@ChalkboardBlockActor@@QEBAHAEAVBlockSource@@@Z
    MCAPI int getRotation(class BlockSource&) const;

    // symbol: ?getText@ChalkboardBlockActor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getText() const;

    // symbol: ?getTextCharCount@ChalkboardBlockActor@@QEBAHXZ
    MCAPI int getTextCharCount() const;

    // symbol: ?setText@ChalkboardBlockActor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setText(std::string const&);

    // symbol: ?validate@ChalkboardBlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void validate(class BlockSource&);

    // symbol:
    // ?calculateAllBlocks@ChalkboardBlockActor@@SA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@W4ChalkboardSize@@H@Z
    MCAPI static std::vector<class BlockPos> calculateAllBlocks(class BlockPos const&, ::ChalkboardSize, int);

    // symbol:
    // ?canCreateChalkboard@ChalkboardBlockActor@@SA_NPEAVActor@@AEAVBlockSource@@AEBVBlockPos@@W4ChalkboardSize@@EHAEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVItemStack@@_N@Z
    MCAPI static bool canCreateChalkboard(
        class Actor*,
        class BlockSource&,
        class BlockPos const&,
        ::ChalkboardSize,
        uchar,
        int,
        std::vector<class BlockPos>&,
        class ItemStack const&,
        bool
    );

    // symbol: ?convertFromEntity@ChalkboardBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVCompoundTag@@@Z
    MCAPI static class ChalkboardBlockActor* convertFromEntity(class BlockSource&, class CompoundTag const&);

    // symbol:
    // ?createChalkboard@ChalkboardBlockActor@@SAPEAV1@PEAVActor@@AEAVBlockSource@@AEBVBlockPos@@W4ChalkboardSize@@EH_NAEBVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class ChalkboardBlockActor* createChalkboard(
        class Actor*,
        class BlockSource&,
        class BlockPos const&,
        ::ChalkboardSize,
        uchar,
        int,
        bool,
        class ItemStack const&,
        std::string
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findChalkboard@ChalkboardBlockActor@@CA?AUChalkboardFinder@1@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static struct ChalkboardBlockActor::ChalkboardFinder
    _findChalkboard(class BlockSource&, class BlockPos const&);

    // NOLINTEND
};
