#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct PlayerTelemetryLoadout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnkd0ad4f;
    ::ll::UntypedStorage<8, 152> mUnk1f86da;
    ::ll::UntypedStorage<8, 152> mUnk1c3063;
    ::ll::UntypedStorage<8, 152> mUnkb059ba;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTelemetryLoadout& operator=(PlayerTelemetryLoadout const&);
    PlayerTelemetryLoadout(PlayerTelemetryLoadout const&);
    PlayerTelemetryLoadout();

};

}
