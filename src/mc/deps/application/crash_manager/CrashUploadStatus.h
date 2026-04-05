#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashUploadStatus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb5c8cc;
    ::ll::UntypedStorage<8, 32> mUnk47bd02;
    ::ll::UntypedStorage<8, 32> mUnk948faf;
    ::ll::UntypedStorage<8, 32> mUnk76224f;
    ::ll::UntypedStorage<8, 32> mUnk3295f6;
    ::ll::UntypedStorage<8, 32> mUnk351e83;
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
#ifdef LL_PLAT_C
    MCNAPI ~CrashUploadStatus();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock
