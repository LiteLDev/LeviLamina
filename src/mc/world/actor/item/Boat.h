#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

class Boat : public ::Actor {

public:
    // prevent constructor by default
    Boat& operator=(Boat const&) = delete;
    Boat(Boat const&)            = delete;
    Boat()                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Boat\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Boat\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Boat\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 49
     * @symbol
     * ?getExitTip\@Boat\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4InputMode\@\@W4NewInteractionModel\@\@\@Z
     */
    virtual std::string getExitTip(std::string const&, enum class InputMode, enum class NewInteractionModel) const;
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@Boat\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Boat\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 82
     * @symbol ?isPickable\@Boat\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Boat\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@Boat\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 174
     * @symbol ?canAddPassenger\@Boat\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool canAddPassenger(class Actor&) const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 206
     * @symbol ?getPassengerYRotation\@Boat\@\@UEBAMAEBVActor\@\@\@Z
     */
    virtual float getPassengerYRotation(class Actor const&) const;
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Boat\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 254
     * @symbol ?destroy\@Boat\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void destroy(class Actor*);
    /**
     * @symbol ??0Boat\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Boat(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
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
    MCAPI void _paddleControl(enum class Side, class Vec3&, class Vec3&);
    // NOLINTEND
};
