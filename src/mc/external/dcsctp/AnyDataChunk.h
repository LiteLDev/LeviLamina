#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class ImmediateAckFlagTag; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct Data; }
// clang-format on

namespace dcsctp {

class AnyDataChunk : public ::dcsctp::Chunk {
public:
    // AnyDataChunk inner types declare
    // clang-format off
    struct Options;
    // clang-format on

    // AnyDataChunk inner types define
    struct Options {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnke32c2a;
        ::ll::UntypedStorage<1, 1> mUnkfee44d;
        ::ll::UntypedStorage<1, 1> mUnkd0fd09;
        ::ll::UntypedStorage<1, 1> mUnkb34b5e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Options& operator=(Options const&);
        Options(Options const&);
        Options();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk141880;
    ::ll::UntypedStorage<8, 48> mUnke2d7e9;
    ::ll::UntypedStorage<1, 1>  mUnk5986f0;
    // NOLINTEND

public:
    // prevent constructor by default
    AnyDataChunk& operator=(AnyDataChunk const&);
    AnyDataChunk(AnyDataChunk const&);
    AnyDataChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnyDataChunk() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnyDataChunk(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> tsn, ::dcsctp::Data data, bool immediate_ack);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> tsn, ::dcsctp::Data data, bool immediate_ack);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
