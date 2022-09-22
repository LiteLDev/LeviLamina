/**
 * @file  VineBlock.hpp
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
 * @brief MC class VineBlock.
 *
 */
class VineBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VINEBLOCK
public:
    class VineBlock& operator=(class VineBlock const &) = delete;
    VineBlock(class VineBlock const &) = delete;
    VineBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~VineBlock();
    /**
     * @hash   -1198366941
     * @vftbl  10
     * @symbol ?getAABB@VineBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
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
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -123112770
     * @vftbl  90
     * @symbol ?mayPlace@VineBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1311428485
     * @vftbl  99
     * @symbol ?neighborChanged@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1079986583
     * @vftbl  101
     * @symbol ?getResourceCount@VineBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -66471390
     * @vftbl  107
     * @symbol ?getPlacementBlock@VineBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
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
     * @hash   -242915643
     * @vftbl  136
     * @symbol ?getColor@VineBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @hash   -1465095505
     * @vftbl  137
     * @symbol ?getColor@VineBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   1075047589
     * @vftbl  143
     * @symbol ?getVisualShapeInWorld@VineBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
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
     * @hash   -1693257993
     * @vftbl  173
     * @symbol ?playerDestroy@VineBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   648507785
     * @vftbl  174
     * @symbol ?tick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -408641594
     * @vftbl  175
     * @symbol ?randomTick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   670341155
     * @vftbl  187
     * @symbol ?getMapColor@VineBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VINEBLOCK
    /**
     * @hash   -1828408260
     * @symbol ?waterSpreadCausesSpawn@VineBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   896374033
     * @symbol ??0VineBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI VineBlock(std::string const &, int);
    /**
     * @hash   235201906
     * @symbol ?growDown@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI void growDown(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   -1701467454
     * @symbol ?growSideways@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI void growSideways(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   -696918238
     * @symbol ?growUp@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI void growUp(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   858817975
     * @symbol ?VINE_ALL@VineBlock@@2HB
     */
    MCAPI static int const VINE_ALL;
    /**
     * @hash   -1225725411
     * @symbol ?VINE_EAST@VineBlock@@2HB
     */
    MCAPI static int const VINE_EAST;
    /**
     * @hash   1396626483
     * @symbol ?VINE_NORTH@VineBlock@@2HB
     */
    MCAPI static int const VINE_NORTH;
    /**
     * @hash   2135134911
     * @symbol ?VINE_SOUTH@VineBlock@@2HB
     */
    MCAPI static int const VINE_SOUTH;
    /**
     * @hash   1483319173
     * @symbol ?VINE_WEST@VineBlock@@2HB
     */
    MCAPI static int const VINE_WEST;
    /**
     * @hash   -1959446566
     * @symbol ?getBlockForFace@VineBlock@@SAAEBVBlock@@E@Z
     */
    MCAPI static class Block const & getBlockForFace(unsigned char);
    /**
     * @hash   -1390545843
     * @symbol ?isAcceptableNeighbour@VineBlock@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isAcceptableNeighbour(class Block const &);

//private:
    /**
     * @hash   -2066674266
     * @symbol ?_canGrowDown@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _canGrowDown(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1132797429
     * @symbol ?_canSideSpread@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _canSideSpread(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2131503541
     * @symbol ?_nextVineDirections@VineBlock@@AEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI int _nextVineDirections(class BlockSource &, class BlockPos const &) const;

private:

};