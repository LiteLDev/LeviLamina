#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {

public:
    // prevent constructor by default
    BytesDataInput& operator=(BytesDataInput const&) = delete;
    BytesDataInput(BytesDataInput const&)            = delete;
    BytesDataInput()                                 = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BYTESDATAINPUT
    /**
     * @symbol ?readByte\@BytesDataInput\@\@UEAADXZ
     */
    MCVAPI char readByte();
    /**
     * @symbol ?readDouble\@BytesDataInput\@\@UEAANXZ
     */
    MCVAPI double readDouble();
    /**
     * @symbol ?readFloat\@BytesDataInput\@\@UEAAMXZ
     */
    MCVAPI float readFloat();
    /**
     * @symbol ?readInt\@BytesDataInput\@\@UEAAHXZ
     */
    MCVAPI int readInt();
    /**
     * @symbol ?readLongLong\@BytesDataInput\@\@UEAA_JXZ
     */
    MCVAPI int64_t readLongLong();
    /**
     * @symbol
     * ?readLongString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readLongString();
    /**
     * @symbol ?readShort\@BytesDataInput\@\@UEAAFXZ
     */
    MCVAPI short readShort();
    /**
     * @symbol
     * ?readString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readString();
#endif
    // NOLINTEND
};
