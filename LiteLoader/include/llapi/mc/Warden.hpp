/**
 * @file  Warden.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class Warden.
 *
 */
class Warden : public Monster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDEN
public:
    class Warden& operator=(class Warden const &) = delete;
    Warden(class Warden const &) = delete;
    Warden() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Warden();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -595594187
     * @vftbl  42
     * @symbol ?canDisableShield@Warden@@UEAA_NXZ
     */
    virtual bool canDisableShield();
    /**
     * @hash   917567510
     * @vftbl  48
     * @symbol ?normalTick@Warden@@UEAAXXZ
     */
    virtual void normalTick();
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
     * @hash   -1732011298
     * @vftbl  113
     * @symbol ?setTarget@Warden@@UEAAXPEAVActor@@@Z
     */
    virtual void setTarget(class Actor *);
    /**
     * @hash   -1631057773
     * @vftbl  134
     * @symbol ?isInvulnerableTo@Warden@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   -326076227
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@Warden@@UEAAXH@Z
     */
    virtual void onSynchedDataUpdate(int);
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
     * @hash   1760099132
     * @vftbl  261
     * @symbol ?onPush@Warden@@UEAAXAEAVActor@@@Z
     */
    virtual void onPush(class Actor &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1642464875
     * @vftbl  271
     * @symbol ?_hurt@Warden@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
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
     * @hash   140318340
     * @vftbl  305
     * @symbol ?checkSpawnRules@Warden@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @hash   1473322736
     * @vftbl  306
     * @symbol ?checkSpawnObstruction@Warden@@UEBA_NXZ
     */
    virtual bool checkSpawnObstruction() const;
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @hash   -1748547678
     * @vftbl  316
     * @symbol ?doHurtTarget@Warden@@MEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
     */
    virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @hash   -1922525167
     * @symbol ??0Warden@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Warden(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};