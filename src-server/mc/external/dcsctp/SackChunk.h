#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/dcsctp/TLVTrait.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TSNTag; }
namespace dcsctp { struct SackChunkConfig; }
// clang-format on

namespace dcsctp {

class SackChunk : public ::dcsctp::Chunk, public ::dcsctp::TLVTrait<::dcsctp::SackChunkConfig> {
public:
    // SackChunk inner types declare
    // clang-format off
    struct GapAckBlock;
    // clang-format on
    
    // SackChunk inner types define
    struct GapAckBlock {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnk73c7ea;
        ::ll::UntypedStorage<2, 2> mUnk37a68e;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        GapAckBlock& operator=(GapAckBlock const&);
        GapAckBlock(GapAckBlock const&);
        GapAckBlock();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk67c613;
    ::ll::UntypedStorage<4, 4> mUnkfd7970;
    ::ll::UntypedStorage<8, 24> mUnk70e3b0;
    ::ll::UntypedStorage<8, 16> mUnkeb8073;
    // NOLINTEND

public:
    // prevent constructor by default
    SackChunk& operator=(SackChunk const&);
    SackChunk(SackChunk const&);
    SackChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~SackChunk() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SackChunk(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> cumulative_tsn_ack, uint a_rwnd, ::std::vector<::dcsctp::SackChunk::GapAckBlock> gap_ack_blocks, ::std::set<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> duplicate_tsns);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::SackChunk> Parse(::rtc::ArrayView<uchar const> data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::TSNTag, uint> cumulative_tsn_ack, uint a_rwnd, ::std::vector<::dcsctp::SackChunk::GapAckBlock> gap_ack_blocks, ::std::set<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>> duplicate_tsns);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SerializeTo(::std::vector<uchar>& out) const;

    MCNAPI ::std::string $ToString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
