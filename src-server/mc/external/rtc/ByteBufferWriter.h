#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferT.h"
#include "mc/external/rtc/ByteBufferWriterT.h"

namespace rtc {

class ByteBufferWriter : public ::rtc::ByteBufferWriterT<::rtc::BufferT<uchar, 0>> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ByteBufferWriter();

    MCNAPI ByteBufferWriter(uchar const* bytes, uint64 len);

    MCNAPI ~ByteBufferWriter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(uchar const* bytes, uint64 len);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
