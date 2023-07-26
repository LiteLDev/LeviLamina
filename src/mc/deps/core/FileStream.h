#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class FileStream {

public:
    // prevent constructor by default
    FileStream& operator=(FileStream const&) = delete;
    FileStream(FileStream const&)            = delete;

public:
    /**
     * @symbol ??0FileStream\@Core\@\@QEAA\@AEBVPath\@1\@H\@Z
     */
    MCAPI FileStream(class Core::Path const&, int); // NOLINT
    /**
     * @symbol ??0FileStream\@Core\@\@QEAA\@XZ
     */
    MCAPI FileStream(); // NOLINT
    /**
     * @symbol ?open\@FileStream\@Core\@\@QEAAXAEBVPath\@2\@H\@Z
     */
    MCAPI void open(class Core::Path const&, int); // NOLINT
    /**
     * @symbol ?setLoggingEnabled\@FileStream\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setLoggingEnabled(bool); // NOLINT
};

}; // namespace Core
