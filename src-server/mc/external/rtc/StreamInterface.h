#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/StreamResult.h"
#include "mc/external/rtc/StreamState.h"

namespace rtc {

class StreamInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk126000;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamInterface& operator=(StreamInterface const&);
    StreamInterface(StreamInterface const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StreamInterface();

    // vIndex: 1
    virtual ::rtc::StreamState GetState() const = 0;

    // vIndex: 2
    virtual ::rtc::StreamResult Read(::rtc::ArrayView<uchar>, uint64&, int&) = 0;

    // vIndex: 3
    virtual ::rtc::StreamResult Write(::rtc::ArrayView<uchar const>, uint64&, int&) = 0;

    // vIndex: 4
    virtual void Close() = 0;

    // vIndex: 5
    virtual bool Flush();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StreamInterface();

    MCNAPI ::rtc::StreamResult WriteAll(void const* data, uint64 data_len, uint64* written, int* error);
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

}
