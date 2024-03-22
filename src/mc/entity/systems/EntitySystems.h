#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/entity/events/EcsEventDispatcher.h"
#include "mc/entity/systems/DefaultEntitySystemsCollection.h"
#include "mc/entity/systems/IEntitySystems.h"
#include "mc/entity/systems/PlayerInteractionSystem.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

class EntitySystems : public IEntitySystems, public ::Bedrock::EnableNonOwnerReferences {
public:
    std::unique_ptr<PlayerInteractionSystem>  mPlayerInteractionSystem; // this+0x20
    std::unique_ptr<IEntitySystemsCollection> mSystems;                 // this+0x28
    OwnerPtr<EcsEventDispatcher>              mDispatcher;              // this+0x30
    std::string                               mName;                    // this+0x40
    bool                                      mEnableTimingCapture;     // this+0x60

    DefaultEntitySystemsCollection& getDefaultCollection() { return *(DefaultEntitySystemsCollection*)mSystems.get(); }

public:
    // NOLINTBEGIN
    // symbol: ??1EntitySystems@@UEAA@XZ
    virtual ~EntitySystems();

    // symbol:
    // ?registerTickingSystem@EntitySystems@@UEAAXV?$span@$$CBV?$typeid_t@USystemCategory@@@Bedrock@@$0?0@gsl@@V?$unique_ptr@VITickingSystem@@U?$default_delete@VITickingSystem@@@std@@@std@@AEBUSystemInfo@@UEntitySystemTickingMode@@@Z
    MCVAPI void registerTickingSystem(
        gsl::span<class Bedrock::typeid_t<struct SystemCategory> const>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );

    // symbol: ?tickMovementCatchup@EntitySystems@@UEAAXAEAVEntityRegistry@@@Z
    MCVAPI void tickMovementCatchup(class EntityRegistry& registry);

    // symbol: ?tickMovementCorrectionReplay@EntitySystems@@UEAAXAEAVEntityRegistry@@@Z
    MCVAPI void tickMovementCorrectionReplay(class EntityRegistry&);

    // symbol: ??0EntitySystems@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit EntitySystems(std::string name);

    // symbol:
    // ??0EntitySystems@@QEAA@V?$unique_ptr@UIEntitySystemsCollection@@U?$default_delete@UIEntitySystemsCollection@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
    MCAPI EntitySystems(std::unique_ptr<struct IEntitySystemsCollection>, std::string name);

    // symbol: ?getPlayerInteractionSystem@EntitySystems@@QEAAAEAVPlayerInteractionSystem@@XZ
    MCAPI class PlayerInteractionSystem& getPlayerInteractionSystem();

    // symbol: ?registerEditorOnlyTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerEditorOnlyTickingSystem(struct TickingSystemWithInfo&& system);

    // symbol: ?registerEvents@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
    MCAPI void registerEvents(class EntityRegistry& registry);

    // symbol: ?registerGameOnlyMovementTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerGameOnlyMovementTickingSystem(struct TickingSystemWithInfo&& system);

    // symbol: ?registerGameOnlyTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerGameOnlyTickingSystem(struct TickingSystemWithInfo&& system);

    // symbol: ?registerMovementTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerMovementTickingSystem(struct TickingSystemWithInfo&& system);

    // symbol: ?registerTickingSystem@EntitySystems@@QEAAX$$QEAUTickingSystemWithInfo@@@Z
    MCAPI void registerTickingSystem(struct TickingSystemWithInfo&& system);

    // symbol: ?tick@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
    MCAPI void tick(class EntityRegistry& registry);

    // symbol: ?tickEditor@EntitySystems@@QEAAXAEAVEntityRegistry@@@Z
    MCAPI void tickEditor(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_hasSingleTickCategory@EntitySystems@@AEBA_NV?$typeid_t@USystemCategory@@@Bedrock@@@Z
    MCAPI bool _hasSingleTickCategory(class Bedrock::typeid_t<struct SystemCategory>) const;

    // symbol: ?_singleTickCategory@EntitySystems@@AEAAXV?$typeid_t@USystemCategory@@@Bedrock@@AEAVEntityContext@@@Z
    MCAPI void
    _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory> category, class EntityContext& context);

    // symbol:
    // ?_singleTickCategory@EntitySystems@@AEAAXV?$typeid_t@USystemCategory@@@Bedrock@@AEAVStrictEntityContext@@AEAVEntityRegistry@@@Z
    MCAPI void
    _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory>, class StrictEntityContext&, class EntityRegistry&);

    // NOLINTEND
};
