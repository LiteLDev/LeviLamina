#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StringAppendBuffer {
public:
    // prevent constructor by default
    StringAppendBuffer& operator=(StringAppendBuffer const&);
    StringAppendBuffer(StringAppendBuffer const&);
    StringAppendBuffer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StringAppendBuffer@Bedrock@@UEAA@XZ
    virtual ~StringAppendBuffer();

    // vIndex: 1, symbol: ?_Lock@?$basic_streambuf@DU?$char_traits@D@std@@@std@@UEAAXXZ
    virtual void _Lock();

    // vIndex: 2, symbol: ?_Unlock@?$basic_streambuf@DU?$char_traits@D@std@@@std@@UEAAXXZ
    virtual void _Unlock();

    // vIndex: 3, symbol: ?overflow@StringAppendBuffer@Bedrock@@UEAAHH@Z
    virtual int overflow(int c);

    // vIndex: 4, symbol: ?pbackfail@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z
    virtual int pbackfail(int);

    // vIndex: 5, symbol: ?showmanyc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAA_JXZ
    virtual int64 showmanyc();

    // vIndex: 6, symbol: ?underflow@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAHXZ
    virtual int underflow();

    // vIndex: 7, symbol: ?uflow@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAHXZ
    virtual int uflow();

    // vIndex: 8, symbol: ?xsgetn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z
    virtual int64 xsgetn(char*, int64);

    // vIndex: 9, symbol: ?xsputn@StringAppendBuffer@Bedrock@@UEAA_JPEBD_J@Z
    virtual int64 xsputn(char const* s, int64 n);

    // vIndex: 10, symbol: ?seekoff@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z
    virtual std::fpos<struct _Mbstatet> seekoff(int64, int, int);

    // vIndex: 11, symbol: ?seekpos@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z
    virtual std::fpos<struct _Mbstatet> seekpos(std::fpos<struct _Mbstatet>, int);

    // vIndex: 12, symbol: ?setbuf@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAPEAV12@PEAD_J@Z
    virtual std::streambuf* setbuf(char*, int64);

    // vIndex: 13, symbol: ?sync@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAHXZ
    virtual int sync();

    // vIndex: 14, symbol: ?imbue@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAXAEBVlocale@2@@Z
    virtual void imbue(std::locale const&);

    // NOLINTEND
};

}; // namespace Bedrock
