#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/StreamResult.h"
#include "mc/external/webrtc/StreamState.h"

namespace webrtc {

class StreamInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk815c2f;
    ::ll::UntypedStorage<8, 32> mUnka4dcb5;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamInterface& operator=(StreamInterface const&);
    StreamInterface(StreamInterface const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StreamInterface();

    virtual ::webrtc::StreamState GetState() const = 0;

    virtual ::webrtc::StreamResult
    Read(::webrtc::ArrayView<uchar, 18446744073709546905> data, uint64& read, int& error) = 0;

    virtual ::webrtc::StreamResult
    Write(::webrtc::ArrayView<uchar const, 18446744073709546905> data, uint64& written, int& error) = 0;

    virtual void Close() = 0;

    virtual bool Flush();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StreamInterface();

    MCNAPI ::webrtc::StreamResult
    WriteAll(::webrtc::ArrayView<uchar const, 18446744073709546905> data, uint64& written, int& error);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $Flush();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
