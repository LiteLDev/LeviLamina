#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaSenderInfo.h"

namespace cricket {

struct VoiceSenderInfo : public ::cricket::MediaSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk358e9d;
    ::ll::UntypedStorage<4, 4>   mUnk742eeb;
    ::ll::UntypedStorage<8, 8>   mUnk9e2794;
    ::ll::UntypedStorage<8, 8>   mUnk3a796a;
    ::ll::UntypedStorage<4, 56>  mUnk8b8001;
    ::ll::UntypedStorage<8, 112> mUnk14a9b7;
    // NOLINTEND

public:
    // prevent constructor by default
    VoiceSenderInfo& operator=(VoiceSenderInfo const&);
    VoiceSenderInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoiceSenderInfo(::cricket::VoiceSenderInfo const&);

    MCNAPI ~VoiceSenderInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::VoiceSenderInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
