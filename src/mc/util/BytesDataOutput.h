#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BytesDataOutput {

public:
    // prevent constructor by default
    BytesDataOutput& operator=(BytesDataOutput const&) = delete;
    BytesDataOutput(BytesDataOutput const&)            = delete;
    BytesDataOutput()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BYTESDATAOUTPUT
    /**
     * @symbol ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    MCVAPI void writeByte(char); // NOLINT
    /**
     * @symbol ?writeDouble\@BytesDataOutput\@\@UEAAXN\@Z
     */
    MCVAPI void writeDouble(double); // NOLINT
    /**
     * @symbol ?writeFloat\@BytesDataOutput\@\@UEAAXM\@Z
     */
    MCVAPI void writeFloat(float); // NOLINT
    /**
     * @symbol ?writeInt\@BytesDataOutput\@\@UEAAXH\@Z
     */
    MCVAPI void writeInt(int); // NOLINT
    /**
     * @symbol ?writeLongLong\@BytesDataOutput\@\@UEAAX_J\@Z
     */
    MCVAPI void writeLongLong(__int64); // NOLINT
    /**
     * @symbol ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void writeLongString(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?writeShort\@BytesDataOutput\@\@UEAAXF\@Z
     */
    MCVAPI void writeShort(short); // NOLINT
    /**
     * @symbol ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void writeString(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
#endif
};
