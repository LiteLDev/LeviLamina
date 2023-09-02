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

class MinecartChest : public ::Minecart {
public:
    // prevent constructor by default
    MinecartChest& operator=(MinecartChest const&) = delete;
    MinecartChest(MinecartChest const&)            = delete;
    MinecartChest()                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

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

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

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

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 254, symbol: ?destroy@MinecartChest@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const&, bool);

    // vIndex: 255, symbol: ?getType@MinecartChest@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType();

    // vIndex: 256, symbol: ?getDefaultDisplayBlock@MinecartChest@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 257, symbol: __unk_vfn_257
    virtual void __unk_vfn_257();

    // vIndex: 259, symbol: ?applyNaturalSlowdown@MinecartChest@@UEAAXAEAVBlockSource@@@Z
    virtual void applyNaturalSlowdown(class BlockSource&);

    // symbol: ??0MinecartChest@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI MinecartChest(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?ITEMS_SIZE@MinecartChest@@0HB
    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $ITEMS_SIZE() { return ITEMS_SIZE; }

    // NOLINTEND
};
