/**
 * @file  SkullBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SkullBlockActor.
 *
 */
class SkullBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There
public:
enum class SkullType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKULLBLOCKACTOR
public:
    class SkullBlockActor& operator=(class SkullBlockActor const &) = delete;
    SkullBlockActor(class SkullBlockActor const &) = delete;
    SkullBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SkullBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@SkullBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@SkullBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol  ?tick\@SkullBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol  ?onChanged\@SkullBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
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
     * @symbol  ?_getUpdatePacket\@SkullBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@SkullBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ??0SkullBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SkullBlockActor(class BlockPos const &);
    /**
     * @symbol  ?getSkullType\@SkullBlockActor\@\@QEBA?AW4SkullType\@1\@XZ
     */
    MCAPI enum class SkullBlockActor::SkullType getSkullType() const;
    /**
     * @symbol  ?setRotation\@SkullBlockActor\@\@QEAAXM\@Z
     */
    MCAPI void setRotation(float);
    /**
     * @symbol  ?setSkullType\@SkullBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setSkullType(int);
    /**
     * @symbol  ?getSkullType\@SkullBlockActor\@\@SA?AV?$optional\@W4SkullType\@SkullBlockActor\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<enum class SkullBlockActor::SkullType> getSkullType(class BlockSource &, class BlockPos const &);

};