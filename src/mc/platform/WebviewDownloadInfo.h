#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebviewDownloadInfo {

public:
    // prevent constructor by default
    WebviewDownloadInfo& operator=(WebviewDownloadInfo const&) = delete;
    WebviewDownloadInfo(WebviewDownloadInfo const&)            = delete;
    WebviewDownloadInfo()                                      = delete;
};
