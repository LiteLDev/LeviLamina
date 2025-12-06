#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContentAcquisition {
public:
    // ContentAcquisition inner types declare
    // clang-format off
    struct DownloadCallback;
    struct DownloadHistory;
    struct PackImportCallbackInfo;
    // clang-format on

    // ContentAcquisition inner types define
    enum class DownloadHistoryEntryResult : uint {};

    struct DownloadCallback {};

    struct DownloadHistory {};

    struct PackImportCallbackInfo {};
};
