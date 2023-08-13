#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

namespace Core {

class LoadTimeProfiler : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    LoadTimeProfiler& operator=(LoadTimeProfiler const&) = delete;
    LoadTimeProfiler(LoadTimeProfiler const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0LoadTimeProfiler\@Core\@\@QEAA\@XZ
     */
    MCAPI LoadTimeProfiler();
    /**
     * @symbol ?setEnabled\@LoadTimeProfiler\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setEnabled(bool);
    // NOLINTEND
};

}; // namespace Core
