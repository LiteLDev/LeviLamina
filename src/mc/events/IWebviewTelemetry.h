#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/WebviewObserver.h"

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
    // vIndex: 6
    virtual void onDownloadBegin(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    // vIndex: 8
    virtual void onDownloadComplete(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    // vIndex: 9
    virtual void onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    // vIndex: 0
    virtual ~IWebviewTelemetry() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onDownloadBegin(::WebviewDownloadInfo const& downloadInfo);

    MCNAPI void $onDownloadComplete(::WebviewDownloadInfo const& downloadInfo);

    MCNAPI void $onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo);
    // NOLINTEND
};
