#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class IEventListener {
public:
    // prevent constructor by default
    IEventListener& operator=(IEventListener const&);
    IEventListener(IEventListener const&);
    IEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IEventListener@Events@Social@@UEAA@XZ
    virtual ~IEventListener();

    // vIndex: 1, symbol:
    // ?recordEvent@AggregationEventListener@Events@Social@@UEAAXAEBVEvent@23@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    virtual void recordEvent(
        class Social::Events::Event const&                       event,
        class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform
    ) = 0;

    // vIndex: 2, symbol: ?sendEvents@AggregationEventListener@Events@Social@@UEAAX_N@Z
    virtual void sendEvents(bool forceSend) = 0;

    // vIndex: 3, symbol: ?getEventTagsFilter@OneDSEventListener@Events@Social@@UEBAHXZ
    virtual int getEventTagsFilter() const = 0;

    // vIndex: 4, symbol: ?stopDebugEventLogging@AggregationEventListener@Events@Social@@UEAAXXZ
    virtual void stopDebugEventLogging() = 0;

    // NOLINTEND
};

}; // namespace Social::Events
