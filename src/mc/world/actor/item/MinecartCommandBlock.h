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
#include "mc/enums/MinecartType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MinecartCommandBlock : public ::Minecart {
public:
    // prevent constructor by default
    MinecartCommandBlock& operator=(MinecartCommandBlock const&);
    MinecartCommandBlock(MinecartCommandBlock const&);
    MinecartCommandBlock();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol:
    // ?initializeComponents@MinecartCommandBlock@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1MinecartCommandBlock@@UEAA@XZ
    virtual ~MinecartCommandBlock() = default;

    // vIndex: 35, symbol: ?canShowNameTag@MinecartCommandBlock@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 149, symbol: ?readAdditionalSaveData@MinecartCommandBlock@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@MinecartCommandBlock@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 154, symbol: ?getType@MinecartCommandBlock@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType();

    // vIndex: 155, symbol: ?getDefaultDisplayBlock@MinecartCommandBlock@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 157, symbol: ?applyNaturalSlowdown@MinecartCommandBlock@@MEAAXAEAVBlockSource@@@Z
    virtual void applyNaturalSlowdown(class BlockSource& region);

    // vIndex: 158, symbol: ?_lazyInitDisplayBlock@MinecartCommandBlock@@EEAAXXZ
    virtual void _lazyInitDisplayBlock();

    // symbol:
    // ??0MinecartCommandBlock@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI MinecartCommandBlock(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
