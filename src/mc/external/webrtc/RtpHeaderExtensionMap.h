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
    MCNAPI void Deregister(::std::string_view uri);

    MCNAPI ::webrtc::RTPExtensionType GetType(int id) const;

    MCNAPI bool Register(int id, ::webrtc::RTPExtensionType type, ::std::string_view uri);

    MCNAPI bool RegisterByUri(int id, ::std::string_view uri);

    MCNAPI RtpHeaderExtensionMap();

    MCNAPI explicit RtpHeaderExtensionMap(::rtc::ArrayView<::webrtc::RtpExtension const> extensions);

    MCNAPI explicit RtpHeaderExtensionMap(bool extmap_allow_mixed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::rtc::ArrayView<::webrtc::RtpExtension const> extensions);

    MCNAPI void* $ctor(bool extmap_allow_mixed);
    // NOLINTEND
};

} // namespace webrtc
