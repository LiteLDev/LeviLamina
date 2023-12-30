#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStdStreamBuf {
public:
    // prevent constructor by default
    FileStdStreamBuf& operator=(FileStdStreamBuf const&);
    FileStdStreamBuf(FileStdStreamBuf const&);
    FileStdStreamBuf();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FileStdStreamBuf@Core@@UEAA@XZ
    virtual ~FileStdStreamBuf();

    // vIndex: 1, symbol: ?_Lock@?$basic_streambuf@DU?$char_traits@D@std@@@std@@UEAAXXZ
    virtual void _Lock();

    // vIndex: 2, symbol: ?_Unlock@?$basic_streambuf@DU?$char_traits@D@std@@@std@@UEAAXXZ
    virtual void _Unlock();

    // vIndex: 3, symbol: ?overflow@FileStdStreamBuf@Core@@UEAAHH@Z
    virtual int overflow(int c);

    // vIndex: 4, symbol: ?pbackfail@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z
    virtual int pbackfail(int);

    // vIndex: 5, symbol: ?showmanyc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAA_JXZ
    virtual int64 showmanyc();

    // vIndex: 6, symbol: ?underflow@FileStdStreamBuf@Core@@UEAAHXZ
    virtual int underflow();

    // vIndex: 7, symbol: ?uflow@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAHXZ
    virtual int uflow();

    // vIndex: 8, symbol: ?xsgetn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z
    virtual int64 xsgetn(char*, int64);

    // vIndex: 9, symbol: ?xsputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAA_JPEBD_J@Z
    virtual int64 xsputn(char const*, int64);

    // vIndex: 10, symbol: ?seekoff@FileStdStreamBuf@Core@@UEAA?AV?$fpos@U_Mbstatet@@@std@@_JHH@Z
    virtual std::fpos<struct _Mbstatet> seekoff(int64, int, int);

    // vIndex: 11, symbol: ?seekpos@FileStdStreamBuf@Core@@UEAA?AV?$fpos@U_Mbstatet@@@std@@V34@H@Z
    virtual std::fpos<struct _Mbstatet> seekpos(std::fpos<struct _Mbstatet>, int);

    // vIndex: 12, symbol: ?setbuf@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAPEAV12@PEAD_J@Z
    virtual std::streambuf* setbuf(char*, int64);

    // vIndex: 13, symbol: ?sync@FileStdStreamBuf@Core@@UEAAHXZ
    virtual int sync();

    // vIndex: 14, symbol: ?imbue@?$basic_streambuf@DU?$char_traits@D@std@@@std@@MEAAXAEBVlocale@2@@Z
    virtual void imbue(std::locale const&);

    // symbol: ?close@FileStdStreamBuf@Core@@QEAAXXZ
    MCAPI void close();

    // symbol: ?isOpen@FileStdStreamBuf@Core@@QEBA_NXZ
    MCAPI bool isOpen() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_Init@FileStdStreamBuf@Core@@AEAAXXZ
    MCAPI void _Init();

    // symbol: ?_flushoutput@FileStdStreamBuf@Core@@AEAAHXZ
    MCAPI int _flushoutput();

    // NOLINTEND
};

}; // namespace Core
