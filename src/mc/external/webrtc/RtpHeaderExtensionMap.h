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
    MCAPI void Deregister(::std::string_view);

    MCAPI ::webrtc::RTPExtensionType GetType(int) const;

    MCAPI bool Register(int, ::webrtc::RTPExtensionType, ::std::string_view);

    MCAPI bool RegisterByUri(int, ::std::string_view);

    MCAPI RtpHeaderExtensionMap();

    MCAPI explicit RtpHeaderExtensionMap(bool);

    MCAPI explicit RtpHeaderExtensionMap(::rtc::ArrayView<::webrtc::RtpExtension const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(bool);

    MCAPI void* $ctor(::rtc::ArrayView<::webrtc::RtpExtension const>);
    // NOLINTEND
};

} // namespace webrtc
