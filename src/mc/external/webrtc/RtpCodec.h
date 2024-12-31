#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpCodec {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke76fb9;
    ::ll::UntypedStorage<4, 4>  mUnkf0367e;
    ::ll::UntypedStorage<4, 8>  mUnk692631;
    ::ll::UntypedStorage<4, 8>  mUnk9494d1;
    ::ll::UntypedStorage<8, 24> mUnk969709;
    ::ll::UntypedStorage<8, 16> mUnkee4baf;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpCodec() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool IsMediaCodec() const;

    MCAPI bool IsResiliencyCodec() const;

    MCAPI RtpCodec();

    MCAPI RtpCodec(::webrtc::RtpCodec const&);

    MCAPI ::std::string mime_type() const;

    MCAPI ::webrtc::RtpCodec& operator=(::webrtc::RtpCodec const&);

    MCAPI bool operator==(::webrtc::RtpCodec const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::RtpCodec const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
