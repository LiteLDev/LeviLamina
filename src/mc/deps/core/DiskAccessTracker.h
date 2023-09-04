#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/WriteOperation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class DiskAccessTracker {
public:
    // prevent constructor by default
    DiskAccessTracker& operator=(DiskAccessTracker const&) = delete;
    DiskAccessTracker(DiskAccessTracker const&)            = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0DiskAccessTracker@Core@@QEAA@XZ
    MCAPI DiskAccessTracker();

    // symbol: ?addIgnoredPath@DiskAccessTracker@Core@@QEAAXAEBVPath@2@@Z
    MCAPI void addIgnoredPath(class Core::Path const&);

    // symbol: ?trackWriteAmount@DiskAccessTracker@Core@@QEAAXAEBVPath@2@_KW4WriteOperation@2@@Z
    MCAPI void trackWriteAmount(class Core::Path const&, uint64, ::Core::WriteOperation);

    // symbol: ?trackWriteOperation@DiskAccessTracker@Core@@QEAAXAEBVPath@2@W4WriteOperation@2@@Z
    MCAPI void trackWriteOperation(class Core::Path const&, ::Core::WriteOperation);

    // symbol: ?getDiskAccessTracker@DiskAccessTracker@Core@@SAAEAV12@XZ
    MCAPI static class Core::DiskAccessTracker& getDiskAccessTracker();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addNewWriteOperation@DiskAccessTracker@Core@@AEAAX_KW4WriteOperation@2@AEBVPath@2@@Z
    MCAPI void _addNewWriteOperation(uint64, ::Core::WriteOperation, class Core::Path const&);

    // NOLINTEND
};

}; // namespace Core
