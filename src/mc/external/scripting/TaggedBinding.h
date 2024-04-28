#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class MajorVersionLimit; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

struct TaggedBinding {
public:
    // prevent constructor by default
    TaggedBinding& operator=(TaggedBinding const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TaggedBinding@Scripting@@QEAA@XZ
    MCAPI TaggedBinding();

    // symbol: ??0TaggedBinding@Scripting@@QEAA@AEBU01@@Z
    MCAPI TaggedBinding(struct Scripting::TaggedBinding const&);

    // symbol: ?beta@TaggedBinding@Scripting@@QEAAAEAU12@XZ
    MCAPI struct Scripting::TaggedBinding& beta();

    // symbol: ?onlyStable@TaggedBinding@Scripting@@QEAAAEAU12@XZ
    MCAPI struct Scripting::TaggedBinding& onlyStable();

    // symbol:
    // ?release@TaggedBinding@Scripting@@QEAAAEAU12@UVersion@2@V?$optional@VMajorVersionLimit@Scripting@@@std@@@Z
    MCAPI struct Scripting::TaggedBinding&
        release(struct Scripting::Version, std::optional<class Scripting::MajorVersionLimit>);

    // symbol: ??1TaggedBinding@Scripting@@QEAA@XZ
    MCAPI ~TaggedBinding();

    // NOLINTEND
};

}; // namespace Scripting
