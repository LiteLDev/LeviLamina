#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerCloseListener {
public:
    // prevent constructor by default
    ContainerCloseListener& operator=(ContainerCloseListener const&);
    ContainerCloseListener(ContainerCloseListener const&);
    ContainerCloseListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: ??1ContainerCloseListener@@UEAA@XZ
    virtual ~ContainerCloseListener();

    // NOLINTEND
};
