#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/StreamInterface.h"
#include "mc/external/webrtc/StreamResult.h"
#include "mc/external/webrtc/StreamState.h"

namespace webrtc {

class StreamInterfaceChannel : public ::webrtc::StreamInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5cadb8;
    ::ll::UntypedStorage<8, 8>  mUnk29ebf1;
    ::ll::UntypedStorage<4, 4>  mUnk6cfde3;
    ::ll::UntypedStorage<8, 88> mUnk2c7749;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamInterfaceChannel& operator=(StreamInterfaceChannel const&);
    StreamInterfaceChannel(StreamInterfaceChannel const&);
    StreamInterfaceChannel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::StreamState GetState() const /*override*/;

    virtual void Close() /*override*/;

    virtual ::webrtc::StreamResult
    Read(::webrtc::ArrayView<uchar, 18446744073709546905> buffer, uint64& read, int&) /*override*/;

    virtual ::webrtc::StreamResult
    Write(::webrtc::ArrayView<uchar const, 18446744073709546905> data, uint64& written, int&) /*override*/;

    virtual bool Flush() /*override*/;

    virtual ~StreamInterfaceChannel() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::StreamState $GetState() const;

    MCNAPI void $Close();

    MCNAPI ::webrtc::StreamResult $Read(::webrtc::ArrayView<uchar, 18446744073709546905> buffer, uint64& read, int&);

    MCNAPI ::webrtc::StreamResult
    $Write(::webrtc::ArrayView<uchar const, 18446744073709546905> data, uint64& written, int&);

    MCNAPI bool $Flush();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
