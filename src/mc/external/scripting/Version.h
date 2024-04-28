#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Version {
public:
    // prevent constructor by default
    Version& operator=(Version const&);
    Version();

public:
    // NOLINTBEGIN
    // symbol: ??0Version@Scripting@@QEAA@AEBU01@@Z
    MCAPI Version(struct Scripting::Version const&);

    // symbol: ?isPreRelease@Version@Scripting@@QEBA_NXZ
    MCAPI bool isPreRelease() const;

    // symbol: ??9Version@Scripting@@QEBA_NAEBU01@@Z
    MCAPI bool operator!=(struct Scripting::Version const& rhs) const;

    // symbol: ??MVersion@Scripting@@QEBA_NAEBU01@@Z
    MCAPI bool operator<(struct Scripting::Version const& rhs) const;

    // symbol: ??8Version@Scripting@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct Scripting::Version const& rhs) const;

    // symbol: ??PVersion@Scripting@@QEBA_NAEBU01@@Z
    MCAPI bool operator>=(struct Scripting::Version const& rhs) const;

    // symbol: ?satisfies@Version@Scripting@@QEBA_NAEBU12@_N@Z
    MCAPI bool satisfies(struct Scripting::Version const&, bool) const;

    // symbol: ?toString@Version@Scripting@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ??1Version@Scripting@@QEAA@XZ
    MCAPI ~Version();

    // NOLINTEND
};

}; // namespace Scripting
