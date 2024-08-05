#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

class EntitySystems {
public:
    // prevent constructor by default
    EntitySystems& operator=(EntitySystems const&);
    EntitySystems(EntitySystems const&);
    EntitySystems();

public:
    // NOLINTBEGIN
    MCVAPI void registerTickingSystem(
        gsl::span<class Bedrock::typeid_t<struct SystemCategory> const>,
        std::unique_ptr<class ITickingSystem>,
        struct SystemInfo const&,
        struct EntitySystemTickingMode
    );

    MCVAPI void tickMovementCatchup(class EntityRegistry& registry);

    MCVAPI void tickMovementCorrectionReplay(class EntityRegistry&);

    MCVAPI ~EntitySystems();

    MCAPI explicit EntitySystems(std::string name);

    MCAPI EntitySystems(std::unique_ptr<struct IEntitySystemsCollection>, std::string name);

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
    MCAPI bool _hasSingleTickCategory(class Bedrock::typeid_t<struct SystemCategory>) const;

    MCAPI void
    _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory> category, class EntityContext& context);

    MCAPI void
    _singleTickCategory(class Bedrock::typeid_t<struct SystemCategory>, class StrictEntityContext&, class EntityRegistry&);

    // NOLINTEND
};
