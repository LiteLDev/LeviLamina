/**
 * @file  PointedDripstoneBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PointedDripstoneBlock.
 *
 */
class PointedDripstoneBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POINTEDDRIPSTONEBLOCK
public:
    class PointedDripstoneBlock& operator=(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock(class PointedDripstoneBlock const &) = delete;
    PointedDripstoneBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PointedDripstoneBlock();
    /**
     * @vftbl  8
     * @symbol  ?randomlyModifyPosition\@PointedDripstoneBlock\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @vftbl  10
     * @symbol  ?getAABB\@PointedDripstoneBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  15
     * @symbol  ?onProjectileHit\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVActor\@\@\@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol  __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol  __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol  __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol  __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol  __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol  __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol  __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol  __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol  __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol  __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol  __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol  __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol  __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol  __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @symbol  __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  92
     * @symbol  ?mayPlace\@PointedDripstoneBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  99
     * @symbol  ?neighborChanged\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol  ?getPlacementBlock\@PointedDripstoneBlock\@\@UEBAAEBVBlock\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @symbol  __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @symbol  __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @symbol  __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @symbol  __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  143
     * @symbol  ?getVisualShape\@PointedDripstoneBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  146
     * @symbol  ?getVariant\@PointedDripstoneBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  151
     * @symbol  ?animateTick\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  152
     * @symbol  ?init\@PointedDripstoneBlock\@\@UEAAAEAVBlockLegacy\@\@XZ
     */
    virtual class BlockLegacy & init();
    /**
     * @vftbl  156
     * @symbol  __unk_vfn_156
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol  __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl  166
     * @symbol  __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @symbol  __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  169
     * @symbol  ?onFallOn\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVActor\@\@M\@Z
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  171
     * @symbol  ?tick\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  172
     * @symbol  ?randomTick\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl  178
     * @symbol  ?canSurvive\@PointedDripstoneBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
    /**
     * @vftbl  187
     * @symbol  ?getResourceItem\@PointedDripstoneBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  189
     * @symbol  ?getSilkTouchItemInstance\@PointedDripstoneBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  193
     * @symbol  ?getDustColor\@PointedDripstoneBlock\@\@UEBA?AVColor\@mce\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @vftbl  194
     * @symbol  ?getDustParticleName\@PointedDripstoneBlock\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @vftbl  195
     * @symbol  __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @symbol  ?onLand\@PointedDripstoneBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onLand(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  198
     * @symbol  ?startFalling\@PointedDripstoneBlock\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@_N\@Z
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POINTEDDRIPSTONEBLOCK
    /**
     * @symbol  ?falling\@PointedDripstoneBlock\@\@UEBA_NXZ
     */
    MCVAPI bool falling() const;
#endif
    /**
     * @symbol  ??0PointedDripstoneBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI PointedDripstoneBlock(std::string const &, int);
    /**
     * @symbol  ?addDripParticle\@PointedDripstoneBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@W4ParticleType\@\@\@Z
     */
    MCAPI static void addDripParticle(class BlockSource &, class BlockPos const &, enum class ParticleType);
    /**
     * @symbol  ?canGrow\@PointedDripstoneBlock\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI static bool canGrow(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol  ?fillCauldron\@PointedDripstoneBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void fillCauldron(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?findStalactiteTipAboveCauldron\@PointedDripstoneBlock\@\@SA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<class BlockPos> findStalactiteTipAboveCauldron(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?getCauldronFillLiquidType\@PointedDripstoneBlock\@\@SA?AV?$optional\@W4MaterialType\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<enum class MaterialType> getCauldronFillLiquidType(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?getStalactiteTipBelowFillSource\@PointedDripstoneBlock\@\@SA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<class BlockPos> getStalactiteTipBelowFillSource(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?growStalactite\@PointedDripstoneBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void growStalactite(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?growStalagmite\@PointedDripstoneBlock\@\@SAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void growStalagmite(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol  ?_updateBlockThickness\@PointedDripstoneBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _updateBlockThickness(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?_calculateDripstoneThickness\@PointedDripstoneBlock\@\@CA?AW4DripstoneThickness\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@E_N\@Z
     */
    MCAPI static enum class DripstoneThickness _calculateDripstoneThickness(class BlockSource &, class BlockPos const &, unsigned char, bool);
    /**
     * @symbol  ?_canDrip\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _canDrip(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?_canFillCauldron\@PointedDripstoneBlock\@\@CA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool _canFillCauldron(class Block const &);
    /**
     * @symbol  ?_canTipGrow\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _canTipGrow(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?_createDripstone\@PointedDripstoneBlock\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@EW4DripstoneThickness\@\@\@Z
     */
    MCAPI static void _createDripstone(class BlockSource &, class BlockPos const &, unsigned char, enum class DripstoneThickness);
    /**
     * @symbol  ?_findBlockVertically\@PointedDripstoneBlock\@\@CA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@EV?$function\@$$A6A_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z\@3\@2H\@Z
     */
    MCAPI static class std::optional<class BlockPos> _findBlockVertically(class BlockSource &, class BlockPos const &, unsigned char, class std::function<bool (class BlockSource &, class BlockPos const &)>, class std::function<bool (class BlockSource &, class BlockPos const &)>, int);
    /**
     * @symbol  ?_findRootBlock\@PointedDripstoneBlock\@\@CA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI static class std::optional<class BlockPos> _findRootBlock(class BlockSource &, class BlockPos const &, int);
    /**
     * @symbol  ?_findTip\@PointedDripstoneBlock\@\@CA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@EH_N\@Z
     */
    MCAPI static class std::optional<class BlockPos> _findTip(class BlockSource &, class BlockPos const &, unsigned char, int, bool);
    /**
     * @symbol  ?_getBlockAboveStalactiteRoot\@PointedDripstoneBlock\@\@CA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<class BlockPos> _getBlockAboveStalactiteRoot(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?_getRandomBlockPositionOffset\@PointedDripstoneBlock\@\@CA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const &);
    /**
     * @symbol  ?_grow\@PointedDripstoneBlock\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI static void _grow(class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @symbol  ?_growStalagmiteBelow\@PointedDripstoneBlock\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void _growStalagmiteBelow(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?_isStalactiteBase\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _isStalactiteBase(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?_isTip\@PointedDripstoneBlock\@\@CA_NAEBVBlock\@\@E_N\@Z
     */
    MCAPI static bool _isTip(class Block const &, unsigned char, bool);
    /**
     * @symbol  ?_isValidPointedDripstonePlacement\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI static bool _isValidPointedDripstonePlacement(class BlockSource &, class BlockPos const &, bool);
    /**
     * @symbol  ?_mayPlaceHanging\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _mayPlaceHanging(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?_mayPlaceStanding\@PointedDripstoneBlock\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _mayPlaceStanding(class BlockSource &, class BlockPos const &);

private:

};