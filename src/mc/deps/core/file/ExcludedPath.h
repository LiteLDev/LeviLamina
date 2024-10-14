#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Core {

struct ExcludedPath {
public:
    // prevent constructor by default
    ExcludedPath& operator=(ExcludedPath const&);
    ExcludedPath(ExcludedPath const&);
    ExcludedPath();

public:
    // NOLINTBEGIN
    MCAPI ExcludedPath(class Core::PathBuffer<std::string> path, bool copyLooseFile);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Core
