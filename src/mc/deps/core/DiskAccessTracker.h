#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { enum class WriteOperation; }
// clang-format on

namespace Core {

class DiskAccessTracker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_DISKACCESSTRACKER
public:
    DiskAccessTracker& operator=(DiskAccessTracker const&) = delete;
    DiskAccessTracker(DiskAccessTracker const&)            = delete;
#endif

public:
    /**
     * @symbol ??0DiskAccessTracker\@Core\@\@QEAA\@XZ
     */
    MCAPI DiskAccessTracker();
    /**
     * @symbol ?addIgnoredPath\@DiskAccessTracker\@Core\@\@QEAAXAEBVPath\@2\@\@Z
     */
    MCAPI void addIgnoredPath(class Core::Path const&);
    /**
     * @symbol ?trackWriteAmount\@DiskAccessTracker\@Core\@\@QEAAXAEBVPath\@2\@_KW4WriteOperation\@2\@\@Z
     */
    MCAPI void trackWriteAmount(class Core::Path const&, unsigned __int64, enum class Core::WriteOperation);
    /**
     * @symbol ?trackWriteOperation\@DiskAccessTracker\@Core\@\@QEAAXAEBVPath\@2\@W4WriteOperation\@2\@\@Z
     */
    MCAPI void trackWriteOperation(class Core::Path const&, enum class Core::WriteOperation);
    /**
     * @symbol ?getDiskAccessTracker\@DiskAccessTracker\@Core\@\@SAAEAV12\@XZ
     */
    MCAPI static class Core::DiskAccessTracker& getDiskAccessTracker();

    // private:
    /**
     * @symbol ?_addNewWriteOperation\@DiskAccessTracker\@Core\@\@AEAAX_KW4WriteOperation\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI void _addNewWriteOperation(unsigned __int64, enum class Core::WriteOperation, class Core::Path const&);

private:
};

}; // namespace Core
