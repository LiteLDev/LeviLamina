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
        MCAPI ~Chunk();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool AddCName(uint, ::std::string_view);

    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI Sdes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
