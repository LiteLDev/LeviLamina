/**
 * @file  LeashFenceKnotActor.hpp
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
 * @brief MC class LeashFenceKnotActor.
 *
 */
class LeashFenceKnotActor : public HangingActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEASHFENCEKNOTACTOR
public:
    class LeashFenceKnotActor& operator=(class LeashFenceKnotActor const &) = delete;
    LeashFenceKnotActor(class LeashFenceKnotActor const &) = delete;
    LeashFenceKnotActor() = delete;
#endif

public:
    /**
     * @hash   -101150860
     * @vftbl  8
     * @symbol ?reloadHardcoded@LeashFenceKnotActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~LeashFenceKnotActor();
    /**
     * @hash   1393143090
     * @vftbl  17
     * @symbol ?remove@LeashFenceKnotActor@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -2147442282
     * @vftbl  43
     * @symbol ?teleportTo@LeashFenceKnotActor@@UEAAXAEBVVec3@@_NHH1@Z
     */
    virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
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
     * @hash   -584556035
     * @vftbl  79
     * @symbol ?getShadowRadius@LeashFenceKnotActor@@UEBAMXZ
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
     * @hash   -335858427
     * @vftbl  94
     * @symbol ?isPickable@LeashFenceKnotActor@@UEAA_NXZ
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
     * @hash   -580826286
     * @vftbl  238
     * @symbol ?getInteraction@LeashFenceKnotActor@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
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
     * @hash   2135039390
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@LeashFenceKnotActor@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -21621697
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@LeashFenceKnotActor@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   1959323084
     * @vftbl  284
     * @symbol ?_onSizeUpdated@LeashFenceKnotActor@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -970983050
     * @vftbl  286
     * @symbol ?setDir@LeashFenceKnotActor@@UEAAXH@Z
     */
    virtual void setDir(int);
    /**
     * @hash   -764823038
     * @vftbl  287
     * @symbol ?getWidth@LeashFenceKnotActor@@UEBAHXZ
     */
    virtual int getWidth() const;
    /**
     * @hash   -1245091409
     * @vftbl  288
     * @symbol ?getHeight@LeashFenceKnotActor@@UEBAHXZ
     */
    virtual int getHeight() const;
    /**
     * @hash   -851485744
     * @vftbl  289
     * @symbol ?dropItem@LeashFenceKnotActor@@UEAAXXZ
     */
    virtual void dropItem();
    /**
     * @hash   222044231
     * @vftbl  291
     * @symbol ?wouldSurvive@LeashFenceKnotActor@@UEAA_NAEAVBlockSource@@@Z
     */
    virtual bool wouldSurvive(class BlockSource &);
    /**
     * @hash   405384421
     * @symbol ??0LeashFenceKnotActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI LeashFenceKnotActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   113991456
     * @symbol ?numberofAnimalsAttached@LeashFenceKnotActor@@QEAAHXZ
     */
    MCAPI int numberofAnimalsAttached();

};