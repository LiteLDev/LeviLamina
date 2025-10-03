#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/Chunk.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct ShutdownChunkConfig; }
// clang-format on

namespace dcsctp {

class ShutdownChunk : public ::dcsctp::Chunk, public ::dcsctp::TLVTrait<::dcsctp::ShutdownChunkConfig> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk94ed78;
    // NOLINTEND

public:
    // prevent constructor by default
    ShutdownChunk& operator=(ShutdownChunk const&);
    ShutdownChunk(ShutdownChunk const&);
    ShutdownChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    // vIndex: 2
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 0
    virtual ~ShutdownChunk() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::ShutdownChunk> Parse(::rtc::ArrayView<uchar const> data);
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
