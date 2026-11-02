#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptLiveEventsUtilities {

struct ScriptLiveEventsUtilitiesListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3f5eba;
    ::ll::UntypedStorage<8, 16> mUnk90127a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLiveEventsUtilitiesListener& operator=(ScriptLiveEventsUtilitiesListener const&);
    ScriptLiveEventsUtilitiesListener(ScriptLiveEventsUtilitiesListener const&);
    ScriptLiveEventsUtilitiesListener();
};

} // namespace ScriptLiveEventsUtilities
