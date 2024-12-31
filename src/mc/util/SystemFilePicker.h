#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IFilePicker.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Core { class Path; }
// clang-format on

class SystemFilePicker : public ::IFilePicker, public ::std::enable_shared_from_this<::SystemFilePicker> {
public:
    // prevent constructor by default
    SystemFilePicker& operator=(SystemFilePicker const&);
    SystemFilePicker(SystemFilePicker const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SystemFilePicker() /*override*/ = default;

    // vIndex: 1
    virtual void
    initFilePick(::Core::Path const& filePath, ::std::function<void(bool, ::FileInfo)> callback) /*override*/;

    // vIndex: 2
    virtual uint64
    readBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar>& buffer) /*override*/;

    // vIndex: 3
    virtual bool writeBytes(
        ::FileInfo const&           file,
        uint64                      offset,
        uint64                      bufferSize,
        ::std::vector<uchar> const& buffer
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SystemFilePicker();

    MCAPI ::FileInfo _fillFileInfo(::Core::Path const& filePath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initFilePick(::Core::Path const& filePath, ::std::function<void(bool, ::FileInfo)> callback);

    MCAPI uint64 $readBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar>& buffer);

    MCAPI bool
    $writeBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar> const& buffer);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
