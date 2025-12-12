#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileStorageArea.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class TestMemoryStorageArea : public ::Core::MemoryFileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk794e65;
    // NOLINTEND

public:
    // prevent constructor by default
    TestMemoryStorageArea& operator=(TestMemoryStorageArea const&);
    TestMemoryStorageArea(TestMemoryStorageArea const&);
    TestMemoryStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;

    virtual bool supportsSizeQuery() const /*override*/;

    virtual ::Core::Result getUsedSize(uint64&) /*override*/;

    virtual uint64 getTotalSize() const /*override*/;

    virtual bool supportsExtendSize() const /*override*/;

    virtual bool canExtendSize() const /*override*/;

    virtual void preemptiveExtendSize(
        uint64 const            expectedContentSize,
        ::std::function<void()> successCallback,
        ::std::function<void()> failureCallback
    ) /*override*/;

    virtual ~TestMemoryStorageArea() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
