#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LeverBlock : public ::BlockLegacy {

public:
    // prevent constructor by default
    LeverBlock& operator=(LeverBlock const&) = delete;
    LeverBlock(LeverBlock const&)            = delete;
    LeverBlock()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@LeverBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool)
        const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getVisualShape\@LeverBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const; // NOLINT
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
     * @vftbl 53
     * @symbol ?isSignalSource\@LeverBlock\@\@UEBA_NXZ
     */
    virtual bool isSignalSource() const; // NOLINT
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56(); // NOLINT
    /**
     * @vftbl 60
     * @symbol ?onFillBlock\@LeverBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onFillBlock(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
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
     * @vftbl 66
     * @symbol ?shouldConnectToRedstone\@LeverBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const; // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 81
     * @symbol ?setupRedstoneComponent\@LeverBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84(); // NOLINT
    /**
     * @vftbl 93
     * @symbol ?mayPlace\@LeverBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 94
     * @symbol ?mayPlace\@LeverBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@LeverBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107(); // NOLINT
    /**
     * @vftbl 108
     * @symbol ?getPlacementBlock\@LeverBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, unsigned char, class Vec3 const&, int) const; // NOLINT
    /**
     * @vftbl 110
     * @symbol ?isAttachedTo\@LeverBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool isAttachedTo(class BlockSource&, class BlockPos const&, class BlockPos&) const; // NOLINT
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
     * @vftbl 144
     * @symbol ?canSpawnOn\@LeverBlock\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool canSpawnOn(class Actor*) const; // NOLINT
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153(); // NOLINT
    /**
     * @vftbl 159
     * @symbol ?onRemove\@LeverBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onRemove(class BlockSource&, class BlockPos const&) const; // NOLINT
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
     * @vftbl 165
     * @symbol ?onPlace\@LeverBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?tick\@LeverBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171(); // NOLINT
    /**
     * @vftbl 173
     * @symbol ?use\@LeverBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174(); // NOLINT
    /**
     * @vftbl 175
     * @symbol ?canSurvive\@LeverBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183(); // NOLINT
    /**
     * @vftbl 192
     * @symbol ?updateShape\@LeverBlock\@\@UEAAXPEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateShape(class BlockSource*, class BlockPos const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVERBLOCK
    /**
     * @symbol ?isInteractiveBlock\@LeverBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const; // NOLINT
    /**
     * @symbol ?isLeverBlock\@LeverBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isLeverBlock() const; // NOLINT
#endif
    /**
     * @symbol ??0LeverBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI LeverBlock(std::string const&, int); // NOLINT
    /**
     * @symbol ?toggle\@LeverBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI void toggle(class BlockSource&, class BlockPos const&, class Player*) const; // NOLINT
    /**
     * @symbol ?getLeverFacing\@LeverBlock\@\@SA?AW4LeverDirection\@\@H\@Z
     */
    MCAPI static enum class LeverDirection getLeverFacing(int); // NOLINT

    // private:
    /**
     * @symbol ?_getShape\@LeverBlock\@\@AEBAXAEBVBlock\@\@AEAVAABB\@\@\@Z
     */
    MCAPI void _getShape(class Block const&, class AABB&) const; // NOLINT

private:
};
