#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class Path {
public:
    // prevent constructor by default
    Path& operator=(Path const&);
    Path(Path const&);

public:
    // NOLINTBEGIN
    MCAPI Path();

    MCAPI explicit Path(char const*);

    MCAPI bool operator==(class Core::Path const&) const;

    MCAPI ~Path();

    MCAPI static class Core::Result makeFailure(char const* format, class Core::Path&& path);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class Core::Path const& EMPTY();

    // NOLINTEND
};

}; // namespace Core
