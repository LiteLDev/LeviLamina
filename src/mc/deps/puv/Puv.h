#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class Logger; }
namespace Puv { class VersionRange; }
namespace cereal { class BasicSerializerContext; }
// clang-format on

namespace Puv {
// functions
// NOLINTBEGIN
MCNAPI ::Puv::Logger makeLogger(::cereal::BasicSerializerContext const& log);

MCNAPI ::std::optional<::SemVersion> pickJsonFormatVersion(::std::string_view input);

MCNAPI ::Puv::VersionRange sanitizeRange(::Puv::VersionRange const& range, ::SemVersion const& currentGameSemVersion);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& PATH_WILDCARD();
// NOLINTEND

} // namespace Puv
