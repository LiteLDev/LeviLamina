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
    // vIndex: 0
    virtual ~Upgrader();

    MCAPI Upgrader(class SemVersion, class SemVersion);

    MCAPI class SemVersion const& sourceVersion() const;

    MCAPI class SemVersion const& targetVersion() const;

    MCAPI class Puv::LoadResultAny upgrade(class Puv::LoadResultAny) const;

    // NOLINTEND
};

}; // namespace Puv
