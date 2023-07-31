#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StringAppendBuffer {

public:
    // prevent constructor by default
    StringAppendBuffer& operator=(StringAppendBuffer const&) = delete;
    StringAppendBuffer(StringAppendBuffer const&)            = delete;
    StringAppendBuffer()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_Lock\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@UEAAXXZ
     */
    virtual void _Lock();
    /**
     * @vftbl 2
     * @symbol ?_Unlock\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@UEAAXXZ
     */
    virtual void _Unlock();
    /**
     * @vftbl 3
     * @symbol ?overflow\@StringAppendBuffer\@Bedrock\@\@UEAAHH\@Z
     */
    virtual int overflow(int);
    /**
     * @vftbl 4
     * @symbol ?pbackfail\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAHH\@Z
     */
    virtual int pbackfail(int);
    /**
     * @vftbl 5
     * @symbol ?showmanyc\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAA_JXZ
     */
    virtual int64_t showmanyc();
    /**
     * @vftbl 6
     * @symbol ?underflow\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAHXZ
     */
    virtual int underflow();
    /**
     * @vftbl 7
     * @symbol ?uflow\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAHXZ
     */
    virtual int uflow();
    /**
     * @vftbl 8
     * @symbol ?xsgetn\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAA_JPEAD_J\@Z
     */
    virtual int64_t xsgetn(char*, int64_t);
    /**
     * @vftbl 9
     * @symbol ?xsputn\@StringAppendBuffer\@Bedrock\@\@UEAA_JPEBD_J\@Z
     */
    virtual int64_t xsputn(char const*, int64_t);
    /**
     * @vftbl 10
     * @symbol
     * ?seekoff\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAA?AV?$fpos\@U_Mbstatet\@\@\@2\@_JHH\@Z
     */
    virtual std::fpos<struct _Mbstatet> seekoff(int64_t, int, int);
    /**
     * @vftbl 11
     * @symbol
     * ?seekpos\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAA?AV?$fpos\@U_Mbstatet\@\@\@2\@V32\@H\@Z
     */
    virtual std::fpos<struct _Mbstatet> seekpos(std::fpos<struct _Mbstatet>, int);
    /**
     * @vftbl 12
     * @symbol ?setbuf\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAPEAV12\@PEAD_J\@Z
     */
    virtual std::basic_streambuf<char, std::char_traits<char>>* setbuf(char*, int64_t);
    /**
     * @vftbl 13
     * @symbol ?sync\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAHXZ
     */
    virtual int sync();
    /**
     * @vftbl 14
     * @symbol ?imbue\@?$basic_streambuf\@DU?$char_traits\@D\@std\@\@\@std\@\@MEAAXAEBVlocale\@2\@\@Z
     */
    virtual void imbue(std::locale const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_STRINGAPPENDBUFFER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StringAppendBuffer();
#endif
    // NOLINTEND
};

}; // namespace Bedrock
