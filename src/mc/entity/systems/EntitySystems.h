#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/ecs/events/EcsEventDispatcher.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/entity/systems/DefaultEntitySystemsCollection.h"
#include "mc/entity/systems/IEntitySystems.h"
#include "mc/entity/systems/PlayerInteractionSystem.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

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
    virtual ~EntitySystems();

    MCVAPI void registerTickingSystem(
        gsl::span<class Bedrock::typeid_t<struct SystemCategory> const> categories,
        std::unique_ptr<class ITickingSystem>                           system,
        struct SystemInfo const&                                        info,
        struct EntitySystemTickingMode                                  tickingMode
    );

    MCVAPI void tickMovementCatchup(class EntityRegistry& registry);

    MCVAPI void tickMovementCorrectionReplay(class EntityRegistry& registry);

    MCAPI explicit EntitySystems(std::string name);

    MCAPI EntitySystems(std::unique_ptr<struct IEntitySystemsCollection> systems, std::string name);

    MCAPI class PlayerInteractionSystem& getPlayerInteractionSystem();

    MCAPI void registerEditorOnlyTickingSystem(struct TickingSystemWithInfo&& system);

    MCAPI void registerEvents(class EntityRegistry& registry);

    MCAPI void registerGameOnlyMovementTickingSystem(struct TickingSystemWithInfo&& system);

    MCAPI void registerGameOnlyTickingSystem(struct TickingSystemWithInfo&& system);

    MCAPI void registerMovementTickingSystem(struct TickingSystemWithInfo&& system);

    MCAPI void registerTickingSystem(struct TickingSystemWithInfo&& system);

    MCAPI void tick(class EntityRegistry& registry);

    MCAPI void tickEditor(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _hasSingleTickCategory(class Bedrock::typeid_t<struct SystemCategory> category) const;

    MCAPI void
    _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory> category, class EntityContext& context);

    MCAPI void _singleTickCategory(
        class Bedrock::typeid_t<struct SystemCategory> category,
        class StrictEntityContext&                     entity,
        class EntityRegistry&                          registry
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** vftableForIEntitySystems();

    MCAPI void* ctor$(std::unique_ptr<struct IEntitySystemsCollection> systems, std::string name);

    MCAPI void* ctor$(std::string name);

    MCAPI void dtor$();

    MCAPI void registerTickingSystem$(
        gsl::span<class Bedrock::typeid_t<struct SystemCategory> const> categories,
        std::unique_ptr<class ITickingSystem>                           system,
        struct SystemInfo const&                                        info,
        struct EntitySystemTickingMode                                  tickingMode
    );

    MCAPI void tickMovementCatchup$(class EntityRegistry& registry);

    MCAPI void tickMovementCorrectionReplay$(class EntityRegistry& registry);

    // NOLINTEND
};
