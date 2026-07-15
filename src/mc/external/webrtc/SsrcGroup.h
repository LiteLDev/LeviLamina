#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SsrcGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4aa024;
    ::ll::UntypedStorage<8, 24> mUnk64fdf5;
    // NOLINTEND

public:
    // prevent constructor by default
    SsrcGroup& operator=(SsrcGroup const&);
    SsrcGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SsrcGroup(::webrtc::SsrcGroup&&);

    MCNAPI SsrcGroup(::webrtc::SsrcGroup const&);

    MCNAPI SsrcGroup(::std::string const& usage, ::std::vector<uint> const& ssrcs);

    MCNAPI ~SsrcGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SsrcGroup&&);

    MCNAPI void* $ctor(::webrtc::SsrcGroup const&);

    MCNAPI void* $ctor(::std::string const& usage, ::std::vector<uint> const& ssrcs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
