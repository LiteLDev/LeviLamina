#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Debug {

class TrackedDebugDataSource {
public:
    // TrackedDebugDataSource inner types declare
    // clang-format off
    struct StackRecord;
    // clang-format on

    // TrackedDebugDataSource inner types define
    struct StackRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk9b2386;
        ::ll::UntypedStorage<8, 24> mUnkaa26ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        StackRecord& operator=(StackRecord const&);
        StackRecord(StackRecord const&);
        StackRecord();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk723e79;
    ::ll::UntypedStorage<1, 1>  mUnkb927d0;
    ::ll::UntypedStorage<8, 64> mUnk61b992;
    // NOLINTEND

public:
    // prevent constructor by default
    TrackedDebugDataSource& operator=(TrackedDebugDataSource const&);
    TrackedDebugDataSource(TrackedDebugDataSource const&);
    TrackedDebugDataSource();
};

} // namespace Bedrock::Debug
