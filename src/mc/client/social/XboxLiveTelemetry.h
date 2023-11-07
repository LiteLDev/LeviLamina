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
    // vIndex: 0, symbol: ??1XboxLiveTelemetry@Events@@@UEAA@XZ
    virtual ~XboxLiveTelemetry();

    // NOLINTEND
};

}; // namespace Social::Events
