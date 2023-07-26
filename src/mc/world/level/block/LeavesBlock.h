#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LeavesBlock : public ::BlockLegacy {

public:
    // prevent constructor by default
    LeavesBlock& operator=(LeavesBlock const&) = delete;
    LeavesBlock(LeavesBlock const&)            = delete;
    LeavesBlock()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22(); // NOLINT
    /**
     * @vftbl 25
     * @symbol ?canProvideSupport\@LeavesBlock\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
     */
    virtual bool canProvideSupport(class Block const&, unsigned char, enum class BlockSupportType) const; // NOLINT
    /**
     * @vftbl 27
     * @symbol ?canProvideMultifaceSupport\@LeavesBlock\@\@UEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool canProvideMultifaceSupport(class Block const&, unsigned char) const; // NOLINT
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
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56(); // NOLINT
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
     * @vftbl 64
     * @symbol ?canContainLiquid\@LeavesBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const; // NOLINT
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
     * @vftbl 98
     * @symbol ?breaksFallingBlocks\@LeavesBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const; // NOLINT
    /**
     * @vftbl 104
     * @symbol
     * ?spawnResources\@LeavesBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    virtual void
    spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&)
        const; // NOLINT
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107(); // NOLINT
    /**
     * @vftbl 108
     * @symbol ?getPlacementBlock\@LeavesBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
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
     * @vftbl 136
     * @symbol ?getColor\@LeavesBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 139
     * @symbol ?isSeasonTinted\@LeavesBlock\@\@UEBA_NAEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isSeasonTinted(class Block const&, class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 140
     * @symbol ?onGraphicsModeChanged\@LeavesBlock\@\@UEAAXAEBUBlockGraphicsModeChangeContext\@\@\@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&); // NOLINT
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153(); // NOLINT
    /**
     * @vftbl 159
     * @symbol ?onRemove\@LeavesBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
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
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167(); // NOLINT
    /**
     * @vftbl 169
     * @symbol ?randomTick\@LeavesBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
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
     * @vftbl 177
     * @symbol
     * ?getRenderLayer\@LeavesBlock\@\@UEBA?AW4BlockRenderLayer\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 182
     * @symbol ?getMapColor\@LeavesBlock\@\@UEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183(); // NOLINT
    /**
     * @vftbl 184
     * @symbol ?playerDestroy\@LeavesBlock\@\@UEBAXAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 186
     * @symbol ?getResourceCount\@LeavesBlock\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize&, class Block const&, int) const; // NOLINT
    /**
     * @vftbl 192
     * @symbol ?getExtraResourceItem\@LeavesBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getExtraResourceItem(class Block const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEAVESBLOCK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LeavesBlock(); // NOLINT
#endif
    /**
     * @symbol
     * ??0LeavesBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HV?$WeakPtr\@VBlockLegacy\@\@\@\@\@Z
     */
    MCAPI LeavesBlock(std::string const&, int, class WeakPtr<class BlockLegacy>); // NOLINT
    /**
     * @symbol ?getSeasonsColor\@LeavesBlock\@\@QEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI class mce::Color getSeasonsColor(class BlockSource&, class BlockPos const&, int, int) const; // NOLINT
    /**
     * @symbol ?runDecay\@LeavesBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI static void runDecay(class BlockSource&, class BlockPos const&, int); // NOLINT

    // protected:
    /**
     * @symbol ?_getSapling\@LeavesBlock\@\@IEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const& _getSapling() const; // NOLINT

protected:
};
