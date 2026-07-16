#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaSenderInfo.h"

namespace webrtc {

struct VoiceSenderInfo : public ::webrtc::MediaSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk50122a;
    ::ll::UntypedStorage<4, 4>   mUnk9b7fbf;
    ::ll::UntypedStorage<8, 8>   mUnk654019;
    ::ll::UntypedStorage<8, 8>   mUnk8433ea;
    ::ll::UntypedStorage<4, 56>  mUnk35ee6b;
    ::ll::UntypedStorage<8, 112> mUnk6af1e8;
    // NOLINTEND

public:
    // prevent constructor by default
    VoiceSenderInfo(VoiceSenderInfo const&);
    VoiceSenderInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::VoiceSenderInfo& operator=(::webrtc::VoiceSenderInfo const&);

    MCNAPI ~VoiceSenderInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
