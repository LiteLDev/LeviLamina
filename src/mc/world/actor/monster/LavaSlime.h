#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
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
#include "mc/world/actor/monster/Slime.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LavaSlime : public ::Slime {
public:
    // prevent constructor by default
    LavaSlime& operator=(LavaSlime const&);
    LavaSlime(LavaSlime const&);
    LavaSlime();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@LavaSlime@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1LavaSlime@@UEAA@XZ
    virtual ~LavaSlime() = default;

    // vIndex: 41, symbol: ?getBrightness@LavaSlime@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 52, symbol: ?isOnFire@LavaSlime@@MEBA_NXZ
    virtual bool isOnFire() const;

    // vIndex: 162, symbol: ?checkSpawnRules@LavaSlime@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 170, symbol: ?getArmorValue@LavaSlime@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 192, symbol: ?isDarkEnoughToSpawn@LavaSlime@@UEBA_NXZ
    virtual bool isDarkEnoughToSpawn() const;

    // vIndex: 193, symbol: ?doPlayLandSound@LavaSlime@@MEAA_NXZ
    virtual bool doPlayLandSound();

    // vIndex: 195, symbol: ?decreaseSquish@LavaSlime@@MEAAXXZ
    virtual void decreaseSquish();

    // vIndex: 196, symbol: ?createChild@LavaSlime@@MEAA?AV?$OwnerPtr@VEntityContext@@@@H@Z
    virtual class OwnerPtr<class EntityContext> createChild(int i);

    // symbol: ??0LavaSlime@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI LavaSlime(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
