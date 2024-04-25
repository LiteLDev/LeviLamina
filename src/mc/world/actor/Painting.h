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
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/HangingActor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Painting : public ::HangingActor {
public:
    // prevent constructor by default
    Painting& operator=(Painting const&);
    Painting(Painting const&);
    Painting();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Painting@@UEAA@XZ
    virtual ~Painting() = default;

    // vIndex: 13, symbol: ?remove@Painting@@UEAAXXZ
    virtual void remove();

    // vIndex: 25, symbol:
    // ?tryCreateAddActorPacket@Painting@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 38, symbol: ?getShadowRadius@Painting@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 45, symbol: ?isPickable@Painting@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 149, symbol: ?readAdditionalSaveData@Painting@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Painting@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?getWidth@Painting@@UEBAHXZ
    virtual int getWidth() const;

    // vIndex: 154, symbol: ?getHeight@Painting@@UEBAHXZ
    virtual int getHeight() const;

    // vIndex: 155, symbol: ?dropItem@Painting@@UEAAXXZ
    virtual void dropItem();

    // vIndex: 156, symbol: ?placeHangingEntity@Painting@@UEAA_NAEAVBlockSource@@H@Z
    virtual bool placeHangingEntity(class BlockSource& region, int direction);

    // symbol: ??0Painting@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Painting(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getCurrentMotif@Painting@@QEBAAEBVMotif@@XZ
    MCAPI class Motif const& getCurrentMotif() const;

    // NOLINTEND
};
