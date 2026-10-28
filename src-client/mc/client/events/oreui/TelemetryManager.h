#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class RouterLocation; }
namespace Social::Events { struct DynamicElementData; }
namespace Social::Events { struct DynamicElementImpressionData; }
// clang-format on

namespace OreUI {

class TelemetryManager {
public:
    // TelemetryManager inner types declare
    // clang-format off
    struct ActiveDynamicElementSession;
    // clang-format on

    // TelemetryManager inner types define
    struct ActiveDynamicElementSession {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 56> mUnk31beff;
        ::ll::UntypedStorage<8, 8>  mUnke74516;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveDynamicElementSession& operator=(ActiveDynamicElementSession const&);
        ActiveDynamicElementSession(ActiveDynamicElementSession const&);
        ActiveDynamicElementSession();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk42880a;
    ::ll::UntypedStorage<8, 64>  mUnkbd3258;
    ::ll::UntypedStorage<8, 224> mUnk95723b;
    ::ll::UntypedStorage<8, 16>  mUnk83a15c;
    ::ll::UntypedStorage<8, 16>  mUnk62ef16;
    ::ll::UntypedStorage<8, 72>  mUnk57419d;
    ::ll::UntypedStorage<8, 24>  mUnk18aa60;
    ::ll::UntypedStorage<4, 4>   mUnk3c077d;
    ::ll::UntypedStorage<4, 4>   mUnkeaac16;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryManager& operator=(TelemetryManager const&);
    TelemetryManager(TelemetryManager const&);
    TelemetryManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _finishAllDynamicElementViews(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI ::Social::Events::DynamicElementImpressionData&
    _getOrCreateDynamicElementImpression(::Social::Events::DynamicElementData const& element);

    MCNAPI void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const&,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation
    );

    MCNAPI void recordDynamicComponentClosed();

    MCNAPI void recordDynamicElementHoveredOrFocused(::Social::Events::DynamicElementData const& element);

    MCNAPI void recordDynamicElementInView(::Social::Events::DynamicElementData const& element);

    MCNAPI void recordDynamicElementOutOfView(::std::string const& elementId);

    MCNAPI void recordDynamicElementPressed(::Social::Events::DynamicElementData const& element);

    MCNAPI void recordStaticElementHoveredOrFocused(::std::string const& buttonId);

    MCNAPI void recordStaticElementPressed(::std::string const& buttonId);

    MCNAPI ~TelemetryManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
