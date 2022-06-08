// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChorusFlowerBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHORUSFLOWERBLOCK
public:
    class ChorusFlowerBlock& operator=(class ChorusFlowerBlock const &) = delete;
    ChorusFlowerBlock(class ChorusFlowerBlock const &) = delete;
    ChorusFlowerBlock() = delete;
#endif

public:
    /*0*/ virtual ~ChorusFlowerBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*23*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual bool isWaterBlocking() const;
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual bool canContainLiquid() const;
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*183*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*185*/ virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*190*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHORUSFLOWERBLOCK
public:
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI ChorusFlowerBlock(std::string const &, int);
    MCAPI static int const BRANCH_DIRECTIONS;
    MCAPI static unsigned short const DEAD_AGE;
    MCAPI static int const GROW_RATE;
    MCAPI static void generatePlant(class BlockSource &, class BlockPos const &, class Random &, int);


//private:
    MCAPI void _placeDeadFlower(class BlockSource &, class BlockPos const &) const;
    MCAPI void _placeGrownFlower(class BlockSource &, class BlockPos const &, int) const;
    MCAPI static void _growTreeRecursive(class BlockSource &, class BlockPos const &, class BlockPos const &, class Random &, int, int);

};