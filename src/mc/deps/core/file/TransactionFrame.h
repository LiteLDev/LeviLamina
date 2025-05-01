#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Core {

class TransactionFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>   mUnkdaefae;
    ::ll::UntypedStorage<8, 1032> mUnk7de07b;
    ::ll::UntypedStorage<8, 80>   mUnkc9a957;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionFrame& operator=(TransactionFrame const&);
    TransactionFrame(TransactionFrame const&);
    TransactionFrame();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransactionFrame(::Core::FileAccessType accessType, ::Core::PathView path);

    MCNAPI ~TransactionFrame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FileAccessType accessType, ::Core::PathView path);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
