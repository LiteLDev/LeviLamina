#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
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
    MCAPI TransactionFrame(::Core::FileAccessType accessType, ::Core::Path const& path);

    MCAPI ~TransactionFrame();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::FileAccessType accessType, ::Core::Path const& path);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
