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
    // vIndex: 0
    virtual ~IFilePicker() = default;

    // vIndex: 1
    virtual void initFilePick(::Core::Path const&, ::std::function<void(bool, ::FileInfo)>) = 0;

    // vIndex: 2
    virtual uint64 readBytes(::FileInfo const&, uint64, uint64, ::std::vector<uchar>&) = 0;

    // vIndex: 3
    virtual bool writeBytes(::FileInfo const&, uint64, uint64, ::std::vector<uchar> const&) = 0;
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
