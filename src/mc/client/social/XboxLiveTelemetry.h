#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/AggregationEventListener.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class AggregationEventListener; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class XboxLiveTelemetry : public ::Social::Events::AggregationEventListener {
public:
    // prevent constructor by default
    XboxLiveTelemetry& operator=(XboxLiveTelemetry const&);
    XboxLiveTelemetry(XboxLiveTelemetry const&);
    XboxLiveTelemetry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1XboxLiveTelemetry@Events@Social@@UEAA@XZ
    virtual ~XboxLiveTelemetry() = default;

    // NOLINTEND
};

}; // namespace Social::Events
