#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs_module/IECSModule.h"

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
    ::ll::UntypedStorage<8, 16> mUnkf549a7;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMoveModule& operator=(ActorMoveModule const&);
    ActorMoveModule(ActorMoveModule const&);
    ActorMoveModule();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initRegistry(::EntityRegistry& registry) /*override*/;

    // vIndex: 2
    virtual void registerSystems(::IEntitySystems& systems, ::ECSModule::ModuleInitArgs const& args) /*override*/;

    // vIndex: 0
    virtual ~ActorMoveModule() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initRegistry(::EntityRegistry& registry);

    MCNAPI void $registerSystems(::IEntitySystems& systems, ::ECSModule::ModuleInitArgs const& args);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
