#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace mce {

class FileWatcherNull : public ::Bedrock::EnableNonOwnerReferences {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FileWatcherNull();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileWatcherNull() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit FileWatcherNull(::std::chrono::milliseconds);

    MCFOLD void start();

    MCFOLD void stop();

    MCFOLD uint64 update();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::chrono::milliseconds);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
