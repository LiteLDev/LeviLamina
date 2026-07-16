#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/DataTracker.h"
#include "mc/client/gui/oreui/interface/ScreenPhase.h"

namespace OreUI {

class ScreenPerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 328, ::std::optional<::OreUI::DataTracker>>      mDataTracker;
    ::ll::TypedStorage<1, 1, bool>                                         mUneventfulNavigation;
    ::ll::TypedStorage<1, 1, bool>                                         mEventfulNavigation;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>      mStartFrameTime;
    ::ll::TypedStorage<1, 1, ::OreUI::ScreenPhase>                         mLastPhase;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> mLastFrameTime;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::nanoseconds>> mLastAdvanceDuration;
    ::ll::TypedStorage<1, 1, bool>                                         mMeaningfulPaintEventReceived;
    ::ll::TypedStorage<1, 1, bool>                                         mMeaningfulPaintWithRenderingSetThisFrame;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::OreUI::DataTracker> completeProfilingScope();

    MCAPI void startProfilingScope(
        ::std::string const&                    telemetryIdPreviousScreen,
        ::std::string const&                    telemetryIdNewScreen,
        ::std::chrono::steady_clock::time_point currentTime
    );

    MCAPI void
    tick(::std::chrono::nanoseconds previousGameUpdateDuration, ::std::vector<::std::string> const& syncedFacets);
    // NOLINTEND
};

} // namespace OreUI
