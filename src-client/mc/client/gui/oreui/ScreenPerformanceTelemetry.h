#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/DataTracker.h"

namespace OreUI {

class ScreenPerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 224, ::std::optional<::OreUI::DataTracker>> mDataTracker;
    ::ll::TypedStorage<1, 1, bool>                                    mUneventfulNavigation;
    ::ll::TypedStorage<1, 1, bool>                                    mEventfulNavigation;
    ::ll::TypedStorage<8, 8, double>                                  mLastFrameTime;
    ::ll::TypedStorage<8, 8, double>                                  mStartFrameTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void startProfilingScope(
        ::std::string const& telemetryIdPreviousScreen,
        ::std::string const& telemetryIdNewScreen,
        double               currentTimeS
    );

    MCAPI void tick(double currentTimeS, ::std::vector<::std::string> const& syncedFacets);
    // NOLINTEND
};

} // namespace OreUI
