#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileAccessType.h"

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
    // symbol: ??1TransactionFrame@Core@@QEAA@XZ
    MCAPI ~TransactionFrame();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0TransactionFrame@Core@@AEAA@W4FileAccessType@1@AEBVPath@1@@Z
    MCAPI TransactionFrame(::Core::FileAccessType accessType, class Core::Path const& path);

    // NOLINTEND
};

}; // namespace Core
