/**
 * @file  TopSnowBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TopSnowBlock.
 *
 */
class TopSnowBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOPSNOWBLOCK
public:
    class TopSnowBlock& operator=(class TopSnowBlock const &) = delete;
    TopSnowBlock(class TopSnowBlock const &) = delete;
    TopSnowBlock() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 5
     * @symbol ?getCollisionShape\@TopSnowBlock\@\@UEBA_NAEAVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl 10
     * @symbol ?getAABB\@TopSnowBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol ?isWaterBlocking\@TopSnowBlock\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
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
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
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
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 62
     * @symbol ?canContainLiquid\@TopSnowBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 69
     * @symbol ?checkIsPathable\@TopSnowBlock\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 84
     * @symbol ?isPreservingMediumWhenPlaced\@TopSnowBlock\@\@UEBA_NPEBVBlockLegacy\@\@\@Z
     */
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /**
     * @vftbl 92
     * @symbol ?mayPlace\@TopSnowBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 94
     * @symbol ?tryToPlace\@TopSnowBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEBUActorBlockSyncMessage\@\@\@Z
     */
    virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @vftbl 96
     * @symbol ?breaksFallingBlocks\@TopSnowBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl 99
     * @symbol ?neighborChanged\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 101
     * @symbol ?playerWillDestroy\@TopSnowBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl 106
     * @symbol ?getPlacementBlock\@TopSnowBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor const &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl 114
     * @symbol ?canBeBuiltOver\@TopSnowBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlockItem\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @vftbl 115
     * @symbol ?canBeBuiltOver\@TopSnowBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 122
     * @symbol ?shouldStopFalling\@TopSnowBlock\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool shouldStopFalling(class Actor &) const;
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 124
     * @symbol ?calcGroundFriction\@TopSnowBlock\@\@UEBAMAEBUIMobMovementProxy\@\@AEBVBlockPos\@\@\@Z
     */
    virtual float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl 129
     * @symbol __unk_vfn_129
     */
    virtual void __unk_vfn_129();
    /**
     * @vftbl 132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl 144
     * @symbol ?getVisualShape\@TopSnowBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl 157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl 164
     * @symbol ?onExploded\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl 166
     * @symbol __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl 169
     * @symbol ?onPlace\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 172
     * @symbol ?tick\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 173
     * @symbol ?randomTick\@TopSnowBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 175
     * @symbol __unk_vfn_175
     */
    virtual void __unk_vfn_175();
    /**
     * @vftbl 179
     * @symbol __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl 187
     * @symbol __unk_vfn_187
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl 188
     * @symbol ?playerDestroy\@TopSnowBlock\@\@UEBAXAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 189
     * @symbol ?getResourceItem\@TopSnowBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl 190
     * @symbol ?getResourceCount\@TopSnowBlock\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl 195
     * @symbol ?getDustColor\@TopSnowBlock\@\@UEBA?AVColor\@mce\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @vftbl 196
     * @symbol ?getDustParticleName\@TopSnowBlock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @vftbl 197
     * @symbol __unk_vfn_197
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl 199
     * @symbol ?isFreeToFall\@TopSnowBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 200
     * @symbol ?startFalling\@TopSnowBlock\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@_N\@Z
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TOPSNOWBLOCK
    /**
     * @symbol ?canBeDestroyedByWaterSpread\@TopSnowBlock\@\@UEBA_NXZ
     */
    MCVAPI bool canBeDestroyedByWaterSpread() const;
    /**
     * @symbol ?canBeSilkTouched\@TopSnowBlock\@\@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?canHaveExtraData\@TopSnowBlock\@\@UEBA_NXZ
     */
    MCVAPI bool canHaveExtraData() const;
    /**
     * @symbol ?waterSpreadCausesSpawn\@TopSnowBlock\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0TopSnowBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI TopSnowBlock(std::string const &, int);
    /**
     * @symbol ?getResourceItemFromFalling\@TopSnowBlock\@\@QEBA?AVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance getResourceItemFromFalling() const;
    /**
     * @symbol ?melt\@TopSnowBlock\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI bool melt(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?startFallingIfLostSupport\@TopSnowBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void startFallingIfLostSupport(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?buildSnowBlock\@TopSnowBlock\@\@SAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    MCAPI static class Block const & buildSnowBlock(class BlockSource &, class BlockPos const &, int, bool);
    /**
     * @symbol ?getCoveredBlock\@TopSnowBlock\@\@SAAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Block const & getCoveredBlock(class BlockSource const &, class BlockPos const &);
    /**
     * @symbol ?getSnowBlockToBuild\@TopSnowBlock\@\@SAAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    MCAPI static class Block const & getSnowBlockToBuild(class BlockSource const &, class BlockPos const &, int, bool);

//private:
    /**
     * @symbol ?_canBeBuiltOver\@TopSnowBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEBVBlockItem\@\@\@Z
     */
    MCAPI bool _canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const *) const;
    /**
     * @symbol ?_canSurvive\@TopSnowBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canSurvive(class BlockSource &, class BlockPos const &) const;

private:

};
