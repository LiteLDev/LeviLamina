#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SdpVideoFormat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8c2b3f;
    ::ll::UntypedStorage<8, 16> mUnk1c642e;
    ::ll::UntypedStorage<8, 48> mUnkf2462f;
    // NOLINTEND

public:
    // prevent constructor by default
    SdpVideoFormat& operator=(SdpVideoFormat const&);
    SdpVideoFormat(SdpVideoFormat const&);
    SdpVideoFormat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool IsSameCodec(::webrtc::SdpVideoFormat const& other) const;

    MCNAPI SdpVideoFormat(::std::string const& name, ::std::map<::std::string, ::std::string> const& parameters);

    MCNAPI ~SdpVideoFormat();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& name, ::std::map<::std::string, ::std::string> const& parameters);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
