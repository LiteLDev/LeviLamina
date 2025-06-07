#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/WriteOperation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Core {

class DiskAccessTracker {
public:
    // DiskAccessTracker inner types declare
    // clang-format off
    struct TrackerStats;
    struct WriteOperation;
    // clang-format on

    // DiskAccessTracker inner types define
    struct TrackerStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk7f81a1;
        ::ll::UntypedStorage<8, 8> mUnk3f64a1;
        ::ll::UntypedStorage<4, 4> mUnkbd5b4c;
        ::ll::UntypedStorage<1, 1> mUnkf1891e;
        // NOLINTEND

    public:
        // prevent constructor by default
        TrackerStats& operator=(TrackerStats const&);
        TrackerStats(TrackerStats const&);
        TrackerStats();
    };

    struct WriteOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk45f898;
        ::ll::UntypedStorage<8, 8> mUnk8312bc;
        ::ll::UntypedStorage<4, 4> mUnk444d81;
        // NOLINTEND

    public:
        // prevent constructor by default
        WriteOperation& operator=(WriteOperation const&);
        WriteOperation(WriteOperation const&);
        WriteOperation();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkce5dfc;
    ::ll::UntypedStorage<8, 16> mUnka6e7fd;
    ::ll::UntypedStorage<8, 16> mUnk81e3dd;
    ::ll::UntypedStorage<8, 16> mUnk164044;
    ::ll::UntypedStorage<8, 56> mUnk893e32;
    ::ll::UntypedStorage<8, 8>  mUnk3bd5a4;
    ::ll::UntypedStorage<8, 8>  mUnk3d002f;
    ::ll::UntypedStorage<8, 80> mUnka734d7;
    ::ll::UntypedStorage<8, 80> mUnk37a284;
    ::ll::UntypedStorage<1, 1>  mUnk51bb1c;
    // NOLINTEND

public:
    // prevent constructor by default
    DiskAccessTracker& operator=(DiskAccessTracker const&);
    DiskAccessTracker(DiskAccessTracker const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiskAccessTracker();

    MCNAPI void _addNewWriteOperation(uint64 amount, ::Core::WriteOperation writeOperation, ::Core::PathView path);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::DiskAccessTracker& getDiskAccessTracker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Core
