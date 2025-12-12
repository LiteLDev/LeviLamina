#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/AnyForwardTsnChunk.h"
#include "mc/external/dcsctp/TLVTrait.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { struct IForwardTsnChunkConfig; }
// clang-format on

namespace dcsctp {

class IForwardTsnChunk : public ::dcsctp::AnyForwardTsnChunk,
                         public ::dcsctp::TLVTrait<::dcsctp::IForwardTsnChunkConfig> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SerializeTo(::std::vector<uchar>& out) const /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual ~IForwardTsnChunk() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::IForwardTsnChunk> Parse(::rtc::ArrayView<uchar const> data);
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
