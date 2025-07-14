#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TSNTag; }
// clang-format on

namespace dcsctp {

class AnyForwardTsnChunk : public ::dcsctp::Chunk {
public:
    // AnyForwardTsnChunk inner types declare
    // clang-format off
    struct SkippedStream;
    // clang-format on

    // AnyForwardTsnChunk inner types define
    struct SkippedStream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnk73dbf3;
        ::ll::UntypedStorage<2, 2> mUnk301ca5;
        ::ll::UntypedStorage<1, 1> mUnkdd294b;
        ::ll::UntypedStorage<4, 4> mUnk5e6698;
        // NOLINTEND

    public:
        // prevent constructor by default
        SkippedStream& operator=(SkippedStream const&);
        SkippedStream(SkippedStream const&);
        SkippedStream();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk24e7c4;
    ::ll::UntypedStorage<8, 24> mUnke2548a;
    // NOLINTEND

public:
    // prevent constructor by default
    AnyForwardTsnChunk& operator=(AnyForwardTsnChunk const&);
    AnyForwardTsnChunk(AnyForwardTsnChunk const&);
    AnyForwardTsnChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AnyForwardTsnChunk() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnyForwardTsnChunk(
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>              new_cumulative_tsn,
        ::std::vector<::dcsctp::AnyForwardTsnChunk::SkippedStream> skipped_streams
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::StrongAlias<::dcsctp::TSNTag, uint>              new_cumulative_tsn,
        ::std::vector<::dcsctp::AnyForwardTsnChunk::SkippedStream> skipped_streams
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
