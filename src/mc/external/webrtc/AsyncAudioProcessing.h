#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

namespace webrtc {

class AsyncAudioProcessing {
public:
    // AsyncAudioProcessing inner types declare
    // clang-format off
    class Factory;
    // clang-format on

    // AsyncAudioProcessing inner types define
    class Factory : public ::webrtc::RefCountInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkaba4b2;
        ::ll::UntypedStorage<8, 8> mUnkcdedf9;
        ::ll::UntypedStorage<8, 8> mUnk11974f;
        // NOLINTEND

    public:
        // prevent constructor by default
        Factory& operator=(Factory const&);
        Factory(Factory const&);
        Factory();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual ~Factory() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkacc244;
    ::ll::UntypedStorage<8, 8>  mUnk2c476e;
    ::ll::UntypedStorage<8, 8>  mUnke7cf71;
    ::ll::UntypedStorage<8, 8>  mUnkbf2f68;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncAudioProcessing& operator=(AsyncAudioProcessing const&);
    AsyncAudioProcessing(AsyncAudioProcessing const&);
    AsyncAudioProcessing();
};

} // namespace webrtc
