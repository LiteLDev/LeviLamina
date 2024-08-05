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
    MCAPI void AddScreen(std::string const&, double, double, std::unordered_map<std::string, std::string> const&, bool);

    MCAPI void PopulateEvent(class Social::Events::Event&, bool);

    MCAPI void SetApplicationId(std::string const&);

    MCAPI bool ShouldSendEvent() const;

    // NOLINTEND
};

}; // namespace Social::Events
