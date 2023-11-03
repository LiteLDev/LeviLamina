#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemData_Legacy {
public:
    // prevent constructor by default
    ComponentItemData_Legacy();

public:
    // NOLINTBEGIN
    // symbol: ??0ComponentItemData_Legacy@@QEAA@$$QEAU0@@Z
    MCAPI ComponentItemData_Legacy(struct ComponentItemData_Legacy&&);

    // symbol: ??0ComponentItemData_Legacy@@QEAA@AEBU0@@Z
    MCAPI ComponentItemData_Legacy(struct ComponentItemData_Legacy const&);

    // symbol: ??4ComponentItemData_Legacy@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ComponentItemData_Legacy& operator=(struct ComponentItemData_Legacy&&);

    // symbol: ??4ComponentItemData_Legacy@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ComponentItemData_Legacy& operator=(struct ComponentItemData_Legacy const&);

    // symbol: ??1ComponentItemData_Legacy@@QEAA@XZ
    MCAPI ~ComponentItemData_Legacy();

    // NOLINTEND
};
