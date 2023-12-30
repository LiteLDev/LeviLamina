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
    // symbol: ?satisfies@Release@Scripting@@QEBA_NAEBUVersion@2@@Z
    MCAPI bool satisfies(struct Scripting::Version const&) const;

    // symbol: ??1Release@Scripting@@QEAA@XZ
    MCAPI ~Release();

    // NOLINTEND
};

}; // namespace Scripting
