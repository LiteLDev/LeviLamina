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
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@MinecartTNT@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

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

    // vIndex: 125, symbol: ?handleEntityEvent@MinecartTNT@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 166, symbol: ?causeFallDamage@MinecartTNT@@MEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@MinecartTNT@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?destroy@MinecartTNT@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const&, bool);

    // vIndex: 250, symbol: ?getType@MinecartTNT@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType();

    // vIndex: 251, symbol: ?getDefaultDisplayBlock@MinecartTNT@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 252, symbol: __unk_vfn_252
    virtual void __unk_vfn_252();

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
    auto& $DEFAULT_FUSE_LENGTH() { return DEFAULT_FUSE_LENGTH; }

    // NOLINTEND
};
