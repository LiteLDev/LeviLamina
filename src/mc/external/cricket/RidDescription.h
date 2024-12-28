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
    MCAPI RidDescription();

    MCAPI RidDescription(::cricket::RidDescription const&);

    MCAPI RidDescription(::std::string const&, ::cricket::RidDirection);

    MCAPI ::cricket::RidDescription& operator=(::cricket::RidDescription const&);

    MCAPI ~RidDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::RidDescription const&);

    MCAPI void* $ctor(::std::string const&, ::cricket::RidDirection);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
