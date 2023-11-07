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

class PlayStreamEventListener : public ::Social::Events::AggregationEventListener {
public:
    // prevent constructor by default
    PlayStreamEventListener& operator=(PlayStreamEventListener const&);
    PlayStreamEventListener(PlayStreamEventListener const&);
    PlayStreamEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayStreamEventListener@Events@@@UEAA@XZ
    virtual ~PlayStreamEventListener();

    // NOLINTEND
};

}; // namespace Social::Events
