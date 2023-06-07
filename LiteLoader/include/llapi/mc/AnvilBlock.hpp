/**
 * @file  AnvilBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FallingBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnvilBlock.
 *
 */
class AnvilBlock : public FallingBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILBLOCK
public:
    class AnvilBlock& operator=(class AnvilBlock const &) = delete;
    AnvilBlock(class AnvilBlock const &) = delete;
    AnvilBlock() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 10
     * @symbol ?getAABB\@AnvilBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl 14
     * @symbol ?getLiquidClipVolume\@AnvilBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVAABB\@\@\@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 22
     * @symbol ?canProvideSupport\@AnvilBlock\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
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
     * @symbol ?canContainLiquid\@AnvilBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
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
     * @symbol ?breaksFallingBlocks\@AnvilBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl 102
     * @symbol ?asItemInstance\@AnvilBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 105
     * @symbol ?getPlacementBlock\@AnvilBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
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
     * @vftbl 132
     * @symbol ?buildDescriptionId\@AnvilBlock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl 133
     * @symbol ?isAuxValueRelevantForPicking\@AnvilBlock\@\@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl 145
     * @symbol ?getVariant\@AnvilBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl 150
     * @symbol ?animateTick\@AnvilBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
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
     * @vftbl 173
     * @symbol __unk_vfn_173
     */
    virtual void __unk_vfn_173();
    /**
     * @vftbl 176
     * @symbol ?use\@AnvilBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl 177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl 186
     * @symbol __unk_vfn_186
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl 188
     * @symbol ?getResourceItem\@AnvilBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl 190
     * @symbol ?getSilkTouchItemInstance\@AnvilBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl 194
     * @symbol ?getDustColor\@AnvilBlock\@\@UEBA?AVColor\@mce\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @vftbl 195
     * @symbol ?getDustParticleName\@AnvilBlock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @vftbl 196
     * @symbol __unk_vfn_196
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl 197
     * @symbol ?onLand\@AnvilBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onLand(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANVILBLOCK
    /**
     * @symbol ?canBeSilkTouched\@AnvilBlock\@\@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?falling\@AnvilBlock\@\@UEBA_NXZ
     */
    MCVAPI bool falling() const;
    /**
     * @symbol ?isCraftingBlock\@AnvilBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isCraftingBlock() const;
    /**
     * @symbol ?isInteractiveBlock\@AnvilBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0AnvilBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI AnvilBlock(std::string const &, int);

};
