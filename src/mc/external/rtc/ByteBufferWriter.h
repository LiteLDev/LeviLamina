#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferT.h"
#include "mc/external/rtc/ByteBufferWriterT.h"

namespace rtc {

class ByteBufferWriter : public ::rtc::ByteBufferWriterT<::rtc::BufferT<uchar, 0>> {
public:
    // prevent constructor by default
    ByteBufferWriter& operator=(ByteBufferWriter const&);
    ByteBufferWriter(ByteBufferWriter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ByteBufferWriter();

    MCAPI ByteBufferWriter(uchar const*, uint64);

    MCAPI ~ByteBufferWriter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(uchar const*, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
