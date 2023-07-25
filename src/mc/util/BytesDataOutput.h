#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BytesDataOutput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BYTESDATAOUTPUT
public:
    BytesDataOutput& operator=(BytesDataOutput const&) = delete;
    BytesDataOutput(BytesDataOutput const&)            = delete;
    BytesDataOutput()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BYTESDATAOUTPUT
    /**
     * @symbol ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    MCVAPI void writeByte(char);
    /**
     * @symbol ?writeDouble\@BytesDataOutput\@\@UEAAXN\@Z
     */
    MCVAPI void writeDouble(double);
    /**
     * @symbol ?writeFloat\@BytesDataOutput\@\@UEAAXM\@Z
     */
    MCVAPI void writeFloat(float);
    /**
     * @symbol ?writeInt\@BytesDataOutput\@\@UEAAXH\@Z
     */
    MCVAPI void writeInt(int);
    /**
     * @symbol ?writeLongLong\@BytesDataOutput\@\@UEAAX_J\@Z
     */
    MCVAPI void writeLongLong(__int64);
    /**
     * @symbol ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void writeLongString(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?writeShort\@BytesDataOutput\@\@UEAAXF\@Z
     */
    MCVAPI void writeShort(short);
    /**
     * @symbol ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void writeString(class std::basic_string_view<char, struct std::char_traits<char>>);
#endif
};
