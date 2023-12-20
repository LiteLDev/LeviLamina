#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
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

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Boat : public ::Actor {
public:
    // prevent constructor by default
    Boat& operator=(Boat const&);
    Boat(Boat const&);
    Boat();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Boat@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 5, symbol: ?reloadHardcodedClient@Boat@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1Boat@@UEAA@XZ
    virtual ~Boat() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@Boat@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 34, symbol:
    // ?getExitTip@Boat@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@W4NewInteractionModel@@@Z
    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@Boat@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 51, symbol: ?isPickable@Boat@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 78, symbol: ?isInvulnerableTo@Boat@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 109, symbol: ?getControllingPlayer@Boat@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 113, symbol: ?canAddPassenger@Boat@@UEBA_NAEAVActor@@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 136, symbol: ?getPassengerYRotation@Boat@@UEBAMAEBVActor@@@Z
    virtual float getPassengerYRotation(class Actor const&) const;

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@Boat@@EEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 169, symbol: ?destroy@Boat@@UEAAXPEAVActor@@@Z
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
