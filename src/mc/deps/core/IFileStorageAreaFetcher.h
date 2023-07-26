#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class IFileStorageAreaFetcher {

public:
    // prevent constructor by default
    IFileStorageAreaFetcher& operator=(IFileStorageAreaFetcher const&) = delete;
    IFileStorageAreaFetcher(IFileStorageAreaFetcher const&)            = delete;
    IFileStorageAreaFetcher()                                          = delete;
};

}; // namespace Core
