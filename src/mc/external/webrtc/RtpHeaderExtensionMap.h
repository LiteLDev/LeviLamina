#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTPExtensionType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace webrtc {

class RtpHeaderExtensionMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 21> mUnkda6daf;
    ::ll::UntypedStorage<1, 1>  mUnkd35303;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpHeaderExtensionMap& operator=(RtpHeaderExtensionMap const&);
    RtpHeaderExtensionMap(RtpHeaderExtensionMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Deregister(::std::string_view);

    MCNAPI ::webrtc::RTPExtensionType GetType(int) const;

    MCNAPI bool Register(int, ::webrtc::RTPExtensionType, ::std::string_view);

    MCNAPI bool RegisterByUri(int, ::std::string_view);

    MCNAPI RtpHeaderExtensionMap();

    MCNAPI explicit RtpHeaderExtensionMap(bool);

    MCNAPI explicit RtpHeaderExtensionMap(::rtc::ArrayView<::webrtc::RtpExtension const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(bool);

    MCNAPI void* $ctor(::rtc::ArrayView<::webrtc::RtpExtension const>);
    // NOLINTEND
};

} // namespace webrtc
