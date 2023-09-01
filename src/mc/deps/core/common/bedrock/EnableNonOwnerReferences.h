#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class EnableNonOwnerReferences {
public:
    // prevent constructor by default
    EnableNonOwnerReferences& operator=(EnableNonOwnerReferences const&) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1EnableNonOwnerReferences@Bedrock@@UEAA@XZ
    MCVAPI ~EnableNonOwnerReferences();

    // symbol: ??0EnableNonOwnerReferences@Bedrock@@QEAA@XZ
    MCAPI EnableNonOwnerReferences();

    // symbol: ??0EnableNonOwnerReferences@Bedrock@@QEAA@AEBV01@@Z
    MCAPI EnableNonOwnerReferences(class Bedrock::EnableNonOwnerReferences const&);

    // NOLINTEND
};

}; // namespace Bedrock
