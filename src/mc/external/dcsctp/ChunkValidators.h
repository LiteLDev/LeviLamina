#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class SackChunk; }
// clang-format on

namespace dcsctp {

struct ChunkValidators {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dcsctp::SackChunk Clean(::dcsctp::SackChunk&&);

    MCNAPI static bool Validate(::dcsctp::SackChunk const&);
    // NOLINTEND
};

} // namespace dcsctp
