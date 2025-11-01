#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTelemetryClientData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSizeEditCount;
    ::ll::TypedStorage<4, 4, uint> mOffsetEditCount;
    ::ll::TypedStorage<4, 4, uint> mRotationEditCount;
    ::ll::TypedStorage<4, 4, uint> mMirrorEditCount;
    // NOLINTEND
};
