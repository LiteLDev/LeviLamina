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
    // vIndex: 0, symbol: ??1ParserBase@Puv@@UEAA@XZ
    virtual ~ParserBase();

    // symbol: ??0ParserBase@Puv@@QEAA@VSemVersion@@VVersionRange@1@@Z
    MCAPI ParserBase(class SemVersion, class Puv::VersionRange);

    // symbol: ?parserVersion@ParserBase@Puv@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& parserVersion() const;

    // symbol: ?supportedVersions@ParserBase@Puv@@QEBAAEBVVersionRange@2@XZ
    MCAPI class Puv::VersionRange const& supportedVersions() const;

    // NOLINTEND
};

}; // namespace Puv
