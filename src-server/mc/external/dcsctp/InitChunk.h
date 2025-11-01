#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct InitChunkConfig; }
// clang-format on

namespace dcsctp {

class InitChunk : public ::dcsctp::Chunk, public ::dcsctp::TLVTrait<::dcsctp::InitChunkConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkee7807;
    ::ll::UntypedStorage<4, 4> mUnkcea217;
    ::ll::UntypedStorage<2, 2> mUnk9420ef;
    ::ll::UntypedStorage<2, 2> mUnk64b350;
    ::ll::UntypedStorage<4, 4> mUnk4b9b3c;
    ::ll::UntypedStorage<8, 24> mUnkca0ea8;
    // NOLINTEND

public:
    // prevent constructor by default
    InitChunk& operator=(InitChunk const&);
    InitChunk(InitChunk const&);
    InitChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~InitChunk() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::InitChunk> Parse(::rtc::ArrayView<uchar const> data);
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
