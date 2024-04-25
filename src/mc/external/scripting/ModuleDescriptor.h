#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleDescriptor {
public:
    // prevent constructor by default
    ModuleDescriptor& operator=(ModuleDescriptor const&);
    ModuleDescriptor(ModuleDescriptor const&);
    ModuleDescriptor();

public:
    // NOLINTBEGIN
    // symbol: ??0ModuleDescriptor@Scripting@@QEAA@$$QEAU01@@Z
    MCAPI ModuleDescriptor(struct Scripting::ModuleDescriptor&&);

    // symbol: ??8ModuleDescriptor@Scripting@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct Scripting::ModuleDescriptor const&) const;

    // symbol:
    // ?toString@ModuleDescriptor@Scripting@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol: ??1ModuleDescriptor@Scripting@@QEAA@XZ
    MCAPI ~ModuleDescriptor();

    // NOLINTEND
};

}; // namespace Scripting
