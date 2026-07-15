#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DataChannelEventObserverInterface {
public:
    // DataChannelEventObserverInterface inner types declare
    // clang-format off
    class Message;
    // clang-format on

    // DataChannelEventObserverInterface inner types define
    class Message {
    public:
        // Message inner types define
        enum class DataType : int {
            KString = 0,
            KBinary = 1,
        };

        enum class Direction : int {
            KSend    = 0,
            KReceive = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkf2acf6;
        ::ll::UntypedStorage<4, 4>  mUnk17c463;
        ::ll::UntypedStorage<8, 32> mUnk267f7d;
        ::ll::UntypedStorage<4, 4>  mUnkdb791f;
        ::ll::UntypedStorage<4, 4>  mUnk9362d4;
        ::ll::UntypedStorage<8, 24> mUnk99fbcf;
        // NOLINTEND

    public:
        // prevent constructor by default
        Message& operator=(Message const&);
        Message(Message const&);
        Message();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Message();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataChannelEventObserverInterface() = default;

    virtual void OnMessage(::webrtc::DataChannelEventObserverInterface::Message const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
