#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class VersionRange; }
// clang-format on

namespace Puv {

class ParserBase {
public:
    // prevent constructor by default
    ParserBase& operator=(ParserBase const&);
    ParserBase(ParserBase const&);
    ParserBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParserBase();

    MCAPI ParserBase(class SemVersion, class Puv::VersionRange);

    MCAPI class SemVersion const& parserVersion() const;

    MCAPI class Puv::VersionRange const& supportedVersions() const;

    // NOLINTEND
};

}; // namespace Puv
