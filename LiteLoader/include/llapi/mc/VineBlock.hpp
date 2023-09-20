/**
 * @file  VineBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol ?getCollisionShape\@VineBlock\@\@UEBA?AVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual class AABB getCollisionShape(class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl 10
     * @symbol ?getOutline\@VineBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@\@Z
     */
    virtual class AABB const & getOutline(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl 11
     * @symbol ?getVisualShapeInWorld\@VineBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@\@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
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
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 92
     * @symbol ?mayPlace\@VineBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl 100
     * @symbol ?neighborChanged\@VineBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol ?getPlacementBlock\@VineBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor const &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
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
     * @vftbl 134
     * @symbol ?getColor\@VineBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @vftbl 135
     * @symbol ?getColor\@VineBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
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
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol ?tick\@VineBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 169
     * @symbol ?randomTick\@VineBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 175
     * @symbol ?canSurvive\@VineBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 182
     * @symbol ?getMapColor\@VineBlock\@\@UEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl 184
     * @symbol ?playerDestroy\@VineBlock\@\@UEBAXAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 186
     * @symbol ?getResourceCount\@VineBlock\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VINEBLOCK
    /**
     * @symbol ?canBeSilkTouched\@VineBlock\@\@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?waterSpreadCausesSpawn\@VineBlock\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0VineBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI VineBlock(std::string const &, int);
    /**
     * @symbol ?growDown\@VineBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void growDown(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?growSideways\@VineBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void growSideways(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?growUp\@VineBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void growUp(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?VINE_ALL\@VineBlock\@\@2HB
     */
    MCAPI static int const VINE_ALL;
    /**
     * @symbol ?VINE_EAST\@VineBlock\@\@2HB
     */
    MCAPI static int const VINE_EAST;
    /**
     * @symbol ?VINE_NORTH\@VineBlock\@\@2HB
     */
    MCAPI static int const VINE_NORTH;
    /**
     * @symbol ?VINE_SOUTH\@VineBlock\@\@2HB
     */
    MCAPI static int const VINE_SOUTH;
    /**
     * @symbol ?VINE_WEST\@VineBlock\@\@2HB
     */
    MCAPI static int const VINE_WEST;
    /**
     * @symbol ?getBlockForFace\@VineBlock\@\@SAAEBVBlock\@\@E\@Z
     */
    MCAPI static class Block const & getBlockForFace(unsigned char);
    /**
     * @symbol ?isAcceptableNeighbour\@VineBlock\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isAcceptableNeighbour(class Block const &);

//private:
    /**
     * @symbol ?_canGrowDown\@VineBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canGrowDown(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_canGrowUp\@VineBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canGrowUp(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_canSideSpread\@VineBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canSideSpread(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_nextVineDirections\@VineBlock\@\@AEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI int _nextVineDirections(class BlockSource &, class BlockPos const &) const;

private:

};
