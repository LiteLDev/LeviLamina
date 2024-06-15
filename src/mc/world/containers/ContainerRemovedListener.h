#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerRemovedListener {
public:
    // prevent constructor by default
    ContainerRemovedListener& operator=(ContainerRemovedListener const&);
    ContainerRemovedListener(ContainerRemovedListener const&);
    ContainerRemovedListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __gen_??1ContainerRemovedListener@@UEAA@XZ
    virtual ~ContainerRemovedListener() = default;

    // NOLINTEND
};
