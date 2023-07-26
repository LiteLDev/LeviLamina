#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class DecoratedPotBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    DecoratedPotBlockActor& operator=(DecoratedPotBlockActor const&) = delete;
    DecoratedPotBlockActor(DecoratedPotBlockActor const&)            = delete;
    DecoratedPotBlockActor()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@DecoratedPotBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@DecoratedPotBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
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
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
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
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@DecoratedPotBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@DecoratedPotBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ??0DecoratedPotBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI DecoratedPotBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?getSherdNames\@DecoratedPotBlockActor\@\@QEBAAEBV?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$03\@std\@\@XZ
     */
    MCAPI class std::array<std::string, 4> const& getSherdNames() const; // NOLINT
    /**
     * @symbol
     * ?saveSherdsToTag\@DecoratedPotBlockActor\@\@SAXAEAVCompoundTag\@\@AEBV?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$03\@std\@\@\@Z
     */
    MCAPI static void saveSherdsToTag(class CompoundTag&, class std::array<std::string, 4> const&); // NOLINT
    /**
     * @symbol ?tryGet\@DecoratedPotBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class DecoratedPotBlockActor* tryGet(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?tryGetSherdsFromTag\@DecoratedPotBlockActor\@\@SA?AV?$optional\@V?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$03\@std\@\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class std::optional<class std::array<std::string, 4>>
    tryGetSherdsFromTag(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?DEFAULT_SHERD_LIST\@DecoratedPotBlockActor\@\@2V?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$03\@std\@\@B
     */
    MCAPI static class std::array<std::string, 4> const DEFAULT_SHERD_LIST; // NOLINT

    // protected:
    /**
     * @symbol ?_resetSherdItemNames\@DecoratedPotBlockActor\@\@IEAAXXZ
     */
    MCAPI void _resetSherdItemNames(); // NOLINT

protected:
};
