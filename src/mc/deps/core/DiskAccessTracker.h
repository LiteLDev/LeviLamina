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
    DiskAccessTracker& operator=(DiskAccessTracker const&);
    DiskAccessTracker(DiskAccessTracker const&);

public:
    // NOLINTBEGIN
    // symbol: ??0DiskAccessTracker@Core@@QEAA@XZ
    MCAPI DiskAccessTracker();

    // symbol: ?addIgnoredPath@DiskAccessTracker@Core@@QEAAXAEBVPath@2@@Z
    MCAPI void addIgnoredPath(class Core::Path const& path);

    // symbol: ?getDiskAccessTracker@DiskAccessTracker@Core@@SAAEAV12@XZ
    MCAPI static class Core::DiskAccessTracker& getDiskAccessTracker();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addNewWriteOperation@DiskAccessTracker@Core@@AEAAX_KW4WriteOperation@2@AEBVPath@2@@Z
    MCAPI void _addNewWriteOperation(uint64 amount, ::Core::WriteOperation, class Core::Path const& path);

    // NOLINTEND
};

}; // namespace Core
