#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DataChannelInit.h"

namespace webrtc {

struct InternalDataChannelInit : public ::webrtc::DataChannelInit {
public:
    // InternalDataChannelInit inner types define
    enum class OpenHandshakeRole : int {
        KOpener = 0,
        KAcker  = 1,
        KNone   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd3938c;
    ::ll::UntypedStorage<4, 8> mUnk2ddbe7;
    // NOLINTEND

public:
    // prevent constructor by default
    InternalDataChannelInit& operator=(InternalDataChannelInit const&);
    InternalDataChannelInit(InternalDataChannelInit const&);
    InternalDataChannelInit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InternalDataChannelInit(::webrtc::DataChannelInit const& base);

    MCNAPI bool IsValid() const;

    MCNAPI ~InternalDataChannelInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::DataChannelInit const& base);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
