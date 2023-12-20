#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class ScreenFlow {
public:
    // prevent constructor by default
    ScreenFlow& operator=(ScreenFlow const&);
    ScreenFlow(ScreenFlow const&);
    ScreenFlow();

public:
    // NOLINTBEGIN
    // symbol: ?PopulateEvent@ScreenFlow@Events@Social@@QEAAXAEAVEvent@23@_N@Z
    MCAPI void PopulateEvent(class Social::Events::Event&, bool);

    // symbol: ?ShouldSendEvent@ScreenFlow@Events@Social@@QEBA_NXZ
    MCAPI bool ShouldSendEvent() const;

    // NOLINTEND
};

}; // namespace Social::Events
