#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Core { class Path; }
// clang-format on

class IFilePicker {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFilePicker() = default;

    virtual void initFilePick(::Core::Path const& filePath, ::std::function<void(bool, ::FileInfo)> callback) = 0;

    virtual uint64
    readBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar>& buffer) = 0;

    virtual bool
    writeBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar> const& buffer) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
