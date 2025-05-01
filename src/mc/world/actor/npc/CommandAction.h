#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/ActionValue.h"
#include "mc/world/actor/npc/Button.h"
#include "mc/world/actor/npc/action_mode/Enum.h"

// auto generated forward declare list
// clang-format off
namespace npc { struct StoredCommand; }
// clang-format on

namespace npc {

struct CommandAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::npc::ActionValue>                  action;
    ::ll::TypedStorage<8, 64, ::npc::Button>                       button;
    ::ll::TypedStorage<1, 1, ::npc::_ActionMode::Enum>             mode;
    ::ll::TypedStorage<8, 24, ::std::vector<::npc::StoredCommand>> commands;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CommandAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace npc
