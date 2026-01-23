#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct PathElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4e5dd3;
    ::ll::UntypedStorage<4, 4>  mUnk38da85;
    ::ll::UntypedStorage<8, 32> mUnk42ac2b;
    ::ll::UntypedStorage<4, 4>  mUnkec9b9a;
    // NOLINTEND

public:
    // prevent constructor by default
    PathElement& operator=(PathElement const&);
    PathElement(PathElement const&);
    PathElement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PathElement();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& WILDCARD_STRING_VIEW();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
