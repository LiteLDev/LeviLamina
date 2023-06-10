/**
 * @file  MultifaceBlock.hpp
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
 * @brief MC class MultifaceBlock.
 *
 */
class MultifaceBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACEBLOCK
public:
    class MultifaceBlock& operator=(class MultifaceBlock const &) = delete;
    MultifaceBlock(class MultifaceBlock const &) = delete;
    MultifaceBlock() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 10
     * @symbol ?getAABB\@MultifaceBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
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
     * @vftbl 34
     * @symbol ?isWaterBlocking\@MultifaceBlock\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
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
     * @vftbl 56
     * @symbol ?sanitizeFillBlock\@MultifaceBlock\@\@UEBAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
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
     * @vftbl 90
     * @symbol ?mayPlace\@MultifaceBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl 98
     * @symbol ?neighborChanged\@MultifaceBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 105
     * @symbol ?getPlacementBlock\@MultifaceBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
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
     * @vftbl 141
     * @symbol ?getVisualShapeInWorld\@MultifaceBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
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
     * @vftbl 170
     * @symbol ?tick\@MultifaceBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 173
     * @symbol __unk_vfn_173
     */
    virtual void __unk_vfn_173();
    /**
     * @vftbl 174
     * @symbol ?clip\@MultifaceBlock\@\@UEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @vftbl 177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl 178
     * @symbol ?canSurvive\@MultifaceBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 186
     * @symbol __unk_vfn_186
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl 194
     * @symbol ?getMultifaceBlock\@GlowLichenBlock\@\@UEBAAEBVBlock\@\@XZ
     */
    virtual class Block const & getMultifaceBlock() const = 0;
    /**
     * @vftbl 195
     * @symbol ?getMultifaceSpreader\@GlowLichenBlock\@\@UEBAAEBVMultifaceSpreader\@\@XZ
     */
    virtual class MultifaceSpreader const & getMultifaceSpreader() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIFACEBLOCK
    /**
     * @symbol ?isMultifaceBlock\@MultifaceBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isMultifaceBlock() const;
#endif
    /**
     * @symbol ??0MultifaceBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@\@Z
     */
    MCAPI MultifaceBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ?removeFace\@MultifaceBlock\@\@QEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@E_N\@Z
     */
    MCAPI void removeFace(class IBlockWorldGenAPI &, class BlockSource *, class Block const &, class BlockPos const &, unsigned char, bool) const;
    /**
     * @symbol ?MULTIFACE_ALL\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_ALL;
    /**
     * @symbol ?MULTIFACE_DOWN\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_DOWN;
    /**
     * @symbol ?MULTIFACE_EAST\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_EAST;
    /**
     * @symbol ?MULTIFACE_NORTH\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_NORTH;
    /**
     * @symbol ?MULTIFACE_SIDES\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_SIDES;
    /**
     * @symbol ?MULTIFACE_SOUTH\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_SOUTH;
    /**
     * @symbol ?MULTIFACE_UP\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_UP;
    /**
     * @symbol ?MULTIFACE_WEST\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_WEST;
    /**
     * @symbol ?convertOldMultifaceToNewMultifaceValue\@MultifaceBlock\@\@SAHH\@Z
     */
    MCAPI static int convertOldMultifaceToNewMultifaceValue(int);
    /**
     * @symbol ?getBlockForPlacement\@MultifaceBlock\@\@SAAEBVBlock\@\@AEBV2\@0AEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI static class Block const & getBlockForPlacement(class Block const &, class Block const &, class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @symbol ?getBlockForPlacementWorldGen\@MultifaceBlock\@\@SAAEBVBlock\@\@AEBV2\@0AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI static class Block const & getBlockForPlacementWorldGen(class Block const &, class Block const &, class IBlockWorldGenAPI &, class BlockPos const &, unsigned char);
    /**
     * @symbol ?getMultifaceValueFromFace\@MultifaceBlock\@\@SAHE\@Z
     */
    MCAPI static int getMultifaceValueFromFace(unsigned char);
    /**
     * @symbol ?hasFace\@MultifaceBlock\@\@SA_NAEBVBlock\@\@E\@Z
     */
    MCAPI static bool hasFace(class Block const &, unsigned char);

//protected:
    /**
     * @symbol ?_canSpread\@MultifaceBlock\@\@IEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _canSpread(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?_getNumSides\@MultifaceBlock\@\@IEBAHAEBVBlock\@\@\@Z
     */
    MCAPI int _getNumSides(class Block const &) const;

//private:
    /**
     * @symbol ?_removeBlock\@MultifaceBlock\@\@AEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI void _removeBlock(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, bool) const;

protected:

private:

};
