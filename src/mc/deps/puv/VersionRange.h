#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/RangeType.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace Puv {

class VersionRange {
public:
    // prevent constructor by default
    VersionRange& operator=(VersionRange const&);
    VersionRange();

public:
    // NOLINTBEGIN
    // symbol: ??0VersionRange@Puv@@QEAA@AEBV01@@Z
    MCAPI VersionRange(class Puv::VersionRange const&);

    // symbol: ??0VersionRange@Puv@@QEAA@VSemVersion@@0W4RangeType@1@@Z
    MCAPI VersionRange(class SemVersion, class SemVersion, ::Puv::RangeType);

    // symbol: ?contains@VersionRange@Puv@@QEBA_NAEBVSemVersion@@@Z
    MCAPI bool contains(class SemVersion const&) const;

    // symbol: ??1VersionRange@Puv@@QEAA@XZ
    MCAPI ~VersionRange();

    // NOLINTEND
};

}; // namespace Puv
