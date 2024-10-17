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
    MCAPI bool operator!=(struct npc::UrlAction const& rhs) const;

    MCAPI ~UrlAction();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace npc
