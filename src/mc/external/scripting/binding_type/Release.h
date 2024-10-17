#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class Release {
public:
    // prevent constructor by default
    Release& operator=(Release const&);
    Release(Release const&);
    Release();

public:
    // NOLINTBEGIN
    MCAPI bool satisfies(struct Scripting::Version const& other) const;

    MCAPI ~Release();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
