#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
// clang-format on

namespace dcsctp {

class AnyDataChunk {
public:
    // prevent constructor by default
    AnyDataChunk& operator=(AnyDataChunk const&);
    AnyDataChunk(AnyDataChunk const&);
    AnyDataChunk();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnyDataChunk(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, ::dcsctp::Data, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
