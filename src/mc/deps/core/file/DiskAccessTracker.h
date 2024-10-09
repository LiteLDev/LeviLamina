#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/WriteOperation.h"

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
    MCAPI DiskAccessTracker();

    MCAPI void addIgnoredPath(class Core::Path const& path);

    MCAPI static class Core::DiskAccessTracker& getDiskAccessTracker();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _addNewWriteOperation(uint64 amount, ::Core::WriteOperation writeOperation, class Core::Path const& path);

    // NOLINTEND
};

}; // namespace Core
