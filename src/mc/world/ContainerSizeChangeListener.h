#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {
public:
    // prevent constructor by default
    ContainerSizeChangeListener& operator=(ContainerSizeChangeListener const&);
    ContainerSizeChangeListener(ContainerSizeChangeListener const&);
    ContainerSizeChangeListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: ??1ContainerSizeChangeListener@@UEAA@XZ
    virtual ~ContainerSizeChangeListener();

    // NOLINTEND
};
