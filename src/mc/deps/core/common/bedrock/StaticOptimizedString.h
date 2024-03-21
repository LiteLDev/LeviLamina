#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StaticOptimizedString {
public:
    // StaticOptimizedString inner types define
    enum class StorageType {};

public:
    // prevent constructor by default
    StaticOptimizedString& operator=(StaticOptimizedString const&);
    StaticOptimizedString();

public:
    // NOLINTBEGIN
    // symbol: ??0StaticOptimizedString@Bedrock@@QEAA@$$QEAV01@@Z
    MCAPI StaticOptimizedString(class Bedrock::StaticOptimizedString&&);

    // symbol: ??0StaticOptimizedString@Bedrock@@QEAA@AEBV01@@Z
    MCAPI StaticOptimizedString(class Bedrock::StaticOptimizedString const&);

    // symbol: ??1StaticOptimizedString@Bedrock@@QEAA@XZ
    MCAPI ~StaticOptimizedString();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_set@StaticOptimizedString@Bedrock@@AEAAXPEBD_KW4StorageType@12@@Z
    MCAPI void _set(char const*, uint64, ::Bedrock::StaticOptimizedString::StorageType);

    // NOLINTEND
};

}; // namespace Bedrock
