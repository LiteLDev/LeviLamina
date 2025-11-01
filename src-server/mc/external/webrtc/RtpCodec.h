#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpCodec {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke76fb9;
    ::ll::UntypedStorage<4, 4> mUnkf0367e;
    ::ll::UntypedStorage<4, 8> mUnk692631;
    ::ll::UntypedStorage<4, 8> mUnk9494d1;
    ::ll::UntypedStorage<8, 24> mUnk969709;
    ::ll::UntypedStorage<8, 16> mUnkee4baf;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpCodec();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool IsMediaCodec() const;

    MCNAPI bool IsResiliencyCodec() const;

    MCNAPI RtpCodec();

    MCNAPI RtpCodec(::webrtc::RtpCodec const&);

    MCNAPI ::std::string mime_type() const;

    MCNAPI ::webrtc::RtpCodec& operator=(::webrtc::RtpCodec const&);

    MCNAPI bool operator==(::webrtc::RtpCodec const& o) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::RtpCodec const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
