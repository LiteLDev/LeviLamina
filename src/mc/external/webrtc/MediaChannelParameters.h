#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct MediaChannelParameters {
public:
    // MediaChannelParameters inner types declare
    // clang-format off
    struct RtcpParameters;
    // clang-format on

    // MediaChannelParameters inner types define
    struct RtcpParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk44e80d;
        ::ll::UntypedStorage<1, 1> mUnkaf3c2f;
        // NOLINTEND

    public:
        // prevent constructor by default
        RtcpParameters& operator=(RtcpParameters const&);
        RtcpParameters(RtcpParameters const&);
        RtcpParameters();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2ae76e;
    ::ll::UntypedStorage<8, 24> mUnk3f0671;
    ::ll::UntypedStorage<8, 24> mUnk4a6f92;
    ::ll::UntypedStorage<4, 8>  mUnk160ff9;
    ::ll::UntypedStorage<1, 1>  mUnk51d4ad;
    ::ll::UntypedStorage<1, 2>  mUnk65a098;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaChannelParameters();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaChannelParameters() = default;

    virtual ::std::map<::std::string, ::std::string> ToStringMap() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MediaChannelParameters(::webrtc::MediaChannelParameters const&);

    MCNAPI ::webrtc::MediaChannelParameters& operator=(::webrtc::MediaChannelParameters const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::MediaChannelParameters const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::map<::std::string, ::std::string> $ToStringMap() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
