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

    MCAPI VersionRange(class SemVersion min, class SemVersion max, ::Puv::RangeType type);

    MCAPI bool contains(class SemVersion const& v) const;

    MCAPI ~VersionRange();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv
