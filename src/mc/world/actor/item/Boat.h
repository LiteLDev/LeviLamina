#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/Side.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Boat : public ::Actor {
public:
    // prevent constructor by default
    Boat& operator=(Boat const&);
    Boat(Boat const&);
    Boat();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Boat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 5, symbol: ?reloadHardcodedClient@Boat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: ??1@@UEAA@XZ
    virtual ~Boat() = default;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 13, symbol: ?remove@Boat@@UEAAXXZ
    virtual void remove();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@Boat@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 34, symbol:
    // ?getExitTip@Boat@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@W4NewInteractionModel@@@Z
    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@Boat@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: ?isPickable@Boat@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 79, symbol: ?isInvulnerableTo@Boat@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 89, symbol: __unk_vfn_89
    virtual void __unk_vfn_89();

    // vIndex: 90, symbol: __unk_vfn_90
    virtual void __unk_vfn_90();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 103, symbol: __unk_vfn_103
    virtual void __unk_vfn_103();

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol: __unk_vfn_108
    virtual void __unk_vfn_108();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 111, symbol: ?getControllingPlayer@Boat@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 113, symbol: __unk_vfn_113
    virtual void __unk_vfn_113();

    // vIndex: 115, symbol: ?canAddPassenger@Boat@@UEBA_NAEAVActor@@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 118, symbol: __unk_vfn_118
    virtual void __unk_vfn_118();

    // vIndex: 120, symbol: __unk_vfn_120
    virtual void __unk_vfn_120();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 134, symbol: __unk_vfn_134
    virtual void __unk_vfn_134();

    // vIndex: 138, symbol: ?getPassengerYRotation@Boat@@UEBAMAEBVActor@@@Z
    virtual float getPassengerYRotation(class Actor const&) const;

    // vIndex: 142, symbol: __unk_vfn_142
    virtual void __unk_vfn_142();

    // vIndex: 143, symbol: __unk_vfn_143
    virtual void __unk_vfn_143();

    // vIndex: 146, symbol: __unk_vfn_146
    virtual void __unk_vfn_146();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 154, symbol: __unk_vfn_154
    virtual void __unk_vfn_154();

    // vIndex: 157, symbol: __unk_vfn_157
    virtual void __unk_vfn_157();

    // vIndex: 158, symbol: __unk_vfn_158
    virtual void __unk_vfn_158();

    // vIndex: 159, symbol: __unk_vfn_159
    virtual void __unk_vfn_159();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Boat@@EEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?destroy@Boat@@UEAAXPEAVActor@@@Z
    virtual void destroy(class Actor*);

    // symbol: ?breaksFallingBlocks@Boat@@UEBA_NXZ
    MCVAPI bool breaksFallingBlocks() const;

    // symbol: ??0Boat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Boat(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getWoodID@Boat@@QEBAEXZ
    MCAPI uchar getWoodID() const;

    // symbol: ?postNormalTick@Boat@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?setRowingTime@Boat@@QEAAXW4Side@@M@Z
    MCAPI void setRowingTime(::Side, float);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_control@Boat@@AEAAXXZ
    MCAPI void _control();

    // symbol: ?_paddleControl@Boat@@AEAAXW4Side@@AEAVVec3@@1@Z
    MCAPI void _paddleControl(::Side, class Vec3&, class Vec3&);

    // NOLINTEND
};
