#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class RakDataOutput : public ::BytesDataOutput {

public:
    // prevent constructor by default
    RakDataOutput& operator=(RakDataOutput const&) = delete;
    RakDataOutput(RakDataOutput const&)            = delete;
    RakDataOutput()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeString(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeLongString(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?writeFloat\@BytesDataOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?writeDouble\@BytesDataOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?writeShort\@BytesDataOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?writeInt\@BytesDataOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?writeLongLong\@BytesDataOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(__int64); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?writeBytes\@RakDataOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const*, unsigned __int64); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKDATAOUTPUT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakDataOutput(); // NOLINT
#endif
};
