#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BedBlock : public ::BlockLegacy {

public:
    // prevent constructor by default
    BedBlock& operator=(BedBlock const&) = delete;
    BedBlock(BedBlock const&)            = delete;
    BedBlock()                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getNextBlockPermutation\@BedBlock\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const* getNextBlockPermutation(class Block const&) const; // NOLINT
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40(); // NOLINT
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41(); // NOLINT
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42(); // NOLINT
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43(); // NOLINT
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44(); // NOLINT
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46(); // NOLINT
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47(); // NOLINT
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48(); // NOLINT
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49(); // NOLINT
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50(); // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56(); // NOLINT
    /**
     * @vftbl 58
     * @symbol ?canFillAtPos\@BedBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 59
     * @symbol ?sanitizeFillBlock\@BedBlock\@\@UEBAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const&
    sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 60
     * @symbol ?onFillBlock\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63(); // NOLINT
    /**
     * @vftbl 71
     * @symbol ?checkIsPathable\@BedBlock\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 83
     * @symbol ?updateEntityAfterFallOn\@BedBlock\@\@UEBAXAEBVBlockPos\@\@AEAUUpdateEntityAfterFallOnInterface\@\@\@Z
     */
    virtual void
    updateEntityAfterFallOn(class BlockPos const&, struct UpdateEntityAfterFallOnInterface&) const; // NOLINT
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84(); // NOLINT
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 102
     * @symbol ?getSecondPart\@BedBlock\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const; // NOLINT
    /**
     * @vftbl 103
     * @symbol ?playerWillDestroy\@BedBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 104
     * @symbol
     * ?spawnResources\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    virtual void
    spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&)
        const; // NOLINT
    /**
     * @vftbl 105
     * @symbol ?asItemInstance\@BedBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const; // NOLINT
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107(); // NOLINT
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123(); // NOLINT
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124(); // NOLINT
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125(); // NOLINT
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128(); // NOLINT
    /**
     * @vftbl 129
     * @symbol ?canSpawnAt\@BedBlock\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131(); // NOLINT
    /**
     * @vftbl 142
     * @symbol ?telemetryVariant\@BedBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int telemetryVariant(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 143
     * @symbol ?getVariant\@BedBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const&) const; // NOLINT
    /**
     * @vftbl 146
     * @symbol ?getMappedFace\@BedBlock\@\@UEBAEEAEBVBlock\@\@\@Z
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const&) const; // NOLINT
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153(); // NOLINT
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162(); // NOLINT
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163(); // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 165
     * @symbol ?onPlace\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 166
     * @symbol ?onFallOn\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@M\@Z
     */
    virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const; // NOLINT
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167(); // NOLINT
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171(); // NOLINT
    /**
     * @vftbl 173
     * @symbol ?use\@BedBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174(); // NOLINT
    /**
     * @vftbl 182
     * @symbol ?getMapColor\@BedBlock\@\@UEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDBLOCK
    /**
     * @symbol ?canBeSilkTouched\@BedBlock\@\@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const; // NOLINT
    /**
     * @symbol ?isBounceBlock\@BedBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isBounceBlock() const; // NOLINT
    /**
     * @symbol ?isInteractiveBlock\@BedBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const; // NOLINT
#endif
    /**
     * @symbol ??0BedBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI BedBlock(std::string const&, int); // NOLINT
    /**
     * @symbol
     * ?findWakeupPosition\@BedBlock\@\@SA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV?$optional\@VVec3\@\@\@3\@\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    findWakeupPosition(class BlockSource&, class BlockPos const&, class std::optional<class Vec3> const&); // NOLINT
    /**
     * @symbol ?isValidStandUpPosition\@BedBlock\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isValidStandUpPosition(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?setOccupied\@BedBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI static void setOccupied(class BlockSource&, class BlockPos const&, bool); // NOLINT
    /**
     * @symbol ?HEAD_PIECE_DATA\@BedBlock\@\@2GB
     */
    MCAPI static unsigned short const HEAD_PIECE_DATA; // NOLINT
    /**
     * @symbol ?OCCUPIED_DATA\@BedBlock\@\@2GB
     */
    MCAPI static unsigned short const OCCUPIED_DATA; // NOLINT

    // private:
    /**
     * @symbol ?_isDangerousSpawnBlock\@BedBlock\@\@CA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool _isDangerousSpawnBlock(class Block const&); // NOLINT

private:
};
