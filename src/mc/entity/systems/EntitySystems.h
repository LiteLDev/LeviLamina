#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/entity/systems/IEntitySystems.h"

// auto generated forward declare list
// clang-format off
class EcsEventDispatcher;
class EntityContext;
class EntityRegistry;
class ITickingSystem;
class PlayerInteractionSystem;
class StrictEntityContext;
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
    struct UsedInServerPlayerMovement {
    public:
        // prevent constructor by default
        UsedInServerPlayerMovement& operator=(UsedInServerPlayerMovement const&);
        UsedInServerPlayerMovement(UsedInServerPlayerMovement const&);
        UsedInServerPlayerMovement();
    };

    struct UsedInClientMovementCorrections {
    public:
        // prevent constructor by default
        UsedInClientMovementCorrections& operator=(UsedInClientMovementCorrections const&);
        UsedInClientMovementCorrections(UsedInClientMovementCorrections const&);
        UsedInClientMovementCorrections();
    };

    using MovementSystemCategory = ::entt::
        type_list<::EntitySystems::UsedInServerPlayerMovement, ::EntitySystems::UsedInClientMovementCorrections>;

    struct GameSystemCategory {
    public:
        // prevent constructor by default
        GameSystemCategory& operator=(GameSystemCategory const&);
        GameSystemCategory(GameSystemCategory const&);
        GameSystemCategory();
    };

    struct EditorSystemCategory {
    public:
        // prevent constructor by default
        EditorSystemCategory& operator=(EditorSystemCategory const&);
        EditorSystemCategory(EditorSystemCategory const&);
        EditorSystemCategory();
    };

    struct RuntimeInitialize {
    public:
        // prevent constructor by default
        RuntimeInitialize& operator=(RuntimeInitialize const&);
        RuntimeInitialize(RuntimeInitialize const&);
        RuntimeInitialize();
    };

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
    EntitySystems& operator=(EntitySystems const&);
    EntitySystems(EntitySystems const&);
    EntitySystems();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntitySystems() /*override*/;

    // vIndex: 2
    virtual void tickMovementCatchup(::EntityRegistry& registry) /*override*/;

    // vIndex: 3
    virtual void tickMovementCorrectionReplay(::EntityRegistry& registry) /*override*/;

    // vIndex: 1
    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EntitySystems(::std::string name);

    MCAPI EntitySystems(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string name);

    MCAPI bool _hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> category) const;

    MCAPI void _singleTickCategory(::Bedrock::typeid_t<::SystemCategory> category, ::EntityContext& context);

    MCAPI void _singleTickCategory(
        ::Bedrock::typeid_t<::SystemCategory> category,
        ::StrictEntityContext&                entity,
        ::EntityRegistry&                     registry
    );

    MCAPI ::PlayerInteractionSystem& getPlayerInteractionSystem();

    MCAPI ::std::vector<::gsl::not_null<::SystemInfo const*>>
    getSystemInfo(::Bedrock::typeid_t<::SystemCategory> const& filter) const;

    MCAPI void registerEditorOnlyTickingSystem(::TickingSystemWithInfo&& system);

    MCAPI void registerEvents(::EntityRegistry& registry);

    MCAPI void registerGameOnlyMovementTickingSystem(::TickingSystemWithInfo&& system);

    MCAPI void registerGameOnlyTickingSystem(::TickingSystemWithInfo&& system);

    MCAPI void registerMovementTickingSystem(::TickingSystemWithInfo&& system);

    MCAPI void registerTickingSystem(::TickingSystemWithInfo&& system);

    MCAPI void tick(::EntityRegistry& registry);

    MCAPI void tickEditor(::EntityRegistry& registry);

    MCAPI void tickInitialize(::EntityRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name);

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIEntitySystems();
    // NOLINTEND
};
