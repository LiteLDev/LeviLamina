#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ByteBufferWriter; }
// clang-format on

namespace webrtc {

class ByteBufferReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka71e17;
    ::ll::UntypedStorage<8, 8> mUnkbce699;
    ::ll::UntypedStorage<8, 8> mUnkd3b2bd;
    ::ll::UntypedStorage<8, 8> mUnk1130be;
    // NOLINTEND

public:
    // prevent constructor by default
    ByteBufferReader& operator=(ByteBufferReader const&);
    ByteBufferReader(ByteBufferReader const&);
    ByteBufferReader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ByteBufferReader(::webrtc::ByteBufferWriter const& buf);

    MCNAPI explicit ByteBufferReader(::webrtc::ArrayView<uchar const, 18446744073709546905> bytes);

    MCNAPI bool Consume(uint64 size);

    MCNAPI bool ReadBytes(::webrtc::ArrayView<uchar, 18446744073709546905> val);

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
    MCNAPI void* $ctor(::webrtc::ByteBufferWriter const& buf);

    MCNAPI void* $ctor(::webrtc::ArrayView<uchar const, 18446744073709546905> bytes);
    // NOLINTEND
};

} // namespace webrtc
