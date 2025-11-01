#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct InitAckChunkConfig; }
// clang-format on

namespace dcsctp {

class InitAckChunk : public ::dcsctp::Chunk, public ::dcsctp::TLVTrait<::dcsctp::InitAckChunkConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb639fd;
    ::ll::UntypedStorage<4, 4> mUnk33b372;
    ::ll::UntypedStorage<2, 2> mUnkd28969;
    ::ll::UntypedStorage<2, 2> mUnk2eed0b;
    ::ll::UntypedStorage<4, 4> mUnk36bdac;
    ::ll::UntypedStorage<8, 24> mUnkd2345a;
    // NOLINTEND

public:
    // prevent constructor by default
    InitAckChunk& operator=(InitAckChunk const&);
    InitAckChunk(InitAckChunk const&);
    InitAckChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~InitAckChunk() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::InitAckChunk> Parse(::rtc::ArrayView<uchar const> data);
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
