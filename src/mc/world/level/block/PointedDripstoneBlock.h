#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/actor/item/FallingBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class PointedDripstoneBlock : public ::FallingBlock {

public:
    // prevent constructor by default
    PointedDripstoneBlock& operator=(PointedDripstoneBlock const&) = delete;
    PointedDripstoneBlock(PointedDripstoneBlock const&)            = delete;
    PointedDripstoneBlock()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@PointedDripstoneBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool)
        const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getVisualShape\@PointedDripstoneBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?randomlyModifyPosition\@PointedDripstoneBlock\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?onProjectileHit\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVActor\@\@\@Z
     */
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const; // NOLINT
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
     * @vftbl 94
     * @symbol ?mayPlace\@PointedDripstoneBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107(); // NOLINT
    /**
     * @vftbl 108
     * @symbol
     * ?getPlacementBlock\@PointedDripstoneBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
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
     * @vftbl 143
     * @symbol ?getVariant\@PointedDripstoneBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const&) const; // NOLINT
    /**
     * @vftbl 148
     * @symbol ?animateTick\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 149
     * @symbol ?init\@PointedDripstoneBlock\@\@UEAAAEAVBlockLegacy\@\@XZ
     */
    virtual class BlockLegacy& init(); // NOLINT
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
     * @vftbl 166
     * @symbol ?onFallOn\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@M\@Z
     */
    virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const; // NOLINT
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?tick\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 169
     * @symbol ?randomTick\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
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
     * @vftbl 175
     * @symbol ?canSurvive\@PointedDripstoneBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183(); // NOLINT
    /**
     * @vftbl 192
     * @symbol ?getDustColor\@PointedDripstoneBlock\@\@UEBA?AVColor\@mce\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getDustColor(class Block const&) const; // NOLINT
    /**
     * @vftbl 193
     * @symbol
     * ?getDustParticleName\@PointedDripstoneBlock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string getDustParticleName(class Block const&) const; // NOLINT
    /**
     * @vftbl 194
     * @symbol __unk_vfn_194
     */
    virtual void __unk_vfn_194(); // NOLINT
    /**
     * @vftbl 195
     * @symbol ?onLand\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onLand(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 197
     * @symbol ?startFalling\@PointedDripstoneBlock\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@_N\@Z
     */
    virtual void startFalling(class BlockSource&, class BlockPos const&, class Block const&, bool) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POINTEDDRIPSTONEBLOCK
    /**
     * @symbol ?falling\@PointedDripstoneBlock\@\@UEBA_NXZ
     */
    MCVAPI bool falling() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0PointedDripstoneBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI PointedDripstoneBlock(std::string const&, int); // NOLINT
    /**
     * @symbol ?addDripParticle\@PointedDripstoneBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@W4ParticleType\@\@\@Z
     */
    MCAPI static void addDripParticle(class BlockSource&, class BlockPos const&, enum class ParticleType); // NOLINT
    /**
     * @symbol ?canGrow\@PointedDripstoneBlock\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI static bool canGrow(class BlockSource&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?fillCauldron\@PointedDripstoneBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void fillCauldron(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?findStalactiteTipAboveCauldron\@PointedDripstoneBlock\@\@SA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    findStalactiteTipAboveCauldron(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?getCauldronFillLiquidType\@PointedDripstoneBlock\@\@SA?AV?$optional\@W4MaterialType\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<enum class MaterialType>
    getCauldronFillLiquidType(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?getStalactiteTipBelowFillSource\@PointedDripstoneBlock\@\@SA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    getStalactiteTipBelowFillSource(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?growStalactite\@PointedDripstoneBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void growStalactite(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?growStalagmite\@PointedDripstoneBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void growStalagmite(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?isPointedDripstoneWithDirection\@PointedDripstoneBlock\@\@SA_NAEBVBlock\@\@E\@Z
     */
    MCAPI static bool isPointedDripstoneWithDirection(class Block const&, unsigned char); // NOLINT

    // private:
    /**
     * @symbol ?_updateBlockThickness\@PointedDripstoneBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _updateBlockThickness(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol
     * ?_calculateDripstoneThickness\@PointedDripstoneBlock\@\@CA?AW4DripstoneThickness\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@E_N\@Z
     */
    MCAPI static enum class DripstoneThickness
    _calculateDripstoneThickness(class BlockSource&, class BlockPos const&, unsigned char, bool); // NOLINT
    /**
     * @symbol ?_canDrip\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _canDrip(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_canFillCauldron\@PointedDripstoneBlock\@\@CA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool _canFillCauldron(class Block const&); // NOLINT
    /**
     * @symbol ?_canTipGrow\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _canTipGrow(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?_createDripstone\@PointedDripstoneBlock\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@EW4DripstoneThickness\@\@\@Z
     */
    MCAPI static void
    _createDripstone(class BlockSource&, class BlockPos const&, unsigned char, enum class DripstoneThickness); // NOLINT
    /**
     * @symbol ?_createMergedTips\@PointedDripstoneBlock\@\@CAXAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void _createMergedTips(class BlockSource&, class Block const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?_findBlockVertically\@PointedDripstoneBlock\@\@CA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@EV?$function\@$$A6A_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z\@3\@2H\@Z
     */
    MCAPI static class std::optional<class BlockPos> _findBlockVertically(
        class BlockSource&,
        class BlockPos const&,
        unsigned char,
        class std::function<bool(class BlockSource&, class BlockPos const&)>,
        class std::function<bool(class BlockSource&, class BlockPos const&)>,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?_findRootBlock\@PointedDripstoneBlock\@\@CA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    _findRootBlock(class BlockSource&, class BlockPos const&, int); // NOLINT
    /**
     * @symbol
     * ?_findTip\@PointedDripstoneBlock\@\@CA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@EH_N\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    _findTip(class BlockSource&, class BlockPos const&, unsigned char, int, bool); // NOLINT
    /**
     * @symbol
     * ?_getBlockAboveStalactiteRoot\@PointedDripstoneBlock\@\@CA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    _getBlockAboveStalactiteRoot(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_getRandomBlockPositionOffset\@PointedDripstoneBlock\@\@CA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const&); // NOLINT
    /**
     * @symbol ?_grow\@PointedDripstoneBlock\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI static void _grow(class BlockSource&, class BlockPos const&, unsigned char); // NOLINT
    /**
     * @symbol ?_growStalagmiteBelow\@PointedDripstoneBlock\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void _growStalagmiteBelow(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_isStalactiteBase\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _isStalactiteBase(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_isTip\@PointedDripstoneBlock\@\@CA_NAEBVBlock\@\@E_N\@Z
     */
    MCAPI static bool _isTip(class Block const&, unsigned char, bool); // NOLINT
    /**
     * @symbol ?_isValidPointedDripstonePlacement\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI static bool _isValidPointedDripstonePlacement(class BlockSource&, class BlockPos const&, bool); // NOLINT
    /**
     * @symbol ?_mayPlaceHanging\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _mayPlaceHanging(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_mayPlaceStanding\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _mayPlaceStanding(class BlockSource&, class BlockPos const&); // NOLINT

private:
};
