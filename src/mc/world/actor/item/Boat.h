#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
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
    // vIndex: 10, symbol: ?reloadHardcoded@Boat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 11, symbol: ?reloadHardcodedClient@Boat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 19, symbol: ?remove@Boat@@UEAAXXZ
    virtual void remove();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@Boat@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 48, symbol:
    // ?getExitTip@Boat@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@W4NewInteractionModel@@@Z
    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 67, symbol: ?getShadowHeightOffs@Boat@@UEAAMXZ
    virtual float getShadowHeightOffs();

    // vIndex: 68, symbol: ?getShadowRadius@Boat@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 81, symbol: ?isPickable@Boat@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 119, symbol: ?isInvulnerableTo@Boat@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?getControllingPlayer@Boat@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 170, symbol: ?canAddPassenger@Boat@@UEBA_NAEAVActor@@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 202, symbol: ?getPassengerYRotation@Boat@@UEBAMAEBVActor@@@Z
    virtual float getPassengerYRotation(class Actor const&) const;

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Boat@@EEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?destroy@Boat@@UEAAXPEAVActor@@@Z
    virtual void destroy(class Actor*);

    // symbol: ?breaksFallingBlocks@Boat@@UEBA_NXZ
    MCVAPI bool breaksFallingBlocks() const;

    // symbol: ??0Boat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Boat(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getRowingTime@Boat@@QEBAMW4Side@@@Z
    MCAPI float getRowingTime(::Side) const;

    // symbol: ?getWoodID@Boat@@QEBAEXZ
    MCAPI uchar getWoodID() const;

    // symbol: ?postNormalTick@Boat@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?setPaddleState@Boat@@QEAA_NW4Side@@_N@Z
    MCAPI bool setPaddleState(::Side, bool);

    // symbol: ?setRowingTime@Boat@@QEAAXW4Side@@M@Z
    MCAPI void setRowingTime(::Side, float);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_control@Boat@@AEAAXXZ
    MCAPI void _control();

    // symbol: ?_move@Boat@@AEAAXXZ
    MCAPI void _move();

    // symbol: ?_paddleControl@Boat@@AEAAXW4Side@@AEAVVec3@@1@Z
    MCAPI void _paddleControl(::Side, class Vec3&, class Vec3&);

    // NOLINTEND
};
