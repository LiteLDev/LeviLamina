#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SimpleEventPacketPayload {
public:
    // SimpleEventPacketPayload inner types define
    enum class Subtype : ushort {
        UninitializedSubtype        = 0,
        EnableCommands              = 1,
        DisableCommands             = 2,
        UnlockWorldTemplateSettings = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::SimpleEventPacketPayload::Subtype> mSubtype;
    // NOLINTEND
};
