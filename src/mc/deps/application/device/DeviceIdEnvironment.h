#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct DeviceIdEnvironment {
public:
    // DeviceIdEnvironment inner types declare
    // clang-format off
    struct RecordPathInfo;
    // clang-format on

    // DeviceIdEnvironment inner types define
    struct RecordPathInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk50ea9a;
        ::ll::UntypedStorage<1, 1>  mUnka4ffc5;
        // NOLINTEND

    public:
        // prevent constructor by default
        RecordPathInfo& operator=(RecordPathInfo const&);
        RecordPathInfo(RecordPathInfo const&);
        RecordPathInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6dcaae;
    ::ll::UntypedStorage<8, 16> mUnk8f1c11;
    ::ll::UntypedStorage<8, 24> mUnkce2b57;
    ::ll::UntypedStorage<8, 64> mUnk69ab47;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdEnvironment& operator=(DeviceIdEnvironment const&);
    DeviceIdEnvironment(DeviceIdEnvironment const&);
    DeviceIdEnvironment();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DeviceIdEnvironment();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
