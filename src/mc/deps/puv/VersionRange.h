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
    MCAPI VersionRange(class Puv::VersionRange const&);

    MCAPI VersionRange(class SemVersion, class SemVersion, ::Puv::RangeType);

    MCAPI bool contains(class SemVersion const&) const;

    MCAPI ~VersionRange();

    // NOLINTEND
};

}; // namespace Puv
