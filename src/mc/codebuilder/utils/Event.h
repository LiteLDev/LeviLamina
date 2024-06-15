#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::CodeBuilder {

struct Event {
public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);
    Event();

public:
    // NOLINTBEGIN
    // symbol: ??0Event@CodeBuilder@Util@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit Event(std::string const& name);

    // symbol: ??1Event@CodeBuilder@Util@@QEAA@XZ
    MCAPI ~Event();

    // NOLINTEND
};

}; // namespace Util::CodeBuilder
