#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Bedrock::Threading {

class GraphicsTasksPerfScaler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mBeginFrameTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              mFrameDuration;
    ::ll::TypedStorage<1, 1, bool>                                    mFrameDurationValid;
    ::ll::TypedStorage<4, 4, float>                                   mServerUpdateTimeInNs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~GraphicsTasksPerfScaler() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~GraphicsTasksPerfScaler() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
