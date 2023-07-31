#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class SculkShriekerBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    SculkShriekerBlockActor& operator=(SculkShriekerBlockActor const&) = delete;
    SculkShriekerBlockActor(SculkShriekerBlockActor const&)            = delete;
    SculkShriekerBlockActor()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@SculkShriekerBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 2
     * @symbol ?save\@SculkShriekerBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@SculkShriekerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol ?onRemoved\@SculkShriekerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource&);
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
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
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @symbol ??0SculkShriekerBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SculkShriekerBlockActor(class BlockPos const&);
    /**
     * @symbol ?tryGet\@SculkShriekerBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static class SculkShriekerBlockActor* tryGet(class BlockSource&, class BlockPos);
    /**
     * @symbol ?tryGetPlayerInHierarchy\@SculkShriekerBlockActor\@\@SAPEAVPlayer\@\@PEAVActor\@\@\@Z
     */
    MCAPI static class Player* tryGetPlayerInHierarchy(class Actor*);
    /**
     * @symbol ?tryRespond\@SculkShriekerBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void tryRespond(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ?tryShriek\@SculkShriekerBlockActor\@\@QEAA_NAEAVBlockSource\@\@VBlockPos\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool tryShriek(class BlockSource&, class BlockPos, class Player&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_canRespond\@SculkShriekerBlockActor\@\@CA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool _canRespond(class BlockSource const&, class BlockPos const&);
    // NOLINTEND
};
