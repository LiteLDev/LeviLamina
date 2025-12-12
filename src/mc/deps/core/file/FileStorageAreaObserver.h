#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Core { class SingleThreadedLock; }
// clang-format on

namespace Core {

class FileStorageAreaObserver : public ::Core::Observer<::Core::FileStorageAreaObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _onBeginWrites() = 0;

    virtual void _onEndWrites() = 0;

    virtual void _onWriteFile(::Core::PathView) = 0;

    virtual void _onDeleteFile(::Core::PathView) = 0;

#ifdef LL_PLAT_S
    virtual ~FileStorageAreaObserver() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FileStorageAreaObserver() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
