#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureData.h"

struct UIActorOffscreenCaptureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::OffscreenCaptureData> mCaptureData;
    ::ll::TypedStorage<2, 4, ::glm::vec<2, ushort>>   mRenderResolution;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UIActorOffscreenCaptureDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
