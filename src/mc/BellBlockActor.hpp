/**
 * @file  BellBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Direction.hpp"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BellBlockActor.
 *
 */
class BellBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BELLBLOCKACTOR
public:
    class BellBlockActor& operator=(class BellBlockActor const &) = delete;
    BellBlockActor(class BellBlockActor const &) = delete;
    BellBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BellBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@BellBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@BellBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol  ?tick\@BellBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
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
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@BellBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@BellBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ??0BellBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BellBlockActor(class BlockPos const &);
    /**
     * @symbol  ?ejectItem\@BellBlockActor\@\@QEBAXAEBVBlockPos\@\@AEAVActor\@\@\@Z
     */
    MCAPI void ejectItem(class BlockPos const &, class Actor &) const;
    /**
     * @symbol  ?isRinging\@BellBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isRinging() const;
    /**
     * @symbol  ?ring\@BellBlockActor\@\@QEAA_NW4Type\@Direction\@\@AEAVBlockSource\@\@PEAVActor\@\@_N\@Z
     */
    MCAPI bool ring(enum class Direction::Type, class BlockSource &, class Actor *, bool);

};