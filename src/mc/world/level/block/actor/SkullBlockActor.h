#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class SkullBlockActor : public ::BlockActor {
public:
    // SkullBlockActor inner types define
    enum class SkullType {};

public:
    // prevent constructor by default
    SkullBlockActor& operator=(SkullBlockActor const&) = delete;
    SkullBlockActor(SkullBlockActor const&)            = delete;
    SkullBlockActor()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@SkullBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 2
     * @symbol ?save\@SkullBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@SkullBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&);
    /**
     * @vftbl 8
     * @symbol ?onChanged\@SkullBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&);
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
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@SkullBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@SkullBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ??0SkullBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SkullBlockActor(class BlockPos const&);
    /**
     * @symbol ?getSkullType\@SkullBlockActor\@\@QEBA?AW4SkullType\@1\@XZ
     */
    MCAPI enum class SkullBlockActor::SkullType getSkullType() const;
    /**
     * @symbol ?setRotation\@SkullBlockActor\@\@QEAAXM\@Z
     */
    MCAPI void setRotation(float);
    /**
     * @symbol ?setSkullType\@SkullBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setSkullType(int);
    /**
     * @symbol
     * ?getSkullType\@SkullBlockActor\@\@SA?AV?$optional\@W4SkullType\@SkullBlockActor\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static std::optional<enum class SkullBlockActor::SkullType>
    getSkullType(class BlockSource&, class BlockPos const&);
    // NOLINTEND
};
