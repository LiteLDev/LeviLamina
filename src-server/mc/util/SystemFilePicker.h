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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SystemFilePicker() /*override*/ = default;

    // vIndex: 1
    virtual void initFilePick(::Core::Path const& filePath, ::std::function<void(bool, ::FileInfo)> callback) /*override*/;

    // vIndex: 2
    virtual uint64 readBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar>& buffer) /*override*/;

    // vIndex: 3
    virtual bool writeBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar> const& buffer) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::FileInfo _fillFileInfo(::Core::Path const& filePath);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initFilePick(::Core::Path const& filePath, ::std::function<void(bool, ::FileInfo)> callback);

    MCNAPI uint64 $readBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar>& buffer);

    MCNAPI bool $writeBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar> const& buffer);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
