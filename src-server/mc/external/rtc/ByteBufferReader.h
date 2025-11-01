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
    MCNAPI explicit ByteBufferReader(::rtc::ByteBufferWriter const& buf);

    MCNAPI explicit ByteBufferReader(::rtc::ArrayView<uchar const> bytes);

    MCNAPI void Construct(uchar const* bytes, uint64 len);

    MCNAPI bool Consume(uint64 size);

    MCNAPI bool ReadBytes(::rtc::ArrayView<uchar> val);

    MCNAPI bool ReadBytes(uchar* val, uint64 len);

    MCNAPI bool ReadString(::std::string* val, uint64 len);

    MCNAPI bool ReadStringView(::std::string_view* val, uint64 len);

    MCNAPI bool ReadUInt16(ushort* val);

    MCNAPI bool ReadUInt32(uint* val);

    MCNAPI bool ReadUInt64(uint64* val);

    MCNAPI bool ReadUInt8(uchar* val);

    MCNAPI bool ReadUVarint(uint64* val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::ByteBufferWriter const& buf);

    MCNAPI void* $ctor(::rtc::ArrayView<uchar const> bytes);
    // NOLINTEND

};

}
