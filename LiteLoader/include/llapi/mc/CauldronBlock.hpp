/**
 * @file  CauldronBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MinecraftEventing.hpp"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CauldronBlock.
 *
 */
class CauldronBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAULDRONBLOCK
public:
    class CauldronBlock& operator=(class CauldronBlock const &) = delete;
    CauldronBlock(class CauldronBlock const &) = delete;
    CauldronBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CauldronBlock();
    /**
     * @hash   1619814811
     * @vftbl  9
     * @symbol  ?addAABBs\@CauldronBlock\@\@UEBAXAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   -1818812174
     * @vftbl  11
     * @symbol  ?addCollisionShapes\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1504681654
     * @vftbl  22
     * @symbol  ?canProvideSupport\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @vftbl  29
     * @symbol  __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol  __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol  __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol  __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol  __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol  __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol  __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol  __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol  __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol  __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol  __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol  __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol  __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol  __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -1870253299
     * @vftbl  62
     * @symbol  ?canContainLiquid\@CauldronBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   -1239192436
     * @vftbl  65
     * @symbol  ?handlePrecipitation\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@MM\@Z
     */
    virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @symbol  __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @hash   -1516458704
     * @vftbl  96
     * @symbol  ?breaksFallingBlocks\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @hash   -1593416275
     * @vftbl  99
     * @symbol  ?neighborChanged\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   1924875279
     * @vftbl  103
     * @symbol  ?asItemInstance\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @hash   -474048438
     * @vftbl  110
     * @symbol  ?handleEntityInside\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@AEAVVec3\@\@\@Z
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @vftbl  123
     * @symbol  __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @symbol  __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @symbol  __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @hash   12742523
     * @vftbl  127
     * @symbol  ?getComparatorSignal\@CauldronBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  131
     * @symbol  __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @hash   1178184240
     * @vftbl  151
     * @symbol  ?animateTick\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  156
     * @symbol  __unk_vfn_156
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol  __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl  166
     * @symbol  __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @symbol  __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @hash   1900323273
     * @vftbl  168
     * @symbol  ?onPlace\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   174051873
     * @vftbl  171
     * @symbol  ?tick\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @hash   1751016128
     * @vftbl  177
     * @symbol  ?use\@CauldronBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   878327938
     * @vftbl  181
     * @symbol  ?getExtraRenderLayers\@CauldronBlock\@\@UEBAHXZ
     */
    virtual int getExtraRenderLayers() const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
    /**
     * @hash   991254297
     * @vftbl  187
     * @symbol  ?getResourceItem\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1086977218
     * @vftbl  189
     * @symbol  ?getSilkTouchItemInstance\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAULDRONBLOCK
    /**
     * @hash   2121562261
     * @symbol  ?hasComparatorSignal\@CauldronBlock\@\@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @hash   1877969842
     * @symbol  ?isInteractiveBlock\@CauldronBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   -766509463
     * @symbol  ??0CauldronBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI CauldronBlock(std::string const &, int);
    /**
     * @hash   58243679
     * @symbol  ?getLiquidLevel\@CauldronBlock\@\@QEBAHH\@Z
     */
    MCAPI int getLiquidLevel(int) const;
    /**
     * @hash   -696251799
     * @symbol  ?setLiquidLevel\@CauldronBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@HW4CauldronLiquidType\@\@\@Z
     */
    MCAPI void setLiquidLevel(class BlockSource &, class BlockPos const &, int, enum class CauldronLiquidType) const;
    /**
     * @hash   -39434827
     * @symbol  ?FILL_LEVEL_PER_DRIP\@CauldronBlock\@\@2HB
     */
    MCAPI static int const FILL_LEVEL_PER_DRIP;
    /**
     * @hash   -2127993035
     * @symbol  ?canReceiveStalactiteDrip\@CauldronBlock\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool canReceiveStalactiteDrip(class BlockSource &, class BlockPos const &, enum class MaterialType);
    /**
     * @hash   -1197789694
     * @symbol  ?spawnPotionParticles\@CauldronBlock\@\@SAXAEAVLevel\@\@AEBVVec3\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI static void spawnPotionParticles(class Level &, class Vec3 const &, class Random &, int, int);

//private:
    /**
     * @hash   -1102436585
     * @symbol  ?_checkForStalactiteDrip\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _checkForStalactiteDrip(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -156596689
     * @symbol  ?_explodeCauldronContents\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@G\@Z
     */
    MCAPI void _explodeCauldronContents(class BlockSource &, class BlockPos const &, unsigned short) const;
    /**
     * @hash   969276846
     * @symbol  ?_mayUpdateLiquidLevel\@CauldronBlock\@\@AEBA?B_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool const _mayUpdateLiquidLevel(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -683147422
     * @symbol  ?_sendCauldronUsedEventToClient\@CauldronBlock\@\@AEBAXAEBVPlayer\@\@FW4POIBlockInteractionType\@MinecraftEventing\@\@\@Z
     */
    MCAPI void _sendCauldronUsedEventToClient(class Player const &, short, enum class MinecraftEventing::POIBlockInteractionType) const;
    /**
     * @hash   1131226682
     * @symbol  ?_spawnCauldronEvent\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@W4LevelEvent\@\@\@Z
     */
    MCAPI void _spawnCauldronEvent(class BlockSource &, class BlockPos const &, enum class LevelEvent) const;
    /**
     * @hash   37740046
     * @symbol  ?_useDyeableComponent\@CauldronBlock\@\@AEBA_NAEAVItemStack\@\@AEAVPlayer\@\@AEBVBlockPos\@\@AEAVCauldronBlockActor\@\@AEAVBlockSource\@\@H_N55\@Z
     */
    MCAPI bool _useDyeableComponent(class ItemStack &, class Player &, class BlockPos const &, class CauldronBlockActor &, class BlockSource &, int, bool, bool, bool) const;
    /**
     * @hash   1386373640
     * @symbol  ?_useInventory\@CauldronBlock\@\@AEBAXAEAVPlayer\@\@AEAVItemStack\@\@1H\@Z
     */
    MCAPI void _useInventory(class Player &, class ItemStack &, class ItemStack &, int) const;

private:
    /**
     * @hash   506216497
     * @symbol  ?BASE_WATER_PIXEL\@CauldronBlock\@\@0HB
     */
    MCAPI static int const BASE_WATER_PIXEL;
    /**
     * @hash   1266444971
     * @symbol  ?CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION\@CauldronBlock\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    /**
     * @hash   68957614
     * @symbol  ?PIXEL_PER_LEVEL\@CauldronBlock\@\@0HB
     */
    MCAPI static int const PIXEL_PER_LEVEL;

};