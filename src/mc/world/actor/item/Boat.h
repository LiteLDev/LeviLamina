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
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Boat\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Boat\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?remove\@Boat\@\@UEAAXXZ
     */
    virtual void remove(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Boat\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
    /**
     * @vftbl 49
     * @symbol
     * ?getExitTip\@Boat\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@W4InputMode\@\@W4NewInteractionModel\@\@\@Z
     */
    virtual std::string
    getExitTip(std::string const&, enum class InputMode, enum class NewInteractionModel) const; // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@Boat\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs(); // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Boat\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 82
     * @symbol ?isPickable\@Boat\@\@UEAA_NXZ
     */
    virtual bool isPickable(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Boat\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@Boat\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const; // NOLINT
    /**
     * @vftbl 174
     * @symbol ?canAddPassenger\@Boat\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool canAddPassenger(class Actor&) const; // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 206
     * @symbol ?getPassengerYRotation\@Boat\@\@UEBAMAEBVActor\@\@\@Z
     */
    virtual float getPassengerYRotation(class Actor const&) const; // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Boat\@\@EEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?destroy\@Boat\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void destroy(class Actor*); // NOLINT
    /**
     * @symbol ??0Boat\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Boat(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?getRowingTime\@Boat\@\@QEBAMW4Side\@\@\@Z
     */
    MCAPI float getRowingTime(enum class Side) const; // NOLINT
    /**
     * @symbol ?getWoodID\@Boat\@\@QEBAEXZ
     */
    MCAPI unsigned char getWoodID() const; // NOLINT
    /**
     * @symbol ?postNormalTick\@Boat\@\@QEAAXXZ
     */
    MCAPI void postNormalTick(); // NOLINT
    /**
     * @symbol ?setPaddleState\@Boat\@\@QEAA_NW4Side\@\@_N\@Z
     */
    MCAPI bool setPaddleState(enum class Side, bool); // NOLINT
    /**
     * @symbol ?setRowingTime\@Boat\@\@QEAAXW4Side\@\@M\@Z
     */
    MCAPI void setRowingTime(enum class Side, float); // NOLINT

    // private:
    /**
     * @symbol ?_control\@Boat\@\@AEAAXXZ
     */
    MCAPI void _control(); // NOLINT
    /**
     * @symbol ?_move\@Boat\@\@AEAAXXZ
     */
    MCAPI void _move(); // NOLINT
    /**
     * @symbol ?_paddleControl\@Boat\@\@AEAAXW4Side\@\@AEAVVec3\@\@1\@Z
     */
    MCAPI void _paddleControl(enum class Side, class Vec3&, class Vec3&); // NOLINT

private:
};
