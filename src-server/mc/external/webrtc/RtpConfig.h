#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpConfig {
public:
    // RtpConfig inner types declare
    // clang-format off
    struct Flexfec;
    struct Rtx;
    // clang-format on
    
    // RtpConfig inner types define
    struct Flexfec {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk75bd38;
        ::ll::UntypedStorage<4, 4> mUnka37e51;
        ::ll::UntypedStorage<8, 24> mUnkdc2441;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Flexfec& operator=(Flexfec const&);
        Flexfec();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Flexfec(::webrtc::RtpConfig::Flexfec const&);
    
        MCNAPI ~Flexfec();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::RtpConfig::Flexfec const&);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    struct Rtx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkd18709;
        ::ll::UntypedStorage<4, 4> mUnk65e3b1;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Rtx& operator=(Rtx const&);
        Rtx();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Rtx(::webrtc::RtpConfig::Rtx const&);
    
        MCNAPI ~Rtx();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::RtpConfig::Rtx const&);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4ffe04;
    ::ll::UntypedStorage<8, 24> mUnk541b40;
    ::ll::UntypedStorage<8, 32> mUnk234c1e;
    ::ll::UntypedStorage<4, 4> mUnkbe7ad8;
    ::ll::UntypedStorage<8, 8> mUnkca506a;
    ::ll::UntypedStorage<1, 1> mUnk7035fb;
    ::ll::UntypedStorage<8, 24> mUnkb370d0;
    ::ll::UntypedStorage<8, 32> mUnk9ed1cf;
    ::ll::UntypedStorage<4, 4> mUnkf5e267;
    ::ll::UntypedStorage<1, 1> mUnk9b0d30;
    ::ll::UntypedStorage<1, 1> mUnk44ee85;
    ::ll::UntypedStorage<4, 4> mUnkdc0e80;
    ::ll::UntypedStorage<4, 12> mUnk7e6fb9;
    ::ll::UntypedStorage<8, 32> mUnk8b9c0a;
    ::ll::UntypedStorage<8, 32> mUnk6ef217;
    ::ll::UntypedStorage<8, 32> mUnkab8181;
    ::ll::UntypedStorage<1, 1> mUnk5cd110;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpConfig& operator=(RtpConfig const&);
    RtpConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<uint> GetRtxSsrcAssociatedWithMediaSsrc(uint media_ssrc) const;

    MCNAPI RtpConfig(::webrtc::RtpConfig const&);

    MCNAPI ~RtpConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
