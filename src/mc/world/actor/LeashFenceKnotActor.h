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

class LeashFenceKnotActor : public ::HangingActor {
public:
    // prevent constructor by default
    LeashFenceKnotActor& operator=(LeashFenceKnotActor const&);
    LeashFenceKnotActor(LeashFenceKnotActor const&);
    LeashFenceKnotActor();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol:
    // ?reloadHardcoded@LeashFenceKnotActor@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@LeashFenceKnotActor@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1LeashFenceKnotActor@@UEAA@XZ
    virtual ~LeashFenceKnotActor() = default;

    // vIndex: 13, symbol: ?remove@LeashFenceKnotActor@@UEAAXXZ
    virtual void remove();

    // vIndex: 23, symbol: ?teleportTo@LeashFenceKnotActor@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool);

    // vIndex: 38, symbol: ?getShadowRadius@LeashFenceKnotActor@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 45, symbol: ?isPickable@LeashFenceKnotActor@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 126, symbol: ?getInteraction@LeashFenceKnotActor@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player& player, class ActorInteraction& interaction, class Vec3 const& location);

    // vIndex: 149, symbol: ?readAdditionalSaveData@LeashFenceKnotActor@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@LeashFenceKnotActor@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?getWidth@LeashFenceKnotActor@@UEBAHXZ
    virtual int getWidth() const;

    // vIndex: 154, symbol: ?getHeight@LeashFenceKnotActor@@UEBAHXZ
    virtual int getHeight() const;

    // vIndex: 155, symbol: ?dropItem@LeashFenceKnotActor@@UEAAXXZ
    virtual void dropItem();

    // vIndex: 157, symbol: ?wouldSurvive@LeashFenceKnotActor@@UEAA_NAEAVBlockSource@@@Z
    virtual bool wouldSurvive(class BlockSource& region);

    // symbol:
    // ??0LeashFenceKnotActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI LeashFenceKnotActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?numberofAnimalsAttached@LeashFenceKnotActor@@QEAAHXZ
    MCAPI int numberofAnimalsAttached();

    // symbol: ?removeAnimals@LeashFenceKnotActor@@QEAAXXZ
    MCAPI void removeAnimals();

    // NOLINTEND
};
