#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/ActionValue.h"
#include "mc/world/actor/npc/Button.h"

namespace npc {

struct UrlAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::npc::ActionValue> action;
    ::ll::TypedStorage<8, 64, ::npc::Button>      button;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UrlAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace npc
