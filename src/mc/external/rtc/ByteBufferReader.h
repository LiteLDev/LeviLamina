#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace rtc {

class ByteBufferReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4edf89;
    ::ll::UntypedStorage<8, 8> mUnk14d02f;
    ::ll::UntypedStorage<8, 8> mUnk727777;
    ::ll::UntypedStorage<8, 8> mUnk8581df;
    // NOLINTEND

public:
    // prevent constructor by default
    ByteBufferReader& operator=(ByteBufferReader const&);
    ByteBufferReader(ByteBufferReader const&);
    ByteBufferReader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ByteBufferReader(::rtc::ByteBufferWriter const&);

    MCAPI explicit ByteBufferReader(::rtc::ArrayView<uchar const>);

    MCAPI void Construct(uchar const*, uint64);

    MCAPI bool Consume(uint64);

    MCAPI bool ReadBytes(::rtc::ArrayView<uchar>);

    MCAPI bool ReadBytes(uchar*, uint64);

    MCAPI bool ReadString(::std::string*, uint64);

    MCAPI bool ReadStringView(::std::string_view*, uint64);

    MCAPI bool ReadUInt16(ushort*);

    MCAPI bool ReadUInt32(uint*);

    MCAPI bool ReadUInt64(uint64*);

    MCAPI bool ReadUInt8(uchar*);

    MCAPI bool ReadUVarint(uint64*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::ByteBufferWriter const&);

    MCAPI void* $ctor(::rtc::ArrayView<uchar const>);
    // NOLINTEND
};

} // namespace rtc
