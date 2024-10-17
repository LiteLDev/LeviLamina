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

    MCAPI ParserBase(class SemVersion parserVersion, class Puv::VersionRange supportedVersions);

    MCAPI class SemVersion const& parserVersion() const;

    MCAPI class Puv::VersionRange const& supportedVersions() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class SemVersion parserVersion, class Puv::VersionRange supportedVersions);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv
