#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ByteBufferWriter; }
// clang-format on

namespace rtc {

class ByteBufferReader {
public:
    // prevent constructor by default
    ByteBufferReader& operator=(ByteBufferReader const&);
    ByteBufferReader(ByteBufferReader const&);
    ByteBufferReader();

public:
    // NOLINTBEGIN
    // symbol: ??0ByteBufferReader@rtc@@QEAA@AEBVByteBufferWriter@1@@Z
    MCAPI explicit ByteBufferReader(class rtc::ByteBufferWriter const&);

    // symbol: ??0ByteBufferReader@rtc@@QEAA@PEBD_K@Z
    MCAPI ByteBufferReader(char const*, uint64);

    // symbol: ?Consume@ByteBufferReader@rtc@@QEAA_N_K@Z
    MCAPI bool Consume(uint64);

    // symbol: ?ReadBytes@ByteBufferReader@rtc@@QEAA_NPEAD_K@Z
    MCAPI bool ReadBytes(char*, uint64);

    // symbol:
    // ?ReadString@ByteBufferReader@rtc@@QEAA_NPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
    MCAPI bool ReadString(std::string*, uint64);

    // symbol: ?ReadUInt16@ByteBufferReader@rtc@@QEAA_NPEAG@Z
    MCAPI bool ReadUInt16(ushort*);

    // symbol: ?ReadUInt32@ByteBufferReader@rtc@@QEAA_NPEAI@Z
    MCAPI bool ReadUInt32(uint*);

    // symbol: ?ReadUInt64@ByteBufferReader@rtc@@QEAA_NPEA_K@Z
    MCAPI bool ReadUInt64(uint64*);

    // symbol: ?ReadUInt8@ByteBufferReader@rtc@@QEAA_NPEAE@Z
    MCAPI bool ReadUInt8(uchar*);

    // symbol: ?ReadUVarint@ByteBufferReader@rtc@@QEAA_NPEA_K@Z
    MCAPI bool ReadUVarint(uint64*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?Construct@ByteBufferReader@rtc@@IEAAXPEBD_K@Z
    MCAPI void Construct(char const*, uint64);

    // NOLINTEND
};

}; // namespace rtc
