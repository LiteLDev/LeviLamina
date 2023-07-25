#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class LoadResultAny; }
// clang-format on

namespace Puv {

class Upgrader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUV_UPGRADER
public:
    Upgrader& operator=(Upgrader const&) = delete;
    Upgrader(Upgrader const&)            = delete;
    Upgrader()                           = delete;
#endif

public:
    /**
     * @symbol ??0Upgrader\@Puv\@\@QEAA\@VSemVersion\@\@0\@Z
     */
    MCAPI Upgrader(class SemVersion, class SemVersion);
    /**
     * @symbol ?sourceVersion\@Upgrader\@Puv\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& sourceVersion() const;
    /**
     * @symbol ?targetVersion\@Upgrader\@Puv\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& targetVersion() const;
    /**
     * @symbol ?upgrade\@Upgrader\@Puv\@\@QEBA?AVLoadResultAny\@2\@V32\@\@Z
     */
    MCAPI class Puv::LoadResultAny upgrade(class Puv::LoadResultAny) const;
};

}; // namespace Puv
