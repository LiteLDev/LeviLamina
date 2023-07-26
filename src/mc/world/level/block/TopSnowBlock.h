#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/actor/item/FallingBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class TopSnowBlock : public ::FallingBlock {

public:
    // prevent constructor by default
    TopSnowBlock& operator=(TopSnowBlock const&) = delete;
    TopSnowBlock(TopSnowBlock const&)            = delete;
    TopSnowBlock()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?getCollisionShape\@TopSnowBlock\@\@UEBA_NAEAVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool
    getCollisionShape(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const; // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@TopSnowBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool)
        const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getVisualShape\@TopSnowBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const; // NOLINT
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
     * @vftbl 37
     * @symbol ?isWaterBlocking\@TopSnowBlock\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const; // NOLINT
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
     * @vftbl 64
     * @symbol ?canContainLiquid\@TopSnowBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const; // NOLINT
    /**
     * @vftbl 71
     * @symbol ?checkIsPathable\@TopSnowBlock\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84(); // NOLINT
    /**
     * @vftbl 86
     * @symbol ?isPreservingMediumWhenPlaced\@TopSnowBlock\@\@UEBA_NPEBVBlockLegacy\@\@\@Z
     */
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const; // NOLINT
    /**
     * @vftbl 94
     * @symbol ?mayPlace\@TopSnowBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 96
     * @symbol
     * ?tryToPlace\@TopSnowBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEBUActorBlockSyncMessage\@\@\@Z
     */
    virtual bool
    tryToPlace(class BlockSource&, class BlockPos const&, class Block const&, struct ActorBlockSyncMessage const*)
        const; // NOLINT
    /**
     * @vftbl 98
     * @symbol ?breaksFallingBlocks\@TopSnowBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 103
     * @symbol ?playerWillDestroy\@TopSnowBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107(); // NOLINT
    /**
     * @vftbl 108
     * @symbol ?getPlacementBlock\@TopSnowBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, unsigned char, class Vec3 const&, int) const; // NOLINT
    /**
     * @vftbl 114
     * @symbol ?canBeBuiltOver\@TopSnowBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlockItem\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&, class BlockItem const&) const; // NOLINT
    /**
     * @vftbl 115
     * @symbol ?canBeBuiltOver\@TopSnowBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 122
     * @symbol ?shouldStopFalling\@TopSnowBlock\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool shouldStopFalling(class Actor&) const; // NOLINT
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
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131(); // NOLINT
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153(); // NOLINT
    /**
     * @vftbl 160
     * @symbol ?onExploded\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    virtual void onExploded(class BlockSource&, class BlockPos const&, class Actor*) const; // NOLINT
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
     * @symbol ?onPlace\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?tick\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 169
     * @symbol ?randomTick\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171(); // NOLINT
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174(); // NOLINT
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183(); // NOLINT
    /**
     * @vftbl 184
     * @symbol ?playerDestroy\@TopSnowBlock\@\@UEBAXAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 185
     * @symbol ?getResourceItem\@TopSnowBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const; // NOLINT
    /**
     * @vftbl 186
     * @symbol ?getResourceCount\@TopSnowBlock\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize&, class Block const&, int) const; // NOLINT
    /**
     * @vftbl 192
     * @symbol ?getDustColor\@TopSnowBlock\@\@UEBA?AVColor\@mce\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getDustColor(class Block const&) const; // NOLINT
    /**
     * @vftbl 193
     * @symbol
     * ?getDustParticleName\@TopSnowBlock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string getDustParticleName(class Block const&) const; // NOLINT
    /**
     * @vftbl 194
     * @symbol __unk_vfn_194
     */
    virtual void __unk_vfn_194(); // NOLINT
    /**
     * @vftbl 196
     * @symbol ?isFreeToFall\@TopSnowBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isFreeToFall(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 197
     * @symbol ?startFalling\@TopSnowBlock\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@_N\@Z
     */
    virtual void startFalling(class BlockSource&, class BlockPos const&, class Block const&, bool) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TOPSNOWBLOCK
    /**
     * @symbol ?canBeDestroyedByWaterSpread\@TopSnowBlock\@\@UEBA_NXZ
     */
    MCVAPI bool canBeDestroyedByWaterSpread() const; // NOLINT
    /**
     * @symbol ?canBeSilkTouched\@TopSnowBlock\@\@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const; // NOLINT
    /**
     * @symbol ?canHaveExtraData\@TopSnowBlock\@\@UEBA_NXZ
     */
    MCVAPI bool canHaveExtraData() const; // NOLINT
    /**
     * @symbol ?waterSpreadCausesSpawn\@TopSnowBlock\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const; // NOLINT
#endif
    /**
     * @symbol ??0TopSnowBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI TopSnowBlock(std::string const&, int); // NOLINT
    /**
     * @symbol ?getResourceItemFromFalling\@TopSnowBlock\@\@QEBA?AVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance getResourceItemFromFalling() const; // NOLINT
    /**
     * @symbol ?melt\@TopSnowBlock\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI bool melt(class BlockSource&, class BlockPos const&, int) const; // NOLINT
    /**
     * @symbol ?startFallingIfLostSupport\@TopSnowBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void startFallingIfLostSupport(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol ?buildSnowBlock\@TopSnowBlock\@\@SAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    MCAPI static class Block const& buildSnowBlock(class BlockSource&, class BlockPos const&, int, bool); // NOLINT
    /**
     * @symbol ?getCoveredBlock\@TopSnowBlock\@\@SAAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Block const& getCoveredBlock(class BlockSource const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?getSnowBlockToBuild\@TopSnowBlock\@\@SAAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    MCAPI static class Block const&
    getSnowBlockToBuild(class BlockSource const&, class BlockPos const&, int, bool); // NOLINT

    // private:
    /**
     * @symbol ?_canBeBuiltOver\@TopSnowBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEBVBlockItem\@\@\@Z
     */
    MCAPI bool _canBeBuiltOver(class BlockSource&, class BlockPos const&, class BlockItem const*) const; // NOLINT
    /**
     * @symbol ?_canSurvive\@TopSnowBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canSurvive(class BlockSource&, class BlockPos const&) const; // NOLINT

private:
};
