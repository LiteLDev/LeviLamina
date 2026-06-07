#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class FrameAnomalyDetector;
struct FrameAnomalyDetectorSummary;
struct FrameSlowdownEvent;
struct FrameSpikeEvent;
struct FrameStutterEvent;
// clang-format on

class FrameAnomalyDetectorEventing : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FrameAnomalyDetector>> mFrameAnomalyDetector;
    ::ll::TypedStorage<8, 24, ::std::vector<::FrameSpikeEvent>>                      mSpikeEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::FrameSlowdownEvent>>                   mSlowdownEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::FrameStutterEvent>>                    mStutterEvents;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mSlowdownSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mSpikeSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mStutterSub;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FrameAnomalyDetectorEventing();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit FrameAnomalyDetectorEventing(
        ::Bedrock::NotNullNonOwnerPtr<::FrameAnomalyDetector> const& frameAnomalyDetector
    );

    MCNAPI ::std::optional<::FrameAnomalyDetectorSummary> tryGetSummary();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::FrameAnomalyDetector> const& frameAnomalyDetector);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
