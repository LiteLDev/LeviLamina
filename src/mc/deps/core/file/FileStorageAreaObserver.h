#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class SingleThreadedLock; }
// clang-format on

namespace Core {

class FileStorageAreaObserver : public ::Core::Observer<::Core::FileStorageAreaObserver, ::Core::SingleThreadedLock> {
public:
    // prevent constructor by default
    FileStorageAreaObserver& operator=(FileStorageAreaObserver const&);
    FileStorageAreaObserver(FileStorageAreaObserver const&);
    FileStorageAreaObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void _onBeginWrites() = 0;

    // vIndex: 3
    virtual void _onEndWrites() = 0;

    // vIndex: 4
    virtual void _onWriteFile(::Core::Path const&) = 0;

    // vIndex: 5
    virtual void _onDeleteFile(::Core::Path const&) = 0;

    // vIndex: 0
    virtual ~FileStorageAreaObserver() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
