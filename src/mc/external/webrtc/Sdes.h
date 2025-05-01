#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Sdes {
public:
    // Sdes inner types declare
    // clang-format off
    struct Chunk;
    // clang-format on

    // Sdes inner types define
    struct Chunk {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Chunk();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddCName(uint, ::std::string_view);

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCNAPI Sdes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
