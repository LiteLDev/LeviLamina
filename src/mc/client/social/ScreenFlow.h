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
    // symbol:
    // ?AddScreen@ScreenFlow@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NNAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@5@_N@Z
    MCAPI void AddScreen(std::string const&, double, double, std::unordered_map<std::string, std::string> const&, bool);

    // symbol: ?PopulateEvent@ScreenFlow@Events@Social@@QEAAXAEAVEvent@23@_N@Z
    MCAPI void PopulateEvent(class Social::Events::Event&, bool);

    // symbol:
    // ?SetApplicationId@ScreenFlow@Events@Social@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void SetApplicationId(std::string const&);

    // symbol: ?ShouldSendEvent@ScreenFlow@Events@Social@@QEBA_NXZ
    MCAPI bool ShouldSendEvent() const;

    // NOLINTEND
};

}; // namespace Social::Events
