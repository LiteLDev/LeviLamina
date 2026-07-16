#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StunByteStringAttribute; }
namespace webrtc { class StunUInt64Attribute; }
// clang-format on

namespace webrtc {

class StunDictionaryWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf0cbab;
    ::ll::UntypedStorage<8, 8>  mUnk411008;
    ::ll::UntypedStorage<8, 8>  mUnk259f97;
    ::ll::UntypedStorage<8, 24> mUnk5b7267;
    ::ll::UntypedStorage<8, 16> mUnkb73874;
    // NOLINTEND

public:
    // prevent constructor by default
    StunDictionaryWriter& operator=(StunDictionaryWriter const&);
    StunDictionaryWriter(StunDictionaryWriter const&);
    StunDictionaryWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ApplyDeltaAck(::webrtc::StunUInt64Attribute const& ack);

    MCNAPI ::std::unique_ptr<::webrtc::StunByteStringAttribute> CreateDelta();

    MCNAPI void Disable();

    MCNAPI ~StunDictionaryWriter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
