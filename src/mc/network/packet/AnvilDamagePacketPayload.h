#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AnvilDamagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5c7301;
    ::ll::UntypedStorage<4, 12> mUnk6dee4c;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilDamagePacketPayload& operator=(AnvilDamagePacketPayload const&);
    AnvilDamagePacketPayload(AnvilDamagePacketPayload const&);
    AnvilDamagePacketPayload();
};
