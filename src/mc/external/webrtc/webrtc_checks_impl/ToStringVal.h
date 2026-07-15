#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::webrtc_checks_impl {

struct ToStringVal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfdc4e9;
    // NOLINTEND

public:
    // prevent constructor by default
    ToStringVal& operator=(ToStringVal const&);
    ToStringVal(ToStringVal const&);
    ToStringVal();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string const* GetVal() const;

    MCNAPI ~ToStringVal();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::webrtc_checks_impl
