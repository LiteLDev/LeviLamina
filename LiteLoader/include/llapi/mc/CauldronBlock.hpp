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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 9
     * @symbol ?addAABBs\@CauldronBlock\@\@UEBAXAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @vftbl 11
     * @symbol ?addCollisionShapes\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 22
     * @symbol ?canProvideSupport\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
    /**
     * @vftbl 28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
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
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
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
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 59
     * @symbol __unk_vfn_59
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl 60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl 61
     * @symbol ?canContainLiquid\@CauldronBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 64
     * @symbol ?handlePrecipitation\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@MM\@Z
     */
    virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @vftbl 74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl 81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl 95
     * @symbol ?breaksFallingBlocks\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl 98
     * @symbol ?neighborChanged\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 102
     * @symbol ?asItemInstance\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 109
     * @symbol ?handleEntityInside\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@AEAVVec3\@\@\@Z
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @vftbl 122
     * @symbol __unk_vfn_122
     */
    virtual void __unk_vfn_122();
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
     * @symbol ?getComparatorSignal\@CauldronBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl 127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl 130
     * @symbol __unk_vfn_130
     */
    virtual void __unk_vfn_130();
    /**
     * @vftbl 150
     * @symbol ?animateTick\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 152
     * @symbol ?getLightEmission\@CauldronBlock\@\@UEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @vftbl 155
     * @symbol __unk_vfn_155
     */
    virtual void __unk_vfn_155();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl 166
     * @symbol __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl 167
     * @symbol ?onPlace\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl 170
     * @symbol ?tick\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 173
     * @symbol __unk_vfn_173
     */
    virtual void __unk_vfn_173();
    /**
     * @vftbl 176
     * @symbol ?use\@CauldronBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl 177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl 181
     * @symbol ?getExtraRenderLayers\@CauldronBlock\@\@UEBAHXZ
     */
    virtual int getExtraRenderLayers() const;
    /**
     * @vftbl 183
     * @symbol ?getLight\@CauldronBlock\@\@UEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getLight(class Block const &) const;
    /**
     * @vftbl 186
     * @symbol __unk_vfn_186
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl 188
     * @symbol ?getResourceItem\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl 190
     * @symbol ?getSilkTouchItemInstance\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAULDRONBLOCK
    /**
     * @symbol ?hasComparatorSignal\@CauldronBlock\@\@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @symbol ?isInteractiveBlock\@CauldronBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0CauldronBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI CauldronBlock(std::string const &, int);
    /**
     * @symbol ?getLiquidLevel\@CauldronBlock\@\@QEBAHH\@Z
     */
    MCAPI int getLiquidLevel(int) const;
    /**
     * @symbol ?setLiquidLevel\@CauldronBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@HW4CauldronLiquidType\@\@\@Z
     */
    MCAPI void setLiquidLevel(class BlockSource &, class BlockPos const &, int, enum class CauldronLiquidType) const;
    /**
     * @symbol ?FILL_LEVEL_PER_DRIP\@CauldronBlock\@\@2HB
     */
    MCAPI static int const FILL_LEVEL_PER_DRIP;
    /**
     * @symbol ?canReceiveStalactiteDrip\@CauldronBlock\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool canReceiveStalactiteDrip(class BlockSource &, class BlockPos const &, enum class MaterialType);
    /**
     * @symbol ?spawnPotionParticles\@CauldronBlock\@\@SAXAEAVLevel\@\@AEBVVec3\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI static void spawnPotionParticles(class Level &, class Vec3 const &, class Random &, int, int);

//private:
    /**
     * @symbol ?_checkForStalactiteDrip\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _checkForStalactiteDrip(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_explodeCauldronContents\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@G\@Z
     */
    MCAPI void _explodeCauldronContents(class BlockSource &, class BlockPos const &, unsigned short) const;
    /**
     * @symbol ?_mayUpdateLiquidLevel\@CauldronBlock\@\@AEBA?B_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool const _mayUpdateLiquidLevel(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_sendCauldronUsedEventToClient\@CauldronBlock\@\@AEBAXAEBVPlayer\@\@FW4POIBlockInteractionType\@MinecraftEventing\@\@\@Z
     */
    MCAPI void _sendCauldronUsedEventToClient(class Player const &, short, enum class MinecraftEventing::POIBlockInteractionType) const;
    /**
     * @symbol ?_spawnCauldronEvent\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@W4LevelEvent\@\@\@Z
     */
    MCAPI void _spawnCauldronEvent(class BlockSource &, class BlockPos const &, enum class LevelEvent) const;
    /**
     * @symbol ?_useDyeableComponent\@CauldronBlock\@\@AEBA_NAEAVItemStack\@\@AEAVPlayer\@\@AEBVBlockPos\@\@AEAVCauldronBlockActor\@\@AEAVBlockSource\@\@H_N55\@Z
     */
    MCAPI bool _useDyeableComponent(class ItemStack &, class Player &, class BlockPos const &, class CauldronBlockActor &, class BlockSource &, int, bool, bool, bool) const;
    /**
     * @symbol ?_useInventory\@CauldronBlock\@\@AEBAXAEAVPlayer\@\@AEAVItemStack\@\@1H\@Z
     */
    MCAPI void _useInventory(class Player &, class ItemStack &, class ItemStack &, int) const;

private:
    /**
     * @symbol ?BASE_WATER_PIXEL\@CauldronBlock\@\@0HB
     */
    MCAPI static int const BASE_WATER_PIXEL;
    /**
     * @symbol ?CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION\@CauldronBlock\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    /**
     * @symbol ?PIXEL_PER_LEVEL\@CauldronBlock\@\@0HB
     */
    MCAPI static int const PIXEL_PER_LEVEL;

};
