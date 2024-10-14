#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class EntitySystems {
public:
    // prevent constructor by default
    EntitySystems& operator=(EntitySystems const&);
    EntitySystems(EntitySystems const&);
    EntitySystems();

public:
    // NOLINTBEGIN
    MCVAPI void registerTickingSystem(
        gsl::span<class Bedrock::typeid_t<struct SystemCategory> const> categories,
        std::unique_ptr<class ITickingSystem>                           system,
        struct SystemInfo const&                                        info,
        struct EntitySystemTickingMode                                  tickingMode
    );

    MCVAPI void tickMovementCatchup(class EntityRegistry& registry);

    MCVAPI void tickMovementCorrectionReplay(class EntityRegistry& registry);

    MCVAPI ~EntitySystems();

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
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForIEntitySystems();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

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
