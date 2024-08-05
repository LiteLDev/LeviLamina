#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct CommandAction {
public:
    // prevent constructor by default
    CommandAction& operator=(CommandAction const&);
    CommandAction(CommandAction const&);
    CommandAction();

public:
    // NOLINTBEGIN
    MCAPI bool operator!=(struct npc::CommandAction const& rhs) const;

    MCAPI ~CommandAction();

    // NOLINTEND
};

}; // namespace npc
