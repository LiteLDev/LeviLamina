/**
 * @file  MC/Painting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HangingActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Painting.
 *
 */
class Painting : public HangingActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAINTING
public:
    class Painting& operator=(class Painting const &) = delete;
    Painting(class Painting const &) = delete;
    Painting() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Painting();
    /**
     * @hash   64272311
     * @vftbl  17
     * @symbol ?remove@Painting@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @hash   -1199524659
     * @vftbl  18
     * @symbol ?setPos@Painting@@UEAAXAEBVVec3@@@Z
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   150766233
     * @vftbl  47
     * @symbol ?tryCreateAddActorPacket@Painting@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -1511129710
     * @vftbl  79
     * @symbol ?getShadowRadius@Painting@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   -175675366
     * @vftbl  94
     * @symbol ?isPickable@Painting@@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   499156636
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Painting@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1482911295
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Painting@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -1503748521
     * @vftbl  287
     * @symbol ?getWidth@Painting@@UEBAHXZ
     */
    virtual int getWidth() const;
    /**
     * @hash   -316002908
     * @vftbl  288
     * @symbol ?getHeight@Painting@@UEBAHXZ
     */
    virtual int getHeight() const;
    /**
     * @hash   -803551979
     * @vftbl  289
     * @symbol ?dropItem@Painting@@UEAAXXZ
     */
    virtual void dropItem();
    /**
     * @hash   -1554448532
     * @vftbl  290
     * @symbol ?placeHangingEntity@Painting@@UEAA_NAEAVBlockSource@@H@Z
     */
    virtual bool placeHangingEntity(class BlockSource &, int);
    /**
     * @hash   -74228720
     * @symbol ??0Painting@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Painting(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -701000904
     * @symbol ?getCurrentMotive@Painting@@QEBAAEBVMotive@@XZ
     */
    MCAPI class Motive const & getCurrentMotive() const;

};