#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct PathElement; }
// clang-format on

namespace Puv::internal {

struct PathSwapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb0a94f;
    ::ll::UntypedStorage<8, 24> mUnk290eff;
    ::ll::UntypedStorage<1, 1>  mUnkb0d597;
    // NOLINTEND

public:
    // prevent constructor by default
    PathSwapper& operator=(PathSwapper const&);
    PathSwapper(PathSwapper const&);
    PathSwapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void swap(::std::vector<::Puv::internal::PathElement> temp);

    MCNAPI ~PathSwapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
