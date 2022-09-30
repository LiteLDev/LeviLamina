/**
 * @file  Boat.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Boat.
 *
 */
class Boat : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOAT
public:
    class Boat& operator=(class Boat const &) = delete;
    Boat(class Boat const &) = delete;
    Boat() = delete;
#endif

public:
    /**
     * @hash   -1270326515
     * @vftbl  8
     * @symbol ?reloadHardcoded@Boat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   -16895464
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Boat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Boat();
    /**
     * @hash   881452699
     * @vftbl  17
     * @symbol ?remove@Boat@@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   1419471931
     * @vftbl  48
     * @symbol ?normalTick@Boat@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   -1465800990
     * @vftbl  55
     * @symbol ?getExitTip@Boat@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@@Z
     */
    virtual std::string getExitTip(std::string const &, enum class InputMode) const;
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
     * @hash   -395734448
     * @vftbl  78
     * @symbol ?getShadowHeightOffs@Boat@@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   901622502
     * @vftbl  79
     * @symbol ?getShadowRadius@Boat@@UEBAMXZ
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
     * @hash   1841115797
     * @vftbl  89
     * @symbol ?onAboveBubbleColumn@Boat@@UEAAX_N@Z
     */
    virtual void onAboveBubbleColumn(bool);
    /**
     * @hash   469934638
     * @vftbl  94
     * @symbol ?isPickable@Boat@@UEAA_NXZ
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
     * @hash   131652414
     * @vftbl  134
     * @symbol ?isInvulnerableTo@Boat@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   -1999327689
     * @vftbl  183
     * @symbol ?getControllingPlayer@Boat@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @hash   -1146172
     * @vftbl  191
     * @symbol ?canAddPassenger@Boat@@UEBA_NAEAVActor@@@Z
     */
    virtual bool canAddPassenger(class Actor &) const;
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
     * @hash   -2118325647
     * @vftbl  225
     * @symbol ?getPassengerYRotation@Boat@@UEBAMAEBVActor@@@Z
     */
    virtual float getPassengerYRotation(class Actor const &) const;
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
     * @hash   99173465
     * @vftbl  271
     * @symbol ?_hurt@Boat@@EEAA_NAEBVActorDamageSource@@M_N1@Z
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
     * @hash   -500795150
     * @vftbl  286
     * @symbol ?destroy@Boat@@UEAAXPEAVActor@@@Z
     */
    virtual void destroy(class Actor *);
    /**
     * @hash   1581023900
     * @symbol ??0Boat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Boat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1605871587
     * @symbol ?getRowingTime@Boat@@QEBAMW4Side@@@Z
     */
    MCAPI float getRowingTime(enum class Side) const;
    /**
     * @hash   1490171879
     * @symbol ?getWoodID@Boat@@QEBAEXZ
     */
    MCAPI unsigned char getWoodID() const;
    /**
     * @hash   -417245883
     * @symbol ?postNormalTick@Boat@@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   986766780
     * @symbol ?setPaddleState@Boat@@QEAA_NW4Side@@_N@Z
     */
    MCAPI bool setPaddleState(enum class Side, bool);
    /**
     * @hash   871421415
     * @symbol ?setRowingTime@Boat@@QEAAXW4Side@@M@Z
     */
    MCAPI void setRowingTime(enum class Side, float);

//private:
    /**
     * @hash   -736853398
     * @symbol ?_control@Boat@@AEAAXXZ
     */
    MCAPI void _control();
    /**
     * @hash   -721309476
     * @symbol ?_move@Boat@@AEAAXXZ
     */
    MCAPI void _move();
    /**
     * @hash   1051581765
     * @symbol ?_paddleControl@Boat@@AEAAXW4Side@@AEAVVec3@@1@Z
     */
    MCAPI void _paddleControl(enum class Side, class Vec3 &, class Vec3 &);

private:

};