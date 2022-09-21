/**
 * @file  MC/WallBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WallBlock.
 *
 */
class WallBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALLBLOCK
public:
    class WallBlock& operator=(class WallBlock const &) = delete;
    WallBlock(class WallBlock const &) = delete;
    WallBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WallBlock();
    /**
     * @hash   1326094243
     * @vftbl  10
     * @symbol ?getAABB@WallBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   -1791301477
     * @vftbl  14
     * @symbol ?getLiquidClipVolume@WallBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   2017990962
     * @vftbl  22
     * @symbol ?canProvideSupport@WallBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /**
     * @hash   1938169578
     * @vftbl  25
     * @symbol ?canConnect@WallBlock@@UEBA_NAEBVBlock@@E0@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
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
     * @hash   -1519738475
     * @vftbl  62
     * @symbol ?canContainLiquid@WallBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   1489147351
     * @vftbl  76
     * @symbol ?onStructureBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1451187001
     * @vftbl  77
     * @symbol ?onStructureNeighborBlockPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   360333208
     * @vftbl  95
     * @symbol ?breaksFallingBlocks@WallBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @hash   508175717
     * @vftbl  99
     * @symbol ?neighborChanged@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   1758326737
     * @vftbl  102
     * @symbol ?getResourceItem@WallBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1070329318
     * @vftbl  103
     * @symbol ?asItemInstance@WallBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   1735410770
     * @vftbl  107
     * @symbol ?getPlacementBlock@WallBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
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
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -986345030
     * @vftbl  134
     * @symbol ?buildDescriptionId@WallBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @hash   1282865697
     * @vftbl  135
     * @symbol ?isAuxValueRelevantForPicking@WallBlock@@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @hash   -695550779
     * @vftbl  143
     * @symbol ?getVisualShapeInWorld@WallBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   1960300371
     * @vftbl  147
     * @symbol ?getVariant@WallBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
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
     * @hash   -1886837295
     * @vftbl  171
     * @symbol ?onPlace@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1607610521
     * @vftbl  174
     * @symbol ?tick@WallBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   1003052739
     * @vftbl  187
     * @symbol ?getMapColor@WallBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WALLBLOCK
    /**
     * @hash   981230660
     * @symbol ?canBeSilkTouched@WallBlock@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   792418830
     * @symbol ?isWallBlock@WallBlock@@UEBA_NXZ
     */
    MCVAPI bool isWallBlock() const;
#endif
    /**
     * @hash   -1029130758
     * @symbol ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI WallBlock(std::string const &, int, class Material const &);
    /**
     * @hash   -611534112
     * @symbol ??0WallBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@@Z
     */
    MCAPI WallBlock(std::string const &, int, class BlockLegacy const &);
    /**
     * @hash   1435634898
     * @symbol ?tryFixWallStates@WallBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI void tryFixWallStates(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   1950375941
     * @symbol ?POST_HEIGHT@WallBlock@@2MB
     */
    MCAPI static float const POST_HEIGHT;
    /**
     * @hash   1782796597
     * @symbol ?POST_WIDTH@WallBlock@@2MB
     */
    MCAPI static float const POST_WIDTH;
    /**
     * @hash   -1880390019
     * @symbol ?WALL_HEIGHT@WallBlock@@2MB
     */
    MCAPI static float const WALL_HEIGHT;
    /**
     * @hash   -1912976632
     * @symbol ?WALL_NAMES@WallBlock@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$0O@@std@@B
     */
    MCAPI static class std::array<std::string, 14> const WALL_NAMES;
    /**
     * @hash   1272814977
     * @symbol ?WALL_WIDTH@WallBlock@@2MB
     */
    MCAPI static float const WALL_WIDTH;

//private:
    /**
     * @hash   -1134512099
     * @symbol ?_desiredConnectionState@WallBlock@@AEBA?AW4WallConnectionType@@AEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCAPI enum WallConnectionType _desiredConnectionState(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?_getItemInstance@WallBlock@@AEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    MCAPI class ItemInstance _getItemInstance(class Block const &) const;
    /**
     * @hash   -660480550
     * @symbol ?_isCovered@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVAABB@@@Z
     */
    MCAPI bool _isCovered(class BlockSource &, class BlockPos const &, class AABB const &) const;
    /**
     * @hash   560270997
     * @symbol ?_shouldBePost@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI bool _shouldBePost(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -588438612
     * @symbol ?_tryAddToTickingQueue@WallBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _tryAddToTickingQueue(class BlockSource &, class BlockPos const &) const;

private:
    /**
     * @hash   292713195
     * @symbol ?WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION@WallBlock@@0VBaseGameVersion@@B
     */
    MCAPI static class BaseGameVersion const WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION;

};