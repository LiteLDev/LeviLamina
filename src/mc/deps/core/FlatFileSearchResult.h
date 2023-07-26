#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FlatFileSearchResult {

public:
    // prevent constructor by default
    FlatFileSearchResult& operator=(FlatFileSearchResult const&) = delete;
    FlatFileSearchResult(FlatFileSearchResult const&)            = delete;
    FlatFileSearchResult()                                       = delete;

public:
    /**
     * @symbol ??1FlatFileSearchResult\@Core\@\@QEAA\@XZ
     */
    MCAPI ~FlatFileSearchResult(); // NOLINT
};

}; // namespace Core
