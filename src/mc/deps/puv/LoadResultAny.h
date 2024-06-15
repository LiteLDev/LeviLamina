#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class Logger; }
// clang-format on

namespace Puv {

class LoadResultAny {
public:
    // prevent constructor by default
    LoadResultAny& operator=(LoadResultAny const&);
    LoadResultAny(LoadResultAny const&);
    LoadResultAny();

public:
    // NOLINTBEGIN
    // symbol: ??0LoadResultAny@Puv@@QEAA@$$QEAV01@@Z
    MCAPI LoadResultAny(class Puv::LoadResultAny&&);

    // symbol: ?log@LoadResultAny@Puv@@QEAAAEAVLogger@2@XZ
    MCAPI class Puv::Logger& log();

    // symbol: ??BLoadResultAny@Puv@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // symbol: ?version@LoadResultAny@Puv@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& version() const;

    // symbol: ??1LoadResultAny@Puv@@QEAA@XZ
    MCAPI ~LoadResultAny();

    // symbol: ?makeError@LoadResultAny@Puv@@SA?AV12@VLogger@2@@Z
    MCAPI static class Puv::LoadResultAny makeError(class Puv::Logger);

    // NOLINTEND
};

}; // namespace Puv
