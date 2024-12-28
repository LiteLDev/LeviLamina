#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MSGraph::Models {

struct DownloadUrlInfo {
public:
    // prevent constructor by default
    DownloadUrlInfo& operator=(DownloadUrlInfo const&);
    DownloadUrlInfo(DownloadUrlInfo const&);
    DownloadUrlInfo();
};

} // namespace MSGraph::Models
