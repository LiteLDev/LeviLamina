#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct FrameAnomalyDetectionConfiguration;
// clang-format on

class FrameAnomalyDetector : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnka334a9;
    ::ll::UntypedStorage<2, 2>   mUnk3f16c7;
    ::ll::UntypedStorage<8, 24>  mUnke99fe9;
    ::ll::UntypedStorage<4, 20>  mUnkd107de;
    ::ll::UntypedStorage<1, 1>   mUnkdf497d;
    ::ll::UntypedStorage<1, 1>   mUnkc4366c;
    ::ll::UntypedStorage<1, 1>   mUnk94f7c7;
    ::ll::UntypedStorage<1, 1>   mUnkfbacfe;
    ::ll::UntypedStorage<4, 4>   mUnkd04602;
    ::ll::UntypedStorage<8, 8>   mUnk87a716;
    ::ll::UntypedStorage<8, 8>   mUnkef053d;
    ::ll::UntypedStorage<8, 8>   mUnk429626;
    ::ll::UntypedStorage<8, 8>   mUnk306139;
    ::ll::UntypedStorage<8, 8>   mUnk5d1271;
    ::ll::UntypedStorage<8, 128> mUnk7fdebe;
    ::ll::UntypedStorage<8, 128> mUnkf3797a;
    ::ll::UntypedStorage<8, 128> mUnkbd8d4a;
    ::ll::UntypedStorage<8, 128> mUnka7a7ae;
    ::ll::UntypedStorage<8, 128> mUnk36e430;
    ::ll::UntypedStorage<8, 16>  mUnkca5fba;
    ::ll::UntypedStorage<1, 1>   mUnk5077f6;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameAnomalyDetector& operator=(FrameAnomalyDetector const&);
    FrameAnomalyDetector(FrameAnomalyDetector const&);
    FrameAnomalyDetector();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~FrameAnomalyDetector() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FrameAnomalyDetector() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void checkForStutters(
        ::std::chrono::nanoseconds              frameDelta,
        ::std::chrono::nanoseconds              medianTiming,
        ::std::chrono::steady_clock::time_point now
    );

    MCNAPI_C void update(::std::chrono::nanoseconds frameDelta);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::FrameAnomalyDetectionConfiguration config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
