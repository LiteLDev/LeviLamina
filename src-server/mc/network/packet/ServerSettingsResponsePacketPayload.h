#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerSettingsResponsePacketPayload {
public:
    uint          mFormId;
    ::std::string mFormJSON;
};
