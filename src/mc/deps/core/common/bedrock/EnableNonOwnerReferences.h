#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class EnableNonOwnerReferences {
public:
    struct ControlBlock {
        EnableNonOwnerReferences* mPtr;
    };

    std::shared_ptr<ControlBlock> mControlBlock; // this+0x8

    // prevent constructor by default
    EnableNonOwnerReferences& operator=(EnableNonOwnerReferences const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EnableNonOwnerReferences@Bedrock@@UEAA@XZ
    virtual ~EnableNonOwnerReferences();

    // symbol: ??0EnableNonOwnerReferences@Bedrock@@QEAA@XZ
    MCAPI EnableNonOwnerReferences();

    // symbol: ??0EnableNonOwnerReferences@Bedrock@@QEAA@AEBV01@@Z
    MCAPI EnableNonOwnerReferences(class Bedrock::EnableNonOwnerReferences const&);

    // NOLINTEND
};

}; // namespace Bedrock
