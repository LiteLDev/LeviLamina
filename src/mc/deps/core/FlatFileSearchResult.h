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
    // NOLINTBEGIN
    /**
     * @symbol ??1FlatFileSearchResult\@Core\@\@QEAA\@XZ
     */
    MCAPI ~FlatFileSearchResult();
    // NOLINTEND
};

}; // namespace Core
