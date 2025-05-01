#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ContinuousLookAtEntityIntent.h"
#include "mc/server/sim/ContinuousLookAtPositionIntent.h"
#include "mc/server/sim/LookAtEntityIntent.h"
#include "mc/server/sim/LookAtPositionIntent.h"
#include "mc/server/sim/VoidLookAtIntent.h"

namespace sim {

struct LookAtIntent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            ::sim::VoidLookAtIntent,
            ::sim::LookAtPositionIntent,
            ::sim::ContinuousLookAtPositionIntent,
            ::sim::LookAtEntityIntent,
            ::sim::ContinuousLookAtEntityIntent>>
        mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LookAtIntent(::std::variant<
                                 ::sim::VoidLookAtIntent,
                                 ::sim::LookAtPositionIntent,
                                 ::sim::ContinuousLookAtPositionIntent,
                                 ::sim::LookAtEntityIntent,
                                 ::sim::ContinuousLookAtEntityIntent> type);

    MCNAPI ~LookAtIntent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::variant<
                       ::sim::VoidLookAtIntent,
                       ::sim::LookAtPositionIntent,
                       ::sim::ContinuousLookAtPositionIntent,
                       ::sim::LookAtEntityIntent,
                       ::sim::ContinuousLookAtEntityIntent> type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace sim
