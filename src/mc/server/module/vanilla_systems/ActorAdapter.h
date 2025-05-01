#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_systems/IActorAdapter.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class ActorAdapter : public ::VanillaSystems::IActorAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbb9f6f;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAdapter& operator=(ActorAdapter const&);
    ActorAdapter(ActorAdapter const&);
    ActorAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void dropHangingActor(::StrictEntityContext const& entity) /*override*/;

    // vIndex: 0
    virtual ~ActorAdapter() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $dropHangingActor(::StrictEntityContext const& entity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
