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
    // prevent constructor by default
    TransactionFrame& operator=(TransactionFrame const&);
    TransactionFrame(TransactionFrame const&);
    TransactionFrame();

public:
    // NOLINTBEGIN
    MCAPI ~TransactionFrame();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI TransactionFrame(::Core::FileAccessType accessType, class Core::Path const& path);

    // NOLINTEND
};

}; // namespace Core
