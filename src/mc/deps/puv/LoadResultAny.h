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
    MCAPI LoadResultAny(class Puv::LoadResultAny&&);

    MCAPI class Puv::Logger& log();

    MCAPI explicit operator bool() const;

    MCAPI class SemVersion const& version() const;

    MCAPI ~LoadResultAny();

    MCAPI static class Puv::LoadResultAny makeError(class Puv::Logger log);

    // NOLINTEND
};

}; // namespace Puv
