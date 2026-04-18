#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs_module/IECSModule.h"
#include "mc/deps/vanilla_systems/ActorMoveArgs.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IEntitySystems;
namespace ECSModule { struct ModuleInitArgs; }
// clang-format on

namespace VanillaSystems {

struct ActorMoveModule : public ::ECSModule::IECSModule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::VanillaSystems::ActorMoveArgs> mArgs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initRegistry(::EntityRegistry& registry) /*override*/;

    virtual void registerSystems(::IEntitySystems& systems, ::ECSModule::ModuleInitArgs const& args) /*override*/;

    virtual ~ActorMoveModule() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initRegistry(::EntityRegistry& registry);

    MCAPI void $registerSystems(::IEntitySystems& systems, ::ECSModule::ModuleInitArgs const& args);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
