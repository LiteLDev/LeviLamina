#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMarketplacePackDownloader {
public:
    // IMarketplacePackDownloader inner types declare
    // clang-format off
    struct MarketplacePackDownloadStatus;
    // clang-format on

    // IMarketplacePackDownloader inner types define
    enum class MarketplacePackDownloadState : int {};

    struct MarketplacePackDownloadStatus {};
};
