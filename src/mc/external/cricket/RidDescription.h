#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/RidDirection.h"

namespace cricket {

struct RidDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaf5714;
    ::ll::UntypedStorage<4, 4>  mUnkdfb901;
    ::ll::UntypedStorage<8, 24> mUnk222ffa;
    ::ll::UntypedStorage<8, 16> mUnkf8adf6;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RidDescription();

    MCNAPI RidDescription(::cricket::RidDescription const&);

    MCNAPI RidDescription(::std::string const& rid, ::cricket::RidDirection direction);

    MCNAPI ::cricket::RidDescription& operator=(::cricket::RidDescription const&);

    MCNAPI ~RidDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::RidDescription const&);

    MCNAPI void* $ctor(::std::string const& rid, ::cricket::RidDirection direction);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
