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

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI StructureTelemetryClientData();
#endif

    MCFOLD uint getMirrorEditCount() const;

    MCFOLD uint getOffsetEditCount() const;

    MCFOLD uint getRotationEditCount() const;

    MCFOLD uint getSizeEditCount() const;

#ifdef LL_PLAT_C
    MCAPI bool hasAnyFieldBeenEdited() const;

    MCAPI void increaseMirrorEditCount();

    MCFOLD void increaseOffsetEditCount();

    MCFOLD void increaseRotationEditCount();

    MCAPI void increaseSizeEditCount();

    MCFOLD void resetCounts();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor();
#endif
    // NOLINTEND
};
