#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameters; }
// clang-format on

namespace dcsctp {

class ReConfigChunk {
public:
    // prevent constructor by default
    ReConfigChunk& operator=(ReConfigChunk const&);
    ReConfigChunk(ReConfigChunk const&);
    ReConfigChunk();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ReConfigChunk(::dcsctp::Parameters);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ReConfigChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::dcsctp::Parameters);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
