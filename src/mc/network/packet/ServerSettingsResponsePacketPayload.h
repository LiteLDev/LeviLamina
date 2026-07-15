#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerSettingsResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>           mFormId;
    ::ll::TypedStorage<8, 32, ::std::string> mFormJSON;
    // NOLINTEND
};
