/**
 * @file  Boat.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Boat\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Boat\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@Boat\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 49
     * @symbol ?normalTick\@Boat\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 56
     * @symbol ?getExitTip\@Boat\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4InputMode\@\@W4NewInteractionModel\@\@\@Z
     */
    virtual std::string getExitTip(std::string const &, enum class InputMode, enum class NewInteractionModel) const;
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 79
     * @symbol ?getShadowHeightOffs\@Boat\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 80
     * @symbol ?getShadowRadius\@Boat\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 90
     * @symbol ?onAboveBubbleColumn\@Boat\@\@UEAAX_N\@Z
     */
    virtual void onAboveBubbleColumn(bool);
    /**
     * @vftbl 95
     * @symbol ?isPickable\@Boat\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 134
     * @symbol ?isInvulnerableTo\@Boat\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 180
     * @symbol ?getControllingPlayer\@Boat\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 188
     * @symbol ?canAddPassenger\@Boat\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool canAddPassenger(class Actor &) const;
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 221
     * @symbol ?getPassengerYRotation\@Boat\@\@UEBAMAEBVActor\@\@\@Z
     */
    virtual float getPassengerYRotation(class Actor const &) const;
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@Boat\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 276
     * @symbol ?destroy\@Boat\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void destroy(class Actor *);
    /**
     * @symbol ??0Boat\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Boat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getRowingTime\@Boat\@\@QEBAMW4Side\@\@\@Z
     */
    MCAPI float getRowingTime(enum class Side) const;
    /**
     * @symbol ?getWoodID\@Boat\@\@QEBAEXZ
     */
    MCAPI unsigned char getWoodID() const;
    /**
     * @symbol ?postNormalTick\@Boat\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?setPaddleState\@Boat\@\@QEAA_NW4Side\@\@_N\@Z
     */
    MCAPI bool setPaddleState(enum class Side, bool);
    /**
     * @symbol ?setRowingTime\@Boat\@\@QEAAXW4Side\@\@M\@Z
     */
    MCAPI void setRowingTime(enum class Side, float);

//private:
    /**
     * @symbol ?_control\@Boat\@\@AEAAXXZ
     */
    MCAPI void _control();
    /**
     * @symbol ?_move\@Boat\@\@AEAAXXZ
     */
    MCAPI void _move();
    /**
     * @symbol ?_paddleControl\@Boat\@\@AEAAXW4Side\@\@AEAVVec3\@\@1\@Z
     */
    MCAPI void _paddleControl(enum class Side, class Vec3 &, class Vec3 &);

private:

};
