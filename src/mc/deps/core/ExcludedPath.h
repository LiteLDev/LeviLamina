#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

namespace Core {

struct ExcludedPath {
public:
    // prevent constructor by default
    ExcludedPath& operator=(ExcludedPath const&);
    ExcludedPath(ExcludedPath const&);
    ExcludedPath();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ExcludedPath@Core@@QEAA@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@_N@Z
    MCAPI ExcludedPath(class Core::PathBuffer<std::string> path, bool copyLooseFile);

    // NOLINTEND
};

}; // namespace Core
