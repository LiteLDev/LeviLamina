#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BytesDataInput {

public:
    // prevent constructor by default
    BytesDataInput& operator=(BytesDataInput const&) = delete;
    BytesDataInput(BytesDataInput const&)            = delete;
    BytesDataInput()                                 = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BYTESDATAINPUT
    /**
     * @symbol ?readByte\@BytesDataInput\@\@UEAADXZ
     */
    MCVAPI char readByte(); // NOLINT
    /**
     * @symbol ?readDouble\@BytesDataInput\@\@UEAANXZ
     */
    MCVAPI double readDouble(); // NOLINT
    /**
     * @symbol ?readFloat\@BytesDataInput\@\@UEAAMXZ
     */
    MCVAPI float readFloat(); // NOLINT
    /**
     * @symbol ?readInt\@BytesDataInput\@\@UEAAHXZ
     */
    MCVAPI int readInt(); // NOLINT
    /**
     * @symbol ?readLongLong\@BytesDataInput\@\@UEAA_JXZ
     */
    MCVAPI __int64 readLongLong(); // NOLINT
    /**
     * @symbol
     * ?readLongString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readLongString(); // NOLINT
    /**
     * @symbol ?readShort\@BytesDataInput\@\@UEAAFXZ
     */
    MCVAPI short readShort(); // NOLINT
    /**
     * @symbol
     * ?readString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readString(); // NOLINT
#endif
};
