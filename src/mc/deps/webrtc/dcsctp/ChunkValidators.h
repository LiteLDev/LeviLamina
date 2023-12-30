#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class SackChunk; }
// clang-format on

namespace dcsctp {

class ChunkValidators {
public:
    // prevent constructor by default
    ChunkValidators& operator=(ChunkValidators const&);
    ChunkValidators(ChunkValidators const&);
    ChunkValidators();

public:
    // NOLINTBEGIN
    // symbol: ?Clean@ChunkValidators@dcsctp@@SA?AVSackChunk@2@$$QEAV32@@Z
    MCAPI static class dcsctp::SackChunk Clean(class dcsctp::SackChunk&&);

    // symbol: ?Validate@ChunkValidators@dcsctp@@SA_NAEBVSackChunk@2@@Z
    MCAPI static bool Validate(class dcsctp::SackChunk const&);

    // NOLINTEND
};

}; // namespace dcsctp
