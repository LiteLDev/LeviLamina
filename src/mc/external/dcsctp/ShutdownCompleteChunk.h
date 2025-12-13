#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct ShutdownCompleteChunkConfig; }
// clang-format on

namespace dcsctp {

class ShutdownCompleteChunk : public ::dcsctp::Chunk, public ::dcsctp::TLVTrait<::dcsctp::ShutdownCompleteChunkConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5f08f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ShutdownCompleteChunk& operator=(ShutdownCompleteChunk const&);
    ShutdownCompleteChunk(ShutdownCompleteChunk const&);
    ShutdownCompleteChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~ShutdownCompleteChunk() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::ShutdownCompleteChunk> Parse(::rtc::ArrayView<uchar const> data);
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
