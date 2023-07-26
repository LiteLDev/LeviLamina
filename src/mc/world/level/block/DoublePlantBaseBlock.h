#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DoublePlantBaseBlock : public ::BushBlock {

public:
    // prevent constructor by default
    DoublePlantBaseBlock& operator=(DoublePlantBaseBlock const&) = delete;
    DoublePlantBaseBlock(DoublePlantBaseBlock const&)            = delete;
    DoublePlantBaseBlock()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getNextBlockPermutation\@DoublePlantBaseBlock\@\@UEBAPEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const* getNextBlockPermutation(class Block const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@DoublePlantBaseBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool)
        const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getVisualShape\@DoublePlantBaseBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?randomlyModifyPosition\@DoublePlantBaseBlock\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@AEAH\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&, int&) const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?randomlyModifyPosition\@DoublePlantBaseBlock\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const; // NOLINT
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
     * @symbol ?canContainLiquid\@DoublePlantBaseBlock\@\@UEBA_NXZ
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
     * @vftbl 88
     * @symbol
     * ?onFertilized\@DoublePlantBaseBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@W4FertilizerType\@\@\@Z
     */
    virtual bool
    onFertilized(class BlockSource&, class BlockPos const&, class Actor*, enum class FertilizerType) const; // NOLINT
    /**
     * @vftbl 90
     * @symbol ?canBeFertilized\@DoublePlantBaseBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 93
     * @symbol ?mayPlace\@DoublePlantBaseBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 94
     * @symbol ?mayPlace\@DoublePlantBaseBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 102
     * @symbol ?getSecondPart\@DoublePlantBaseBlock\@\@UEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@AEAV3\@\@Z
     */
    virtual bool getSecondPart(class BlockSource const&, class BlockPos const&, class BlockPos&) const; // NOLINT
    /**
     * @vftbl 103
     * @symbol ?playerWillDestroy\@DoublePlantBaseBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 104
     * @symbol
     * ?spawnResources\@DoublePlantBaseBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
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
     * @vftbl 165
     * @symbol ?onPlace\@DoublePlantBaseBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?tick\@DoublePlantBaseBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
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
     * @symbol ?canSurvive\@DoublePlantBaseBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183(); // NOLINT
    /**
     * @vftbl 186
     * @symbol ?getResourceCount\@DoublePlantBaseBlock\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize&, class Block const&, int) const; // NOLINT
    /**
     * @vftbl 192
     * @symbol ?checkAlive\@DoublePlantBaseBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkAlive(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 194
     * @symbol ?_keepRelevantStateForDropping\@DoublePlantBaseBlock\@\@MEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const& _keepRelevantStateForDropping(class Block const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUBLEPLANTBASEBLOCK
    /**
     * @symbol ?canBeSilkTouched\@DoublePlantBaseBlock\@\@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0DoublePlantBaseBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI DoublePlantBaseBlock(std::string const&, int); // NOLINT
};
