#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/code_builder/platform/WebviewObserver.h"

// auto generated forward declare list
// clang-format off
struct WebviewDownloadInfo;
// clang-format on

class IWebviewTelemetry : public ::WebviewObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3b1452;
    // NOLINTEND

public:
    // prevent constructor by default
    IWebviewTelemetry& operator=(IWebviewTelemetry const&);
    IWebviewTelemetry(IWebviewTelemetry const&);
    IWebviewTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onDownloadBegin(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    virtual void onDownloadComplete(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    virtual void onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    virtual void onMessageRecieved(::std::string const&) /*override*/;

    virtual void fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const /*override*/;

    virtual void
    fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const
        /*override*/;

#ifdef LL_PLAT_S
    virtual ~IWebviewTelemetry() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IWebviewTelemetry() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const& downloadInfo);

    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const& downloadInfo);

    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo);

    MCNAPI void $onMessageRecieved(::std::string const&);

    MCNAPI void $fireCodeBuilderLoadPerformance(
        ::std::string const&        stage,
        uint64                      tutorialSize,
        uint64                      downloadSize,
        ::std::chrono::milliseconds elapsedTimeMS
    ) const;

    MCNAPI void
    $fireCodeBuilderRunPerformance(::std::string const& stage, ::std::chrono::milliseconds elapsedTimeMS) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
