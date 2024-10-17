#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/npc/ActionValue.h"
#include "mc/world/actor/npc/Button.h"
#include "mc/world/actor/npc/StoredCommand.h"

namespace npc {

enum class ActionMode : schar {
    Button = 0x0,
    Close  = 0x1,
    Open   = 0x2,
};

struct CommandAction {
public:
    npc::ActionValue                mActionValue;
    npc::Button                     mButton;
    npc::ActionMode                 mActionMode;
    std::vector<npc::StoredCommand> mCmds;

    // prevent constructor by default
    CommandAction& operator=(CommandAction const&);
    CommandAction(CommandAction const&);
    CommandAction();

public:
    // NOLINTBEGIN
    MCAPI bool operator!=(struct npc::CommandAction const& rhs) const;

    MCAPI ~CommandAction();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace npc
