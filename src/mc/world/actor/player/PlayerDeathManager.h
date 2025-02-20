#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/actor/player/IPlayerDeathManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class Player;
// clang-format on

class PlayerDeathManager : public ::IPlayerDeathManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk236073;
    ::ll::UntypedStorage<8, 8>   mUnkbc01aa;
    ::ll::UntypedStorage<8, 24>  mUnkbddb5a;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDeathManager& operator=(PlayerDeathManager const&);
    PlayerDeathManager(PlayerDeathManager const&);
    PlayerDeathManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerDeathManager() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getOnPlayerDeathConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void playerDied(::Player& player, ::ActorDamageSource const& source);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<void(::Player&)>& $getOnPlayerDeathConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
