#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaStreamInterface; }
// clang-format on

namespace webrtc {

class RtpReceiverInternal {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>
        CreateStreamsFromIds(::std::vector<::std::string>);

    MCAPI static int GenerateUniqueId();
    // NOLINTEND
};

} // namespace webrtc
