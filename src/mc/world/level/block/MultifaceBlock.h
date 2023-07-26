#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MultifaceBlock : public ::BlockLegacy {

public:
    // prevent constructor by default
    MultifaceBlock& operator=(MultifaceBlock const&) = delete;
    MultifaceBlock(MultifaceBlock const&)            = delete;
    MultifaceBlock()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?clip\@MultifaceBlock\@\@UEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    virtual class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@MultifaceBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool)
        const; // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?getVisualShapeInWorld\@MultifaceBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAV2\@\@Z
     */
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&)
        const; // NOLINT
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 37
     * @symbol ?isWaterBlocking\@MultifaceBlock\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const; // NOLINT
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40(); // NOLINT
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41(); // NOLINT
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42(); // NOLINT
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43(); // NOLINT
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44(); // NOLINT
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46(); // NOLINT
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47(); // NOLINT
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48(); // NOLINT
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49(); // NOLINT
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50(); // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56(); // NOLINT
    /**
     * @vftbl 59
     * @symbol ?sanitizeFillBlock\@MultifaceBlock\@\@UEBAAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const&
    sanitizeFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84(); // NOLINT
    /**
     * @vftbl 93
     * @symbol ?mayPlace\@MultifaceBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@MultifaceBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107(); // NOLINT
    /**
     * @vftbl 108
     * @symbol ?getPlacementBlock\@MultifaceBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, unsigned char, class Vec3 const&, int) const; // NOLINT
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123(); // NOLINT
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124(); // NOLINT
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125(); // NOLINT
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128(); // NOLINT
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131(); // NOLINT
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153(); // NOLINT
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162(); // NOLINT
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163(); // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?tick\@MultifaceBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171(); // NOLINT
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174(); // NOLINT
    /**
     * @vftbl 175
     * @symbol ?canSurvive\@MultifaceBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183(); // NOLINT
    /**
     * @vftbl 192
     * @symbol ?getMultifaceBlock\@GlowLichenBlock\@\@UEBAAEBVBlock\@\@XZ
     */
    virtual class Block const& getMultifaceBlock() const = 0; // NOLINT
    /**
     * @vftbl 193
     * @symbol ?getMultifaceSpreader\@GlowLichenBlock\@\@UEBAAEBVMultifaceSpreader\@\@XZ
     */
    virtual class MultifaceSpreader const& getMultifaceSpreader() const = 0; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MULTIFACEBLOCK
    /**
     * @symbol ?isMultifaceBlock\@MultifaceBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isMultifaceBlock() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0MultifaceBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@\@Z
     */
    MCAPI MultifaceBlock(std::string const&, int, class Material const&); // NOLINT
    /**
     * @symbol
     * ?removeFace\@MultifaceBlock\@\@QEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@E_N\@Z
     */
    MCAPI void removeFace(
        class IBlockWorldGenAPI&,
        class BlockSource*,
        class Block const&,
        class BlockPos const&,
        unsigned char,
        bool
    ) const; // NOLINT
    /**
     * @symbol ?convertOldMultifaceToNewMultifaceValue\@MultifaceBlock\@\@SAHH\@Z
     */
    MCAPI static int convertOldMultifaceToNewMultifaceValue(int); // NOLINT
    /**
     * @symbol ?getBlockForPlacement\@MultifaceBlock\@\@SAAEBVBlock\@\@AEBV2\@0AEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI static class Block const& getBlockForPlacement(
        class Block const&,
        class Block const&,
        class BlockSource&,
        class BlockPos const&,
        unsigned char
    ); // NOLINT
    /**
     * @symbol
     * ?getBlockForPlacementWorldGen\@MultifaceBlock\@\@SAAEBVBlock\@\@AEBV2\@0AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI static class Block const& getBlockForPlacementWorldGen(
        class Block const&,
        class Block const&,
        class IBlockWorldGenAPI&,
        class BlockPos const&,
        unsigned char
    ); // NOLINT
    /**
     * @symbol ?getMultifaceValueFromFace\@MultifaceBlock\@\@SAHE\@Z
     */
    MCAPI static int getMultifaceValueFromFace(unsigned char); // NOLINT
    /**
     * @symbol ?hasFace\@MultifaceBlock\@\@SA_NAEBVBlock\@\@E\@Z
     */
    MCAPI static bool hasFace(class Block const&, unsigned char); // NOLINT
    /**
     * @symbol ?MULTIFACE_ALL\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_ALL; // NOLINT
    /**
     * @symbol ?MULTIFACE_DOWN\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_DOWN; // NOLINT
    /**
     * @symbol ?MULTIFACE_EAST\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_EAST; // NOLINT
    /**
     * @symbol ?MULTIFACE_NORTH\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_NORTH; // NOLINT
    /**
     * @symbol ?MULTIFACE_SIDES\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_SIDES; // NOLINT
    /**
     * @symbol ?MULTIFACE_SOUTH\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_SOUTH; // NOLINT
    /**
     * @symbol ?MULTIFACE_UP\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_UP; // NOLINT
    /**
     * @symbol ?MULTIFACE_WEST\@MultifaceBlock\@\@2HB
     */
    MCAPI static int const MULTIFACE_WEST; // NOLINT

    // protected:
    /**
     * @symbol ?_canSpread\@MultifaceBlock\@\@IEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool
    _canSpread(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @symbol ?_getNumSides\@MultifaceBlock\@\@IEBAHAEBVBlock\@\@\@Z
     */
    MCAPI int _getNumSides(class Block const&) const; // NOLINT

    // private:
    /**
     * @symbol ?_removeBlock\@MultifaceBlock\@\@AEBAXAEAVIBlockWorldGenAPI\@\@PEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI void _removeBlock(class IBlockWorldGenAPI&, class BlockSource*, class BlockPos const&, bool) const; // NOLINT

protected:
private:
};
