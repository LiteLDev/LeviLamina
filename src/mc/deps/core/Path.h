#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/PathPart.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class Path {

public:
    class PathPart mPath;
    explicit Path(std::string const& a1) { mPath.mUtf8StdString = a1; }

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Path\@Core\@\@QEAA\@XZ
     */
    MCAPI Path();
    /**
     * @symbol ??8Path\@Core\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class Core::Path const&) const;
    /**
     * @symbol ??1Path\@Core\@\@QEAA\@XZ
     */
    MCAPI ~Path();
    /**
     * @symbol ?makeFailure\@Path\@Core\@\@SA?AVResult\@2\@PEBD$$QEAV12\@\@Z
     */
    MCAPI static class Core::Result makeFailure(char const*, class Core::Path&&);
    /**
     * @symbol ?EMPTY\@Path\@Core\@\@2V12\@B
     */
    MCAPI static class Core::Path const EMPTY;
    // NOLINTEND
};

}; // namespace Core
