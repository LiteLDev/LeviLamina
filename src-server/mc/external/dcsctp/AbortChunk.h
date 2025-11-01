#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Parameters; }
namespace dcsctp { struct AbortChunkConfig; }
// clang-format on

namespace dcsctp {

class AbortChunk : public ::dcsctp::Chunk, public ::dcsctp::TLVTrait<::dcsctp::AbortChunkConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk871dc6;
    ::ll::UntypedStorage<8, 24> mUnk543052;
    // NOLINTEND

public:
    // prevent constructor by default
    AbortChunk& operator=(AbortChunk const&);
    AbortChunk(AbortChunk const&);
    AbortChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~AbortChunk() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AbortChunk(bool filled_in_verification_tag, ::dcsctp::Parameters error_causes);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::AbortChunk> Parse(::rtc::ArrayView<uchar const> data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool filled_in_verification_tag, ::dcsctp::Parameters error_causes);
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
