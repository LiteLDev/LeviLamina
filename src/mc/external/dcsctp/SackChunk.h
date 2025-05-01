#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TSNTag; }
// clang-format on

namespace dcsctp {

class SackChunk {
public:
    // SackChunk inner types declare
    // clang-format off
    struct GapAckBlock;
    // clang-format on

    // SackChunk inner types define
    struct GapAckBlock {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    SackChunk(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, uint, ::std::vector<::dcsctp::SackChunk::GapAckBlock>, ::std::set<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::SackChunk> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::webrtc::StrongAlias<::dcsctp::TSNTag, uint>, uint, ::std::vector<::dcsctp::SackChunk::GapAckBlock>, ::std::set<::webrtc::StrongAlias<::dcsctp::TSNTag, uint>>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
