#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/deps/ecs/systems/IEntitySystems.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class EcsEventDispatcher;
class EntityRegistry;
class ITickingSystem;
class PlayerInteractionSystem;
struct EntitySystemTickingMode;
struct IEntitySystemsCollection;
struct SystemCategory;
struct SystemInfo;
struct TickingSystemWithInfo;
// clang-format on

class EntitySystems : public ::IEntitySystems, public ::Bedrock::EnableNonOwnerReferences {
public:
    // EntitySystems inner types declare
    // clang-format off
    struct EditorSystemCategory;
    struct GameSystemCategory;
    struct RuntimeInitialize;
    struct UsedInClientMovementCorrections;
    struct UsedInServerPlayerMovement;
    // clang-format on

    // EntitySystems inner types define
    struct UsedInServerPlayerMovement {};

    struct UsedInClientMovementCorrections {};

    using MovementSystemCategory = ::entt::
        type_list<::EntitySystems::UsedInServerPlayerMovement, ::EntitySystems::UsedInClientMovementCorrections>;

    struct GameSystemCategory {};

    struct EditorSystemCategory {};

    struct RuntimeInitialize {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerInteractionSystem>>  mPlayerInteractionSystem;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IEntitySystemsCollection>> mSystems;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::EcsEventDispatcher>>             mDispatcher;
    ::ll::TypedStorage<8, 32, ::std::string>                                mName;
    ::ll::TypedStorage<1, 1, bool>                                          mEnableTimingCapture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntitySystems() /*override*/;

    // vIndex: 3
    virtual void tickMovementCatchup(::EntityRegistry& registry) /*override*/;

    // vIndex: 4
    virtual void tickMovementCorrectionReplay(::EntityRegistry& registry) /*override*/;

    // vIndex: 1
    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    ) /*override*/;

    // vIndex: 2
    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EntitySystems(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string name);

    MCAPI ::std::vector<::gsl::not_null<::SystemInfo const*>>
    getSystemInfo(::Bedrock::typeid_t<::SystemCategory> const& filter) const;

    MCAPI void registerEditorOnlyTickingSystem(::TickingSystemWithInfo&& system);

    MCAPI void registerEvents(::EntityRegistry& registry);

    MCAPI void registerGameOnlyTickingSystem(::TickingSystemWithInfo&& system);

    MCAPI void registerMovementTickingSystem(::TickingSystemWithInfo&& system);

    MCAPI void registerTickingSystem(::TickingSystemWithInfo&& system);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tickMovementCatchup(::EntityRegistry& registry);

    MCAPI void $tickMovementCorrectionReplay(::EntityRegistry& registry);

    MCAPI void $registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    );

    MCAPI bool $_hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIEntitySystems();
    // NOLINTEND
};
