#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioSinkInterface {
public:
    // AudioSinkInterface inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // AudioSinkInterface inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkae8bc6;
        ::ll::UntypedStorage<8, 8> mUnk602eb6;
        ::ll::UntypedStorage<4, 4> mUnk862087;
        ::ll::UntypedStorage<8, 8> mUnk46c8af;
        ::ll::UntypedStorage<4, 4> mUnkea96b4;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AudioSinkInterface();

    // vIndex: 1
    virtual void OnData(::webrtc::AudioSinkInterface::Data const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
