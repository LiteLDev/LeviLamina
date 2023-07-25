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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDBLOCK
public:
    BedBlock& operator=(BedBlock const&) = delete;
    BedBlock(BedBlock const&)            = delete;
    BedBlock()                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?getNextBlockPermutation\@BedBlock\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const* getNextBlockPermutation(class Block const&) const;
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43();
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56();
    /**
     * @vftbl 58
     * @symbol ?canFillAtPos\@BedBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canFillAtPos(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 59
     * @symbol ?sanitizeFillBlock\@BedBlock\@\@UEBAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const& sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 60
     * @symbol ?onFillBlock\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl 71
     * @symbol ?checkIsPathable\@BedBlock\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 83
     * @symbol ?updateEntityAfterFallOn\@BedBlock\@\@UEBAXAEBVBlockPos\@\@AEAUUpdateEntityAfterFallOnInterface\@\@\@Z
     */
    virtual void updateEntityAfterFallOn(class BlockPos const&, struct UpdateEntityAfterFallOnInterface&) const;
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 102
     * @symbol ?getSecondPart\@BedBlock\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const;
    /**
     * @vftbl 103
     * @symbol ?playerWillDestroy\@BedBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 104
     * @symbol
     * ?spawnResources\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    virtual void
    spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&)
        const;
    /**
     * @vftbl 105
     * @symbol ?asItemInstance\@BedBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128();
    /**
     * @vftbl 129
     * @symbol ?canSpawnAt\@BedBlock\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSpawnAt(class BlockSource const&, class BlockPos const&) const;
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl 142
     * @symbol ?telemetryVariant\@BedBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int telemetryVariant(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 143
     * @symbol ?getVariant\@BedBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const&) const;
    /**
     * @vftbl 146
     * @symbol ?getMappedFace\@BedBlock\@\@UEBAEEAEBVBlock\@\@\@Z
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const&) const;
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol ?onPlace\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 166
     * @symbol ?onFallOn\@BedBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@M\@Z
     */
    virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const;
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 173
     * @symbol ?use\@BedBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 182
     * @symbol ?getMapColor\@BedBlock\@\@UEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDBLOCK
    /**
     * @symbol ?canBeSilkTouched\@BedBlock\@\@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?isBounceBlock\@BedBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isBounceBlock() const;
    /**
     * @symbol ?isInteractiveBlock\@BedBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0BedBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI BedBlock(std::string const&, int);
    /**
     * @symbol ?HEAD_PIECE_DATA\@BedBlock\@\@2GB
     */
    MCAPI static unsigned short const HEAD_PIECE_DATA;
    /**
     * @symbol ?OCCUPIED_DATA\@BedBlock\@\@2GB
     */
    MCAPI static unsigned short const OCCUPIED_DATA;
    /**
     * @symbol
     * ?findWakeupPosition\@BedBlock\@\@SA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV?$optional\@VVec3\@\@\@3\@\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    findWakeupPosition(class BlockSource&, class BlockPos const&, class std::optional<class Vec3> const&);
    /**
     * @symbol ?isValidStandUpPosition\@BedBlock\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isValidStandUpPosition(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ?setOccupied\@BedBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI static void setOccupied(class BlockSource&, class BlockPos const&, bool);

    // private:
    /**
     * @symbol ?_isDangerousSpawnBlock\@BedBlock\@\@CA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool _isDangerousSpawnBlock(class Block const&);

private:
};
