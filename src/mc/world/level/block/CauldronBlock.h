#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/level/block/ActorBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CauldronBlock : public ::ActorBlock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAULDRONBLOCK
public:
    CauldronBlock& operator=(CauldronBlock const&) = delete;
    CauldronBlock(CauldronBlock const&)            = delete;
    CauldronBlock()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 5
     * @symbol ?clip\@CauldronBlock\@\@UEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    virtual class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;
    /**
     * @vftbl 7
     * @symbol
     * ?addCollisionShapes\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool
    addCollisionShapes(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;
    /**
     * @vftbl 9
     * @symbol
     * ?addAABBs\@CauldronBlock\@\@UEBAXAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void
    addAABBs(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 25
     * @symbol ?canProvideSupport\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
     */
    virtual bool canProvideSupport(class Block const&, unsigned char, enum class BlockSupportType) const;
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
     * @vftbl 64
     * @symbol ?canContainLiquid\@CauldronBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 67
     * @symbol ?handlePrecipitation\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@MM\@Z
     */
    virtual void handlePrecipitation(class BlockSource&, class BlockPos const&, float, float) const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 98
     * @symbol ?breaksFallingBlocks\@CauldronBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 105
     * @symbol ?asItemInstance\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
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
     * @vftbl 126
     * @symbol ?getComparatorSignal\@CauldronBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128();
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl 148
     * @symbol ?animateTick\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @vftbl 150
     * @symbol ?getLightEmission\@CauldronBlock\@\@UEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getLightEmission(class Block const&) const;
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
     * @symbol ?onPlace\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol ?tick\@CauldronBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 173
     * @symbol ?use\@CauldronBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 178
     * @symbol ?getExtraRenderLayers\@CauldronBlock\@\@UEBAHXZ
     */
    virtual int getExtraRenderLayers() const;
    /**
     * @vftbl 180
     * @symbol ?getLight\@CauldronBlock\@\@UEBA?AUBrightness\@\@AEBVBlock\@\@\@Z
     */
    virtual struct Brightness getLight(class Block const&) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl 185
     * @symbol ?getResourceItem\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /**
     * @vftbl 187
     * @symbol ?getSilkTouchItemInstance\@CauldronBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
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
     * @symbol
     * ??0CauldronBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI CauldronBlock(std::string const&, int);
    /**
     * @symbol ?setLiquidLevel\@CauldronBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@HW4CauldronLiquidType\@\@\@Z
     */
    MCAPI void setLiquidLevel(class BlockSource&, class BlockPos const&, int, enum class CauldronLiquidType) const;
    /**
     * @symbol ?FILL_LEVEL_PER_DRIP\@CauldronBlock\@\@2HB
     */
    MCAPI static int const FILL_LEVEL_PER_DRIP;
    /**
     * @symbol ?canReceiveStalactiteDrip\@CauldronBlock\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@W4MaterialType\@\@\@Z
     */
    MCAPI static bool canReceiveStalactiteDrip(class BlockSource&, class BlockPos const&, enum class MaterialType);
    /**
     * @symbol ?clampLiquidLevel\@CauldronBlock\@\@SAHH\@Z
     */
    MCAPI static int clampLiquidLevel(int);
    /**
     * @symbol ?spawnPotionParticles\@CauldronBlock\@\@SAXAEAVLevel\@\@AEBVVec3\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI static void spawnPotionParticles(class Level&, class Vec3 const&, class Random&, int, int);

    // private:
    /**
     * @symbol ?_checkForStalactiteDrip\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _checkForStalactiteDrip(class BlockSource&, class BlockPos const&) const;
    /**
     * @symbol ?_explodeCauldronContents\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@G\@Z
     */
    MCAPI void _explodeCauldronContents(class BlockSource&, class BlockPos const&, unsigned short) const;
    /**
     * @symbol ?_mayUpdateLiquidLevel\@CauldronBlock\@\@AEBA?B_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool const _mayUpdateLiquidLevel(class BlockSource&, class BlockPos const&) const;
    /**
     * @symbol
     * ?_sendCauldronUsedEventToClient\@CauldronBlock\@\@AEBAXAEBVPlayer\@\@FW4POIBlockInteractionType\@MinecraftEventing\@\@\@Z
     */
    MCAPI void
    _sendCauldronUsedEventToClient(class Player const&, short, enum class MinecraftEventing::POIBlockInteractionType)
        const;
    /**
     * @symbol ?_spawnCauldronEvent\@CauldronBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@W4LevelEvent\@\@\@Z
     */
    MCAPI void _spawnCauldronEvent(class BlockSource&, class BlockPos const&, enum class LevelEvent) const;
    /**
     * @symbol
     * ?_useDyeableComponent\@CauldronBlock\@\@AEBA_NAEAVItemStack\@\@AEAVPlayer\@\@AEBVBlockPos\@\@AEAVCauldronBlockActor\@\@AEAVBlockSource\@\@H_N55\@Z
     */
    MCAPI bool _useDyeableComponent(
        class ItemStack&,
        class Player&,
        class BlockPos const&,
        class CauldronBlockActor&,
        class BlockSource&,
        int,
        bool,
        bool,
        bool
    ) const;
    /**
     * @symbol ?_useInventory\@CauldronBlock\@\@AEBAXAEAVPlayer\@\@AEAVItemStack\@\@1H\@Z
     */
    MCAPI void _useInventory(class Player&, class ItemStack&, class ItemStack&, int) const;

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
