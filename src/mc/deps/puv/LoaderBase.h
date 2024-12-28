#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class Input; }
namespace Puv { class LoadResultAny; }
namespace Puv { class ParserBase; }
namespace Puv { class Upgrader; }
// clang-format on

namespace Puv::internal {

class LoaderBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk18f589;
    ::ll::UntypedStorage<8, 16> mUnkaba29a;
    // NOLINTEND

public:
    // prevent constructor by default
    LoaderBase& operator=(LoaderBase const&);
    LoaderBase(LoaderBase const&);
    LoaderBase();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Puv::LoadResultAny doLoad(::Puv::Input const& input, ::SemVersion const& parserVersion) const;

    MCAPI void registerParser(::std::unique_ptr<::Puv::ParserBase> parser);

    MCAPI void registerUpgrader(::std::unique_ptr<::Puv::Upgrader> upgrader);

    MCAPI ~LoaderBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
