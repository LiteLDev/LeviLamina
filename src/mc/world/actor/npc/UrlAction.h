#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct UrlAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnka9cf98;
    ::ll::UntypedStorage<8, 64> mUnk2810c4;
    // NOLINTEND

public:
    // prevent constructor by default
    UrlAction& operator=(UrlAction const&);
    UrlAction(UrlAction const&);
    UrlAction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator!=(::npc::UrlAction const& rhs) const;

    MCAPI ~UrlAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace npc
