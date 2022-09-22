/**
 * @file  BaseRailBlock.hpp
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
 * @brief MC class BaseRailBlock.
 *
 */
class BaseRailBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASERAILBLOCK
public:
    class BaseRailBlock& operator=(class BaseRailBlock const &) = delete;
    BaseRailBlock(class BaseRailBlock const &) = delete;
    BaseRailBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BaseRailBlock();
    /**
     * @hash   1483725834
     * @vftbl  10
     * @symbol ?getAABB@BaseRailBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
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
     * @hash   433207920
     * @vftbl  35
     * @symbol ?isWaterBlocking@BaseRailBlock@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
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
     * @hash   166012782
     * @vftbl  62
     * @symbol ?canContainLiquid@BaseRailBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   -2063800469
     * @vftbl  72
     * @symbol ?onRedstoneUpdate@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   1744736574
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   99753974
     * @vftbl  91
     * @symbol ?mayPlace@BaseRailBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1570395260
     * @vftbl  99
     * @symbol ?neighborChanged@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -425044339
     * @vftbl  103
     * @symbol ?asItemInstance@BaseRailBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
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
     * @hash   -492666922
     * @vftbl  141
     * @symbol ?onGraphicsModeChanged@BaseRailBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @hash   -1431132556
     * @vftbl  144
     * @symbol ?getVisualShape@BaseRailBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
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
     * @hash   695958826
     * @vftbl  171
     * @symbol ?onPlace@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1407116640
     * @vftbl  174
     * @symbol ?tick@BaseRailBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -1993823149
     * @vftbl  182
     * @symbol ?getRenderLayer@BaseRailBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASERAILBLOCK
    /**
     * @hash   -102057320
     * @symbol ?canSpawnOn@BaseRailBlock@@UEBA_NXZ
     */
    MCVAPI bool canSpawnOn() const;
    /**
     * @hash   128278047
     * @symbol ?isRailBlock@BaseRailBlock@@UEBA_NXZ
     */
    MCVAPI bool isRailBlock() const;
    /**
     * @hash   1174516789
     * @symbol ?waterSpreadCausesSpawn@BaseRailBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   844223363
     * @symbol ??0BaseRailBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     */
    MCAPI BaseRailBlock(std::string const &, int, bool);
    /**
     * @hash   213327866
     * @symbol ?isCorner@BaseRailBlock@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool isCorner(class BlockSource const &, class BlockPos const &);
    /**
     * @hash   -375997044
     * @symbol ?isFacingWestEast@BaseRailBlock@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool isFacingWestEast(class BlockSource const &, class BlockPos const &);
    /**
     * @hash   -1335411671
     * @symbol ?isRail@BaseRailBlock@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isRail(class Block const &);
    /**
     * @hash   1059690596
     * @symbol ?isRail@BaseRailBlock@@SA_NAEBVIConstBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool isRail(class IConstBlockSource const &, class BlockPos const &);
    /**
     * @hash   -1036161125
     * @symbol ?isSlope@BaseRailBlock@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isSlope(class Block const &);
    /**
     * @hash   -1375866757
     * @symbol ?isSlope@BaseRailBlock@@SA_NH@Z
     */
    MCAPI static bool isSlope(int);

//private:
    /**
     * @hash   -2063385779
     * @symbol ?_canSurvive@BaseRailBlock@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _canSurvive(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   1766180620
     * @symbol ?_updatePlacement@BaseRailBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _updatePlacement(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1763833693
     * @symbol ?_createCircuitComponent@BaseRailBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static void _createCircuitComponent(class BlockSource &, class BlockPos const &);

private:

};