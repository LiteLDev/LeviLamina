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
    MinecartTNT& operator=(MinecartTNT const&) = delete;
    MinecartTNT(MinecartTNT const&)            = delete;
    MinecartTNT()                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 43, symbol: ?normalTick@MinecartTNT@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 127, symbol: ?handleEntityEvent@MinecartTNT@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 168, symbol: ?causeFallDamage@MinecartTNT@@MEAAXMMVActorDamageSource@@@Z
    virtual void causeFallDamage(float, float, class ActorDamageSource);

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@MinecartTNT@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 254, symbol: ?destroy@MinecartTNT@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const&, bool);

    // vIndex: 255, symbol: ?getType@MinecartTNT@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType();

    // vIndex: 256, symbol: ?getDefaultDisplayBlock@MinecartTNT@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 257, symbol: __unk_vfn_257
    virtual void __unk_vfn_257();

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
