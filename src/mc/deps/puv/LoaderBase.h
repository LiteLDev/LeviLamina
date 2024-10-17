#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class LoadResultAny; }
namespace Puv { class ParserBase; }
namespace Puv { class Upgrader; }
// clang-format on

namespace Puv::internal {

class LoaderBase {
public:
    // prevent constructor by default
    LoaderBase& operator=(LoaderBase const&);
    LoaderBase(LoaderBase const&);
    LoaderBase();

public:
    // NOLINTBEGIN
    MCAPI void registerParser(std::unique_ptr<class Puv::ParserBase> parser);

    MCAPI void registerUpgrader(std::unique_ptr<class Puv::Upgrader> upgrader);

    MCAPI ~LoaderBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Puv::LoadResultAny doLoad(std::string const& input, class SemVersion const& parserVersion) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::internal
