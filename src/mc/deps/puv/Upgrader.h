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
    Upgrader& operator=(Upgrader const&);
    Upgrader(Upgrader const&);
    Upgrader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Upgrader@Puv@@UEAA@XZ
    virtual ~Upgrader();

    // symbol: ??0Upgrader@Puv@@QEAA@VSemVersion@@0@Z
    MCAPI Upgrader(class SemVersion, class SemVersion);

    // symbol: ?sourceVersion@Upgrader@Puv@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& sourceVersion() const;

    // symbol: ?targetVersion@Upgrader@Puv@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& targetVersion() const;

    // symbol: ?upgrade@Upgrader@Puv@@QEBA?AVLoadResultAny@2@V32@@Z
    MCAPI class Puv::LoadResultAny upgrade(class Puv::LoadResultAny) const;

    // NOLINTEND
};

}; // namespace Puv
