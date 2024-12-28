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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk1a868c;
    ::ll::UntypedStorage<8, 112> mUnk7084e3;
    ::ll::UntypedStorage<1, 1>   mUnkd68461;
    ::ll::UntypedStorage<1, 1>   mUnk9d6c21;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRange& operator=(VersionRange const&);
    VersionRange();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VersionRange(::Puv::VersionRange&&);

    MCAPI VersionRange(::Puv::VersionRange const&);

    MCAPI VersionRange(::SemVersion const& min, ::SemVersion const& max, ::Puv::RangeType type);

    MCAPI bool contains(::SemVersion const& v) const;

    MCAPI ~VersionRange();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Puv::VersionRange&&);

    MCAPI void* $ctor(::Puv::VersionRange const&);

    MCAPI void* $ctor(::SemVersion const& min, ::SemVersion const& max, ::Puv::RangeType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
