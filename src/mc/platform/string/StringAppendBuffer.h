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
    // vIndex: 0
    virtual ~StringAppendBuffer();

    // vIndex: 1
    virtual void _Lock();

    // vIndex: 2
    virtual void _Unlock();

    // vIndex: 3
    virtual int overflow(int c);

    // vIndex: 4
    virtual int pbackfail(int);

    // vIndex: 5
    virtual int64 showmanyc();

    // vIndex: 6
    virtual int underflow();

    // vIndex: 7
    virtual int uflow();

    // vIndex: 8
    virtual int64 xsgetn(char*, int64);

    // vIndex: 9
    virtual int64 xsputn(char const* s, int64 n);

    // vIndex: 10
    virtual std::fpos<struct _Mbstatet> seekoff(int64, int, int);

    // vIndex: 11
    virtual std::fpos<struct _Mbstatet> seekpos(std::fpos<struct _Mbstatet>, int);

    // vIndex: 12
    virtual std::streambuf* setbuf(char*, int64);

    // vIndex: 13
    virtual int sync();

    // vIndex: 14
    virtual void imbue(std::locale const&);

    // NOLINTEND
};

}; // namespace Bedrock
