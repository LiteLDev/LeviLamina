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
    MCAPI void AddScreen(
        std::string const&                                  screenName,
        double                                              timestamp,
        double                                              seconds,
        std::unordered_map<std::string, std::string> const& additionalProperties,
        bool                                                isDeepLink
    );

    MCAPI void PopulateEvent(class Social::Events::Event& event, bool clear);

    MCAPI void SetApplicationId(std::string const& appId);

    MCAPI bool ShouldSendEvent() const;

    // NOLINTEND
};

}; // namespace Social::Events
