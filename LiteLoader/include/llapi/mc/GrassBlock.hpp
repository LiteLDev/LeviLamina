/**
 * @file  GrassBlock.hpp
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
 * @brief MC class GrassBlock.
 *
 */
class GrassBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GRASSBLOCK
public:
    class GrassBlock& operator=(class GrassBlock const &) = delete;
    GrassBlock(class GrassBlock const &) = delete;
    GrassBlock() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
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
     * @vftbl 51
     * @symbol ?canBeOriginalSurface\@GrassBlock\@\@UEBA_NXZ
     */
    virtual bool canBeOriginalSurface() const;
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
     * @vftbl 85
     * @symbol ?onFertilized\@GrassBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @vftbl 87
     * @symbol ?canBeFertilized\@GrassBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 94
     * @symbol ?tryToTill\@GrassBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@AEAVItemStack\@\@\@Z
     */
    virtual bool tryToTill(class BlockSource &, class BlockPos const &, class Actor &, class ItemStack &) const;
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol ?calcVariant\@GrassBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual int calcVariant(class BlockSource &, class BlockPos const &, class mce::Color const &) const;
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
     * @symbol ?getColor\@GrassBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @vftbl 135
     * @symbol ?getColor\@GrassBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
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
     * @vftbl 169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl 171
     * @symbol ?randomTick\@GrassBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 173
     * @symbol __unk_vfn_173
     */
    virtual void __unk_vfn_173();
    /**
     * @vftbl 176
     * @symbol ?use\@GrassBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl 177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl 185
     * @symbol ?getMapColor\@GrassBlock\@\@UEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 186
     * @symbol __unk_vfn_186
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl 188
     * @symbol ?getResourceItem\@GrassBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GRASSBLOCK
    /**
     * @symbol ?waterSpreadCausesSpawn\@GrassBlock\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0GrassBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI GrassBlock(std::string const &, int);
    /**
     * @symbol ?fertilize\@GrassBlock\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandomize\@\@\@Z
     */
    MCAPI bool fertilize(class BlockSource &, class BlockPos const &, class Randomize &) const;
    /**
     * @symbol ?MIN_BRIGHTNESS\@GrassBlock\@\@2UBrightness\@\@B
     */
    MCAPI static struct Brightness const MIN_BRIGHTNESS;

//private:
    /**
     * @symbol ?_canBeGrass\@GrassBlock\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canBeGrass(class BlockSource const &, class BlockPos const &) const;

private:

};
