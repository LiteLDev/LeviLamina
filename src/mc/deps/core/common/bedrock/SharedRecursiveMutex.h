#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/SharedRecursiveMutexBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class SharedRecursiveMutexBase; }
// clang-format on

namespace Bedrock::Threading {

class SharedRecursiveMutex : public ::Bedrock::Threading::SharedRecursiveMutexBase {
public:
    // prevent constructor by default
    SharedRecursiveMutex& operator=(SharedRecursiveMutex const&);
    SharedRecursiveMutex(SharedRecursiveMutex const&);
    SharedRecursiveMutex();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SharedRecursiveMutex@Threading@Bedrock@@UEAA@XZ
    virtual ~SharedRecursiveMutex();

    // vIndex: 1, symbol: ?_threadHoldsSharedLock@SharedRecursiveMutex@Threading@Bedrock@@MEAA_NVid@thread@std@@@Z
    virtual bool _threadHoldsSharedLock(std::thread::id);

    // vIndex: 2, symbol: ?_shouldLockForSharedAccess@SharedRecursiveMutex@Threading@Bedrock@@MEAA_NVid@thread@std@@@Z
    virtual bool _shouldLockForSharedAccess(std::thread::id);

    // vIndex: 3, symbol: ?_shouldUnLockForSharedAccess@SharedRecursiveMutex@Threading@Bedrock@@MEAA_NVid@thread@std@@@Z
    virtual bool _shouldUnLockForSharedAccess(std::thread::id);

    // NOLINTEND
};

}; // namespace Bedrock::Threading
