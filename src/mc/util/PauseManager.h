#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/SimulationType.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class Option;
namespace Bedrock::PubSub { class Subscription; }
class ILocalServerPauseCommunication;
// clang-format on

class PauseManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk994f71;
    ::ll::UntypedStorage<1, 1>   mUnkf88b2a;
    ::ll::UntypedStorage<1, 1>   mUnk99ce49;
    ::ll::UntypedStorage<8, 8>   mUnkd10131;
    ::ll::UntypedStorage<8, 128> mUnk2c9d89;
    ::ll::UntypedStorage<8, 16>  mUnk903eb4;
    ::ll::UntypedStorage<8, 48>  mUnk5b37dc;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseManager& operator=(PauseManager const&);
    PauseManager(PauseManager const&);
    PauseManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PauseManager(::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry);

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::PubSub::Connector<void(bool)>& getPauseStateChangeConnector();
#endif

    MCNAPI ::SimulationType getSimulationType() const;

#ifdef LL_PLAT_C
    MCNAPI void initializeOption(::Option* option);
#endif

    MCNAPI ::Bedrock::PubSub::Subscription
    listenForSimulationTypeChange(::std::function<void(::SimulationType, ::SimulationType)> callback);

#ifdef LL_PLAT_C
    MCNAPI bool requestInGamePause(::ILocalServerPauseCommunication& pauseCommunication, bool status) const;

    MCNAPI void setPauseFeatureEnabled(bool status);

    MCNAPI void setPauseIntent(bool value);
#endif

    MCNAPI void setSimulationType(::SimulationType simulationType);

    MCNAPI ~PauseManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SimulationType getSimulationType(::StackRefResult<::PauseManager const> pauseManager);

    MCNAPI static bool
    isSimulationType(::StackRefResult<::PauseManager const> pauseManager, ::SimulationType simulationType);

    MCNAPI static void
    setSimulationType(::StackRefResult<::PauseManager> pauseManager, ::SimulationType simulationType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
