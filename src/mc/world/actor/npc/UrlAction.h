#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct UrlAction {
public:
    // prevent constructor by default
    UrlAction& operator=(UrlAction const&);
    UrlAction(UrlAction const&);
    UrlAction();

public:
    // NOLINTBEGIN
    // symbol: ??9UrlAction@npc@@QEBA_NAEBU01@@Z
    MCAPI bool operator!=(struct npc::UrlAction const& rhs) const;

    // symbol: ??1UrlAction@npc@@QEAA@XZ
    MCAPI ~UrlAction();

    // NOLINTEND
};

}; // namespace npc
