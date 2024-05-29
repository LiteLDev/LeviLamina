#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Error {
public:
    // prevent constructor by default
    Error(Error const&);
    Error();

public:
    // NOLINTBEGIN
    // symbol: ??0Error@Scripting@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit Error(std::string const&);

    // symbol: ??0Error@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI Error(struct Scripting::Error&&);

    // symbol: ??0Error@Scripting@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI Error(std::string const& name_, std::string const&);

    // symbol: ??4Error@Scripting@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct Scripting::Error& operator=(struct Scripting::Error&&);

    // symbol: ??4Error@Scripting@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct Scripting::Error& operator=(struct Scripting::Error const&);

    // symbol: ?toString@Error@Scripting@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ??1Error@Scripting@@QEAA@XZ
    MCAPI ~Error();

    // NOLINTEND
};

}; // namespace Scripting
