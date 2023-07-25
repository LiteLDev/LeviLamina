#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class FileStream {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_FILESTREAM
public:
    FileStream& operator=(FileStream const&) = delete;
    FileStream(FileStream const&)            = delete;
#endif

public:
    /**
     * @symbol ??0FileStream\@Core\@\@QEAA\@AEBVPath\@1\@H\@Z
     */
    MCAPI FileStream(class Core::Path const&, int);
    /**
     * @symbol ??0FileStream\@Core\@\@QEAA\@XZ
     */
    MCAPI FileStream();
    /**
     * @symbol ?open\@FileStream\@Core\@\@QEAAXAEBVPath\@2\@H\@Z
     */
    MCAPI void open(class Core::Path const&, int);
    /**
     * @symbol ?setLoggingEnabled\@FileStream\@Core\@\@QEAAX_N\@Z
     */
    MCAPI void setLoggingEnabled(bool);
};

}; // namespace Core
