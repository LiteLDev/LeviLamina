#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DownloadStateObject {
public:
    // prevent constructor by default
    DownloadStateObject& operator=(DownloadStateObject const&);
    DownloadStateObject(DownloadStateObject const&);
    DownloadStateObject();
};
