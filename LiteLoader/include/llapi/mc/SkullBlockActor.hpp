/**
 * @file  MC/SkullBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~SkullBlockActor();
    /**
     * @hash   1325246908
     * @vftbl  1
     * @symbol ?load@SkullBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -2065598373
     * @vftbl  2
     * @symbol ?save@SkullBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   640078197
     * @vftbl  7
     * @symbol ?tick@SkullBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -658829427
     * @vftbl  8
     * @symbol ?onChanged@SkullBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   1741509230
     * @vftbl  35
     * @symbol ?_getUpdatePacket@SkullBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   72525476
     * @vftbl  36
     * @symbol ?_onUpdatePacket@SkullBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1732070408
     * @symbol ??0SkullBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI SkullBlockActor(class BlockPos const &);
    /**
     * @hash   -1525370924
     * @symbol ?getSkullType@SkullBlockActor@@QEBA?AW4SkullType@1@XZ
     */
    MCAPI enum SkullBlockActor::SkullType getSkullType() const;
    /**
     * @hash   2004055892
     * @symbol ?setRotation@SkullBlockActor@@QEAAXM@Z
     */
    MCAPI void setRotation(float);
    /**
     * @hash   -268748338
     * @symbol ?setSkullType@SkullBlockActor@@QEAAXH@Z
     */
    MCAPI void setSkullType(int);

};