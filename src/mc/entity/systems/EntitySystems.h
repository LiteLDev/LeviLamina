#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/deps/ecs/systems/IEntitySystems.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/profiler/PredeclaredAnnotation.h"

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
struct TickingSystemId;
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
    struct EditorSystemCategory {};

    struct GameSystemCategory {};

    struct RuntimeInitialize {};

    struct UsedInClientMovementCorrections {};

    struct UsedInServerPlayerMovement {};

    using MovementSystemCategory = ::entt::
        type_list<::EntitySystems::UsedInServerPlayerMovement, ::EntitySystems::UsedInClientMovementCorrections>;

    using SystemInvokeCallbackFunc = ::std::function<void(::TickingSystemId)>;

    using SystemInvokeCallbackPair =
        ::std::pair<::std::function<void(::TickingSystemId)>, ::std::function<void(::TickingSystemId)>>;

    using SystemInvokeCallbackSig = void(::TickingSystemId);

    using TotalTickCallbackFunc = ::std::function<void()>;

    using TotalTickCallbackPair = ::std::pair<::std::function<void()>, ::std::function<void()>>;

    using TotalTickCallbackSig = void();

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerInteractionSystem>>        mPlayerInteractionSystem;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IEntitySystemsCollection>>       mSystems;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::EcsEventDispatcher>>                   mDispatcher;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mName;
    ::ll::TypedStorage<1, 1, bool>                                                mEnableTimingCapture;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                            mPreTotalTick;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                            mPostTotalTick;
    ::ll::TypedStorage<8, 64, ::std::function<void(::TickingSystemId)>>           mPreSystemInvoke;
    ::ll::TypedStorage<8, 64, ::std::function<void(::TickingSystemId)>>           mPostSystemInvoke;
    ::ll::TypedStorage<8, 8, ::Bedrock::Profiler::details::PredeclaredAnnotation> mTickingAnnotation;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystems();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntitySystems() /*override*/ = default;

    virtual void tickMovementCatchup(::EntityRegistry&) /*override*/;

    virtual void tickMovementCorrectionReplay(::EntityRegistry&) /*override*/;

    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const>,
        ::std::unique_ptr<::ITickingSystem>,
        ::SystemInfo const&,
        ::EntitySystemTickingMode
    ) /*override*/;

    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EntitySystems(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string_view name);

    MCAPI void registerEvents(::EntityRegistry& registry);

#ifdef LL_PLAT_C
    MCAPI ::std::pair<::std::function<void(::TickingSystemId)>, ::std::function<void(::TickingSystemId)>>
    setSystemInvokeCallbacks(
        ::std::function<void(::TickingSystemId)>&& preInvoke,
        ::std::function<void(::TickingSystemId)>&& postInvoke
    );

    MCAPI ::std::pair<::std::function<void()>, ::std::function<void()>>
    setTotalTickCallbacks(::std::function<void()>&& preTick, ::std::function<void()>&& postTick);
#endif

    MCAPI void tick(::EntityRegistry& registry);

    MCAPI void tickEditor(::EntityRegistry& registry);

    MCAPI void tickInitialize(::EntityRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::IEntitySystemsCollection> systems, ::std::string_view name);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
