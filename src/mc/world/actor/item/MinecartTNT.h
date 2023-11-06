#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/MinecartType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/item/components/ItemUseMethod.h"

class MinecartTNT : public ::Minecart {
public:
    // prevent constructor by default
    MinecartTNT& operator=(MinecartTNT const&);
    MinecartTNT(MinecartTNT const&);
    MinecartTNT();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@MinecartTNT@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 84, symbol: ?handleEntityEvent@MinecartTNT@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 113, symbol: ?causeFallDamageToActor@MinecartTNT@@MEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@MinecartTNT@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?destroy@MinecartTNT@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const&, bool);

    // vIndex: 174, symbol: ?getType@MinecartTNT@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType();

    // vIndex: 175, symbol: ?getDefaultDisplayBlock@MinecartTNT@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 176, symbol: __unk_vfn_176
    virtual void __unk_vfn_176();

    // symbol: ??0MinecartTNT@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI MinecartTNT(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?primeFuse@MinecartTNT@@QEAAXW4ActorDamageCause@@@Z
    MCAPI void primeFuse(::ActorDamageCause);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_FUSE_LENGTH@MinecartTNT@@0HB
    MCAPI static int const DEFAULT_FUSE_LENGTH;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $DEFAULT_FUSE_LENGTH() { return DEFAULT_FUSE_LENGTH; }

    // NOLINTEND
};
