#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct HeartbeatAckChunkConfig; }
// clang-format on

namespace dcsctp {

class HeartbeatAckChunk : public ::dcsctp::Chunk, public ::dcsctp::TLVTrait<::dcsctp::HeartbeatAckChunkConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcd26a6;
    // NOLINTEND

public:
    // prevent constructor by default
    HeartbeatAckChunk& operator=(HeartbeatAckChunk const&);
    HeartbeatAckChunk(HeartbeatAckChunk const&);
    HeartbeatAckChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~HeartbeatAckChunk() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::HeartbeatAckChunk> Parse(::rtc::ArrayView<uchar const> data);
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

} // namespace dcsctp
