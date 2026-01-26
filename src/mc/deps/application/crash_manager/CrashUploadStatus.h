#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashUploadStatus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfcf868;
    ::ll::UntypedStorage<8, 32> mUnka70563;
    ::ll::UntypedStorage<8, 32> mUnka81416;
    ::ll::UntypedStorage<8, 32> mUnkd6db4b;
    ::ll::UntypedStorage<8, 32> mUnk6515c6;
    ::ll::UntypedStorage<8, 32> mUnkd66716;
    ::ll::UntypedStorage<8, 8>  mUnkac985e;
    ::ll::UntypedStorage<8, 8>  mUnke83f2e;
    ::ll::UntypedStorage<8, 8>  mUnke1bf8d;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashUploadStatus& operator=(CrashUploadStatus const&);
    CrashUploadStatus(CrashUploadStatus const&);
    CrashUploadStatus();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
