#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { enum class WriteOperation; }
// clang-format on

namespace Core {

class DiskAccessTracker {

public:
    // prevent constructor by default
    DiskAccessTracker& operator=(DiskAccessTracker const&) = delete;
    DiskAccessTracker(DiskAccessTracker const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0DiskAccessTracker\@Core\@\@QEAA\@XZ
     */
    MCAPI DiskAccessTracker();
    /**
     * @symbol ?addIgnoredPath\@DiskAccessTracker\@Core\@\@QEAAXAEBVPath\@2\@\@Z
     */
    MCAPI void addIgnoredPath(class Core::Path const&);
    /**
     * @symbol ?getDiskAccessTracker\@DiskAccessTracker\@Core\@\@SAAEAV12\@XZ
     */
    MCAPI static class Core::DiskAccessTracker& getDiskAccessTracker();
    /**
     * @symbol ?trackWriteAmount\@DiskAccessTracker\@Core\@\@QEAAXAEBVPath\@2\@_KW4WriteOperation\@2\@\@Z
     */
    MCAPI void trackWriteAmount(class Core::Path const&, uint64_t, enum class Core::WriteOperation);
    /**
     * @symbol ?trackWriteOperation\@DiskAccessTracker\@Core\@\@QEAAXAEBVPath\@2\@W4WriteOperation\@2\@\@Z
     */
    MCAPI void trackWriteOperation(class Core::Path const&, enum class Core::WriteOperation);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_addNewWriteOperation\@DiskAccessTracker\@Core\@\@AEAAX_KW4WriteOperation\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI void _addNewWriteOperation(uint64_t, enum class Core::WriteOperation, class Core::Path const&);
    // NOLINTEND
};

}; // namespace Core
