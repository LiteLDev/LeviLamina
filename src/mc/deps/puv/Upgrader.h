#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class LoadResultAny; }
// clang-format on

namespace Puv {

class Upgrader {

public:
    // prevent constructor by default
    Upgrader& operator=(Upgrader const&) = delete;
    Upgrader(Upgrader const&)            = delete;
    Upgrader()                           = delete;

public:
    /**
     * @symbol ??0Upgrader\@Puv\@\@QEAA\@VSemVersion\@\@0\@Z
     */
    MCAPI Upgrader(class SemVersion, class SemVersion); // NOLINT
    /**
     * @symbol ?sourceVersion\@Upgrader\@Puv\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& sourceVersion() const; // NOLINT
    /**
     * @symbol ?targetVersion\@Upgrader\@Puv\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const& targetVersion() const; // NOLINT
    /**
     * @symbol ?upgrade\@Upgrader\@Puv\@\@QEBA?AVLoadResultAny\@2\@V32\@\@Z
     */
    MCAPI class Puv::LoadResultAny upgrade(class Puv::LoadResultAny) const; // NOLINT
};

}; // namespace Puv
