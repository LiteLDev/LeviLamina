/**
 * @file  DecoratedPotBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class DecoratedPotBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DECORATEDPOTBLOCKACTOR
public:
    class DecoratedPotBlockActor& operator=(class DecoratedPotBlockActor const &) = delete;
    DecoratedPotBlockActor(class DecoratedPotBlockActor const &) = delete;
    DecoratedPotBlockActor() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@DecoratedPotBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 2
     * @symbol ?save\@DecoratedPotBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
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
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol ?_getUpdatePacket\@DecoratedPotBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl 40
     * @symbol ?_onUpdatePacket\@DecoratedPotBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0DecoratedPotBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI DecoratedPotBlockActor(class BlockPos const &);
    /**
     * @symbol ?getSherdNames\@DecoratedPotBlockActor\@\@QEBAAEBV?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$03\@std\@\@XZ
     */
    MCAPI class std::array<std::string, 4> const & getSherdNames() const;
    /**
     * @symbol ?DEFAULT_SHERD_LIST\@DecoratedPotBlockActor\@\@2V?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$03\@std\@\@B
     */
    MCAPI static class std::array<std::string, 4> const DEFAULT_SHERD_LIST;
    /**
     * @symbol ?saveSherdsToTag\@DecoratedPotBlockActor\@\@SAXAEAVCompoundTag\@\@AEBV?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$03\@std\@\@\@Z
     */
    MCAPI static void saveSherdsToTag(class CompoundTag &, class std::array<std::string, 4> const &);
    /**
     * @symbol ?tryGet\@DecoratedPotBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class DecoratedPotBlockActor * tryGet(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?tryGetSherdsFromTag\@DecoratedPotBlockActor\@\@SA?AV?$optional\@V?$array\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$03\@std\@\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class std::optional<class std::array<std::string, 4>> tryGetSherdsFromTag(class CompoundTag const &);

//protected:
    /**
     * @symbol ?_resetSherdItemNames\@DecoratedPotBlockActor\@\@IEAAXXZ
     */
    MCAPI void _resetSherdItemNames();

protected:

};
