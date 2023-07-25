#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { struct Logger; }
// clang-format on

namespace Puv {

class LoadResultAny {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUV_LOADRESULTANY
public:
    LoadResultAny& operator=(LoadResultAny const&) = delete;
    LoadResultAny(LoadResultAny const&)            = delete;
    LoadResultAny()                                = delete;
#endif

public:
    /**
     * @symbol ??0LoadResultAny\@Puv\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI LoadResultAny(class Puv::LoadResultAny&&);
    /**
     * @symbol ?log\@LoadResultAny\@Puv\@\@QEAAAEAULogger\@2\@XZ
     */
    MCAPI struct Puv::Logger& log();
    /**
     * @symbol ??BLoadResultAny\@Puv\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @symbol ?version\@LoadResultAny\@Puv\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& version() const;
    /**
     * @symbol ??1LoadResultAny\@Puv\@\@QEAA\@XZ
     */
    MCAPI ~LoadResultAny();
    /**
     * @symbol ?makeError\@LoadResultAny\@Puv\@\@SA?AV12\@ULogger\@2\@\@Z
     */
    MCAPI static class Puv::LoadResultAny makeError(struct Puv::Logger);
};

}; // namespace Puv
