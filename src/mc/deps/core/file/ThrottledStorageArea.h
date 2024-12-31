#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/BasicDirectoryStorageArea.h"
#include "mc/deps/core/file/FileAccessType.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace Core { class FileSystemImpl; }
namespace Core { class ThrottledFileSystem; }
// clang-format on

namespace Core {

class ThrottledStorageArea : public ::Core::BasicDirectoryStorageArea<::Core::ThrottledFileSystem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1a9a2d;
    ::ll::UntypedStorage<8, 8>  mUnk7d5463;
    ::ll::UntypedStorage<1, 1>  mUnk8fa819;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledStorageArea& operator=(ThrottledStorageArea const&);
    ThrottledStorageArea(ThrottledStorageArea const&);
    ThrottledStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThrottledStorageArea() /*override*/ = default;

    // vIndex: 2
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;

    // vIndex: 20
    virtual void tick() /*override*/;

    // vIndex: 21
    virtual void flushImmediately() /*override*/;

    // vIndex: 33
    virtual void _onTeardown() /*override*/;

    // vIndex: 34
    virtual void _initialize(::Scheduler&, ::WorkerPool&);

    // vIndex: 35
    virtual void _finalize();
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
