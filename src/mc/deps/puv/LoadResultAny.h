#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { struct Logger; }
// clang-format on

namespace Puv {

class LoadResultAny {

public:
    // prevent constructor by default
    LoadResultAny& operator=(LoadResultAny const&) = delete;
    LoadResultAny(LoadResultAny const&)            = delete;
    LoadResultAny()                                = delete;

public:
    /**
     * @symbol ??0LoadResultAny\@Puv\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI LoadResultAny(class Puv::LoadResultAny&&); // NOLINT
    /**
     * @symbol ?log\@LoadResultAny\@Puv\@\@QEAAAEAULogger\@2\@XZ
     */
    MCAPI struct Puv::Logger& log(); // NOLINT
    /**
     * @symbol ??BLoadResultAny\@Puv\@\@QEBA_NXZ
     */
    MCAPI operator bool() const; // NOLINT
    /**
     * @symbol ?version\@LoadResultAny\@Puv\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& version() const; // NOLINT
    /**
     * @symbol ??1LoadResultAny\@Puv\@\@QEAA\@XZ
     */
    MCAPI ~LoadResultAny(); // NOLINT
    /**
     * @symbol ?makeError\@LoadResultAny\@Puv\@\@SA?AV12\@ULogger\@2\@\@Z
     */
    MCAPI static class Puv::LoadResultAny makeError(struct Puv::Logger); // NOLINT
};

}; // namespace Puv
