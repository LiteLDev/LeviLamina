/**
 * @file  ComposterBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "MinecraftEventing.hpp"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComposterBlock.
 *
 */
class ComposterBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There
public:

inline void emitBoneMeal(class Level& a1, class BlockSource& a2, class BlockPos const& a3) {
    return _emitBoneMeal(a1,a2,a3);
}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSTERBLOCK
public:
    class ComposterBlock& operator=(class ComposterBlock const &) = delete;
    ComposterBlock(class ComposterBlock const &) = delete;
    ComposterBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ComposterBlock();
    /**
     * @vftbl  9
     * @symbol  ?addAABBs\@ComposterBlock\@\@UEBAXAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @vftbl  11
     * @symbol  ?addCollisionShapes\@ComposterBlock\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol  ?canProvideSupport\@ComposterBlock\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
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
     * @vftbl  62
     * @symbol  ?canContainLiquid\@ComposterBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  74
     * @symbol  ?onMove\@ComposterBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
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
     * @vftbl  96
     * @symbol  ?breaksFallingBlocks\@ComposterBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
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
     * @vftbl  127
     * @symbol  ?getComparatorSignal\@ComposterBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  131
     * @symbol  __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  146
     * @symbol  ?getVariant\@ComposterBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @symbol  __unk_vfn_156
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  162
     * @symbol  ?onRemove\@ComposterBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
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
     * @vftbl  168
     * @symbol  ?onPlace\@ComposterBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  171
     * @symbol  ?tick\@ComposterBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl  177
     * @symbol  ?use\@ComposterBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  194
     * @symbol  __unk_vfn_194
     */
    virtual void __unk_vfn_194();
    /**
     * @vftbl  195
     * @symbol  __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @symbol  __unk_vfn_196
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  197
     * @symbol  __unk_vfn_197
     */
    virtual void __unk_vfn_197();
    /**
     * @symbol  ?getDescriptionId\@BlockLegacy\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOSTERBLOCK
    /**
     * @symbol  ?hasComparatorSignal\@ComposterBlock\@\@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
#endif
    /**
     * @symbol  ??0ComposterBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ComposterBlock(std::string const &, int);
    /**
     * @symbol  ?addItem\@ComposterBlock\@\@SA_NAEAVContainer\@\@HAEAVItemStack\@\@AEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool addItem(class Container &, int, class ItemStack &, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol  ?addItems\@ComposterBlock\@\@SAHAEBVItemStack\@\@HAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static int addItems(class ItemStack const &, int, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol  ?addItems\@ComposterBlock\@\@SA_NAEAVContainer\@\@HAEAVItemStack\@\@HAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool addItems(class Container &, int, class ItemStack &, int, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol  ?empty\@ComposterBlock\@\@SAXAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void empty(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol  ?extractItem\@ComposterBlock\@\@SA?AVItemStack\@\@AEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class ItemStack extractItem(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol  ?getComposterAt\@ComposterBlock\@\@SAPEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Block const * getComposterAt(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol  ?_emitBoneMeal\@ComposterBlock\@\@AEBAXAEAVLevel\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _emitBoneMeal(class Level &, class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?_notifyClientComposterUsed\@ComposterBlock\@\@AEBAXAEBVPlayer\@\@FW4POIBlockInteractionType\@MinecraftEventing\@\@\@Z
     */
    MCAPI void _notifyClientComposterUsed(class Player const &, short, enum class MinecraftEventing::POIBlockInteractionType) const;
    /**
     * @symbol  ?_getCompostableItems\@ComposterBlock\@\@CAAEBV?$vector\@U?$pair\@HC\@std\@\@V?$allocator\@U?$pair\@HC\@std\@\@\@2\@\@std\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static std::vector<struct std::pair<int, signed char>> const & _getCompostableItems(class Experiments const &);

private:
    /**
     * @symbol  ?COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION\@ComposterBlock\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    /**
     * @symbol  ?PARTICLE_OFFSET\@ComposterBlock\@\@0VVec3\@\@B
     */
    MCAPI static class Vec3 const PARTICLE_OFFSET;

};