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
struct EntitySystemTickingMode;
struct IEntitySystemsCollection;
struct ITickingSystem;
struct PlayerInteractionSystem;
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
    // prevent constructor by default
    EntitySystems();

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
    MCNAPI EntitySystems(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string name);

    MCNAPI ::std::vector<::gsl::not_null<::SystemInfo const*>>
    getSystemInfo(::Bedrock::typeid_t<::SystemCategory> const& filter) const;

    MCNAPI void registerEditorOnlyTickingSystem(::TickingSystemWithInfo&& system);

    MCNAPI void registerGameOnlyMovementTickingSystem(::TickingSystemWithInfo&& system);

    MCNAPI void registerGameOnlyTickingSystem(::TickingSystemWithInfo&& system);

    MCNAPI void registerMovementTickingSystem(::TickingSystemWithInfo&& system);

    MCNAPI void registerTickingSystem(::TickingSystemWithInfo&& system);

    MCNAPI void tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tickMovementCatchup(::EntityRegistry& registry);

    MCNAPI void $tickMovementCorrectionReplay(::EntityRegistry& registry);

    MCNAPI void $registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    );

    MCNAPI bool $_hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForIEntitySystems();
    // NOLINTEND
};
