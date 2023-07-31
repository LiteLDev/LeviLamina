#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ComposterBlock : public ::BlockLegacy {

public:
    // prevent constructor by default
    ComposterBlock& operator=(ComposterBlock const&) = delete;
    ComposterBlock(ComposterBlock const&)            = delete;
    ComposterBlock()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 5
     * @symbol ?clip\@ComposterBlock\@\@UEBA?AVHitResult\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@AEBVVec3\@\@2_N\@Z
     */
    virtual class HitResult
    clip(class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, bool) const;
    /**
     * @vftbl 7
     * @symbol
     * ?addCollisionShapes\@ComposterBlock\@\@UEBA_NAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual bool
    addCollisionShapes(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&, class optional_ref<class GetCollisionShapeInterface const>)
        const;
    /**
     * @vftbl 9
     * @symbol
     * ?addAABBs\@ComposterBlock\@\@UEBAXAEBVBlock\@\@AEBVBlockSource\@\@AEBVBlockPos\@\@PEBVAABB\@\@AEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void
    addAABBs(class Block const&, class BlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 25
     * @symbol ?canProvideSupport\@ComposterBlock\@\@UEBA_NAEBVBlock\@\@EW4BlockSupportType\@\@\@Z
     */
    virtual bool canProvideSupport(class Block const&, unsigned char, enum class BlockSupportType) const;
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
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
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
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
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
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl 64
     * @symbol ?canContainLiquid\@ComposterBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 76
     * @symbol ?onMove\@ComposterBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void onMove(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 98
     * @symbol ?breaksFallingBlocks\@ComposterBlock\@\@UEBA_NAEBVBlock\@\@VBaseGameVersion\@\@\@Z
     */
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
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
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 126
     * @symbol ?getComparatorSignal\@ComposterBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, unsigned char) const;
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128();
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl 143
     * @symbol ?getVariant\@ComposterBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const&) const;
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153();
    /**
     * @vftbl 159
     * @symbol ?onRemove\@ComposterBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol ?onPlace\@ComposterBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol ?tick\@ComposterBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 173
     * @symbol ?use\@ComposterBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player&, class BlockPos const&, unsigned char) const;
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOSTERBLOCK
    /**
     * @symbol ?hasComparatorSignal\@ComposterBlock\@\@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
#endif
    /**
     * @symbol
     * ??0ComposterBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ComposterBlock(std::string const&, int);
    /**
     * @symbol
     * ?addItem\@ComposterBlock\@\@SA_NAEAVContainer\@\@HAEAVItemStack\@\@AEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool
    addItem(class Container&, int, class ItemStack&, class BlockSource&, class Block const&, class BlockPos const&);
    /**
     * @symbol ?addItems\@ComposterBlock\@\@SAHAEBVItemStack\@\@HAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static int
    addItems(class ItemStack const&, int, class BlockSource&, class Block const&, class BlockPos const&);
    /**
     * @symbol
     * ?addItems\@ComposterBlock\@\@SA_NAEAVContainer\@\@HAEAVItemStack\@\@HAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool
    addItems(class Container&, int, class ItemStack&, int, class BlockSource&, class Block const&, class BlockPos const&);
    /**
     * @symbol ?empty\@ComposterBlock\@\@SAXAEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void empty(class BlockSource&, class Block const&, class BlockPos const&);
    /**
     * @symbol ?extractItem\@ComposterBlock\@\@SA?AVItemStack\@\@AEAVBlockSource\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class ItemStack extractItem(class BlockSource&, class Block const&, class BlockPos const&);
    /**
     * @symbol ?getComposterAt\@ComposterBlock\@\@SAPEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class Block const* getComposterAt(class BlockSource&, class BlockPos const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_emitBoneMeal\@ComposterBlock\@\@AEBAXAEAVLevel\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _emitBoneMeal(class Level&, class BlockSource&, class BlockPos const&) const;
    /**
     * @symbol
     * ?_notifyClientComposterUsed\@ComposterBlock\@\@AEBAXAEBVPlayer\@\@FW4POIBlockInteractionType\@MinecraftEventing\@\@\@Z
     */
    MCAPI void
    _notifyClientComposterUsed(class Player const&, short, enum class MinecraftEventing::POIBlockInteractionType) const;
    /**
     * @symbol
     * ?_getCompostableItems\@ComposterBlock\@\@CAAEBV?$unordered_map\@_KCU?$hash\@_K\@std\@\@U?$equal_to\@_K\@2\@V?$allocator\@U?$pair\@$$CB_KC\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static std::unordered_map<uint64_t, signed char> const& _getCompostableItems();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION\@ComposterBlock\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    /**
     * @symbol ?PARTICLE_OFFSET\@ComposterBlock\@\@0VVec3\@\@B
     */
    MCAPI static class Vec3 const PARTICLE_OFFSET;
    // NOLINTEND
};
