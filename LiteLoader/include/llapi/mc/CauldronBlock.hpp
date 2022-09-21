/**
 * @file  MC/CauldronBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~CauldronBlock();
    /**
     * @hash   755652859
     * @vftbl  9
     * @symbol ?addAABBs@CauldronBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   1605089346
     * @vftbl  11
     * @symbol ?addCollisionShapes@CauldronBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   1926092938
     * @vftbl  22
     * @symbol ?canProvideSupport@CauldronBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -1970873843
     * @vftbl  62
     * @symbol ?canContainLiquid@CauldronBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   -2103554276
     * @vftbl  64
     * @symbol ?handlePrecipitation@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@MM@Z
     */
    virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1914315888
     * @vftbl  95
     * @symbol ?breaksFallingBlocks@CauldronBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @hash   1837158429
     * @vftbl  99
     * @symbol ?neighborChanged@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   127092345
     * @vftbl  102
     * @symbol ?getResourceItem@CauldronBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -1246021202
     * @vftbl  103
     * @symbol ?asItemInstance@CauldronBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -1338379526
     * @vftbl  111
     * @symbol ?handleEntityInside@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@AEAVVec3@@@Z
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @hash   -851465557
     * @vftbl  128
     * @symbol ?getComparatorSignal@CauldronBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   314022288
     * @vftbl  152
     * @symbol ?animateTick@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   222261730
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@CauldronBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   1035915305
     * @vftbl  171
     * @symbol ?onPlace@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -690663615
     * @vftbl  174
     * @symbol ?tick@CauldronBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   886608160
     * @vftbl  179
     * @symbol ?use@CauldronBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1807284354
     * @vftbl  183
     * @symbol ?getExtraRenderLayers@CauldronBlock@@UEBAHXZ
     */
    virtual int getExtraRenderLayers() const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAULDRONBLOCK
    /**
     * @hash   2021664389
     * @symbol ?hasComparatorSignal@CauldronBlock@@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @hash   1778071970
     * @symbol ?isInteractiveBlock@CauldronBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   -1630117879
     * @symbol ??0CauldronBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI CauldronBlock(std::string const &, int);
    /**
     * @hash   -805964401
     * @symbol ?getLiquidLevel@CauldronBlock@@QEBAHH@Z
     */
    MCAPI int getLiquidLevel(int) const;
    /**
     * @hash   -1560659767
     * @symbol ?setLiquidLevel@CauldronBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@HW4CauldronLiquidType@@@Z
     */
    MCAPI void setLiquidLevel(class BlockSource &, class BlockPos const &, int, enum CauldronLiquidType) const;
    /**
     * @hash   -1083319155
     * @symbol ?FILL_LEVEL_PER_DRIP@CauldronBlock@@2HB
     */
    MCAPI static int const FILL_LEVEL_PER_DRIP;
    /**
     * @hash   1302781557
     * @symbol ?canReceiveStalactiteDrip@CauldronBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@W4MaterialType@@@Z
     */
    MCAPI static bool canReceiveStalactiteDrip(class BlockSource &, class BlockPos const &, enum MaterialType);
    /**
     * @hash   -2062274542
     * @symbol ?spawnPotionParticles@CauldronBlock@@SAXAEAVLevel@@AEBVVec3@@AEAVRandom@@HH@Z
     */
    MCAPI static void spawnPotionParticles(class Level &, class Vec3 const &, class Random &, int, int);

//private:
    /**
     * @hash   -1020651009
     * @symbol ?_explodeCauldronContents@CauldronBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@G@Z
     */
    MCAPI void _explodeCauldronContents(class BlockSource &, class BlockPos const &, unsigned short) const;
    /**
     * @hash   105222526
     * @symbol ?_mayUpdateLiquidLevel@CauldronBlock@@AEBA?B_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool const _mayUpdateLiquidLevel(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1547201742
     * @symbol ?_sendCauldronUsedEventToClient@CauldronBlock@@AEBAXAEBVPlayer@@FW4POIBlockInteractionType@MinecraftEventing@@@Z
     */
    MCAPI void _sendCauldronUsedEventToClient(class Player const &, short, enum MinecraftEventing::POIBlockInteractionType) const;
    /**
     * @hash   267156986
     * @symbol ?_spawnCauldronEvent@CauldronBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@W4LevelEvent@@@Z
     */
    MCAPI void _spawnCauldronEvent(class BlockSource &, class BlockPos const &, enum LevelEvent) const;
    /**
     * @hash   -826345026
     * @symbol ?_useDyeableComponent@CauldronBlock@@AEBA_NAEAVItemStack@@AEAVPlayer@@AEBVBlockPos@@AEAVCauldronBlockActor@@AEAVBlockSource@@H_N55@Z
     */
    MCAPI bool _useDyeableComponent(class ItemStack &, class Player &, class BlockPos const &, class CauldronBlockActor &, class BlockSource &, int, bool, bool, bool) const;
    /**
     * @hash   522273192
     * @symbol ?_useInventory@CauldronBlock@@AEBAXAEAVPlayer@@AEAVItemStack@@1H@Z
     */
    MCAPI void _useInventory(class Player &, class ItemStack &, class ItemStack &, int) const;

private:
    /**
     * @hash   -537667831
     * @symbol ?BASE_WATER_PIXEL@CauldronBlock@@0HB
     */
    MCAPI static int const BASE_WATER_PIXEL;
    /**
     * @hash   155344459
     * @symbol ?CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION@CauldronBlock@@0VBaseGameVersion@@B
     */
    MCAPI static class BaseGameVersion const CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    /**
     * @hash   -974926714
     * @symbol ?PIXEL_PER_LEVEL@CauldronBlock@@0HB
     */
    MCAPI static int const PIXEL_PER_LEVEL;

};