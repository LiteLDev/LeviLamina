#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/UniqueLock.h"

namespace Bedrock::Threading {

class UniqueLockReleaseWindow {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::Threading::UniqueLock<::std::mutex>&> mLock;
    // NOLINTEND

public:
    // prevent constructor by default
    UniqueLockReleaseWindow& operator=(UniqueLockReleaseWindow const&);
    UniqueLockReleaseWindow(UniqueLockReleaseWindow const&);
    UniqueLockReleaseWindow();
};

} // namespace Bedrock::Threading
