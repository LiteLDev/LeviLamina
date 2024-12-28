#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameters; }
// clang-format on

namespace dcsctp {

class ErrorChunk {
public:
    // prevent constructor by default
    ErrorChunk& operator=(ErrorChunk const&);
    ErrorChunk(ErrorChunk const&);
    ErrorChunk();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ErrorChunk(::dcsctp::Parameters);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::ErrorChunk> Parse(::rtc::ArrayView<uchar const>);
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
