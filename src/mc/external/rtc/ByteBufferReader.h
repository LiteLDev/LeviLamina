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
    MCNAPI explicit ByteBufferReader(::rtc::ByteBufferWriter const&);

    MCNAPI explicit ByteBufferReader(::rtc::ArrayView<uchar const>);

    MCNAPI void Construct(uchar const*, uint64);

    MCNAPI bool Consume(uint64);

    MCNAPI bool ReadBytes(::rtc::ArrayView<uchar>);

    MCNAPI bool ReadBytes(uchar*, uint64);

    MCNAPI bool ReadString(::std::string*, uint64);

    MCNAPI bool ReadStringView(::std::string_view*, uint64);

    MCNAPI bool ReadUInt16(ushort*);

    MCNAPI bool ReadUInt32(uint*);

    MCNAPI bool ReadUInt64(uint64*);

    MCNAPI bool ReadUInt8(uchar*);

    MCNAPI bool ReadUVarint(uint64*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::ByteBufferWriter const&);

    MCNAPI void* $ctor(::rtc::ArrayView<uchar const>);
    // NOLINTEND
};

} // namespace rtc
