/**
 * @file  StairBlock.hpp
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
 * @brief MC class StairBlock.
 *
 */
class StairBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STAIRBLOCK
public:
    class StairBlock& operator=(class StairBlock const &) = delete;
    StairBlock(class StairBlock const &) = delete;
    StairBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StairBlock();
    /**
     * @hash   -235751276
     * @vftbl  9
     * @symbol ?addAABBs@StairBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @hash   -1896427831
     * @vftbl  11
     * @symbol ?addCollisionShapes@StairBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   37268727
     * @vftbl  13
     * @symbol ?getOutline@StairBlock@@UEBAAEBVAABB@@AEAVBlockSource@@AEBVBlockPos@@AEAV2@@Z
     */
    virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @hash   -1885768772
     * @vftbl  14
     * @symbol ?getLiquidClipVolume@StairBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @hash   -1909855401
     * @vftbl  17
     * @symbol ?liquidCanFlowIntoFromDirection@StairBlock@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
     */
    virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -2046649517
     * @vftbl  22
     * @symbol ?canProvideSupport@StairBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /**
     * @hash   -1050703253
     * @vftbl  25
     * @symbol ?canConnect@StairBlock@@UEBA_NAEBVBlock@@E0@Z
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
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   -1799161451
     * @vftbl  79
     * @symbol ?getRedstoneProperty@StairBlock@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual enum BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   987371770
     * @vftbl  88
     * @symbol ?mayPick@StairBlock@@UEBA_NXZ
     */
    virtual bool mayPick() const;
    /**
     * @hash   1186374341
     * @vftbl  89
     * @symbol ?mayPick@StairBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @hash   -1411784001
     * @vftbl  90
     * @symbol ?mayPlace@StairBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1247926983
     * @vftbl  95
     * @symbol ?breaksFallingBlocks@StairBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @hash   1484245033
     * @vftbl  96
     * @symbol ?destroy@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
     */
    virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /**
     * @hash   710637514
     * @vftbl  101
     * @symbol ?getResourceCount@StairBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -22429422
     * @vftbl  102
     * @symbol ?getResourceItem@StairBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1273286519
     * @vftbl  103
     * @symbol ?asItemInstance@StairBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -565169597
     * @vftbl  107
     * @symbol ?getPlacementBlock@StairBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   -1203504265
     * @vftbl  110
     * @symbol ?attack@StairBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
     */
    virtual bool attack(class Player *, class BlockPos const &) const;
    /**
     * @hash   -864299087
     * @vftbl  111
     * @symbol ?handleEntityInside@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@AEAVVec3@@@Z
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
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -346390988
     * @vftbl  147
     * @symbol ?getVariant@StairBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   1041008841
     * @vftbl  152
     * @symbol ?animateTick@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   -911970165
     * @vftbl  165
     * @symbol ?onRemove@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -794769065
     * @vftbl  166
     * @symbol ?onExploded@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @hash   1810131138
     * @vftbl  167
     * @symbol ?onStandOn@StairBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
     */
    virtual void onStandOn(class EntityContext &, class BlockPos const &) const;
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
     * @hash   -1302958400
     * @vftbl  171
     * @symbol ?onPlace@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1183531894
     * @vftbl  174
     * @symbol ?tick@StairBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   1995335126
     * @vftbl  178
     * @symbol ?clip@StairBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @hash   819243465
     * @vftbl  179
     * @symbol ?use@StairBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STAIRBLOCK
    /**
     * @hash   -1498216029
     * @symbol ?canBeSilkTouched@StairBlock@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   1238753794
     * @symbol ?isStairBlock@StairBlock@@UEBA_NXZ
     */
    MCVAPI bool isStairBlock() const;
#endif
    /**
     * @hash   -1788090684
     * @symbol ??0StairBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@H@Z
     */
    MCAPI StairBlock(std::string const &, int, class BlockLegacy const &, int);
    /**
     * @hash   -398462239
     * @symbol ?setInnerPieceShape@StairBlock@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEAVAABB@@_N@Z
     */
    MCAPI bool setInnerPieceShape(class Block const &, class BlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   -915738175
     * @symbol ?setStepShape@StairBlock@@QEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@AEAVAABB@@_N@Z
     */
    MCAPI bool setStepShape(class Block const &, class BlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   805062518
     * @symbol ?stairDirectionToFacing@StairBlock@@SAEH@Z
     */
    MCAPI static unsigned char stairDirectionToFacing(int);

//protected:
    /**
     * @hash   1794095580
     * @symbol ?shapeZFightShrink@StairBlock@@IEBAXAEAVAABB@@@Z
     */
    MCAPI void shapeZFightShrink(class AABB &) const;

protected:

};