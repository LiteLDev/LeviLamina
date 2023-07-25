#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class RakDataOutput : public ::BytesDataOutput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKDATAOUTPUT
public:
    RakDataOutput& operator=(RakDataOutput const&) = delete;
    RakDataOutput(RakDataOutput const&)            = delete;
    RakDataOutput()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeString(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @vftbl 2
     * @symbol ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeLongString(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @vftbl 3
     * @symbol ?writeFloat\@BytesDataOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float);
    /**
     * @vftbl 4
     * @symbol ?writeDouble\@BytesDataOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double);
    /**
     * @vftbl 5
     * @symbol ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char);
    /**
     * @vftbl 6
     * @symbol ?writeShort\@BytesDataOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short);
    /**
     * @vftbl 7
     * @symbol ?writeInt\@BytesDataOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int);
    /**
     * @vftbl 8
     * @symbol ?writeLongLong\@BytesDataOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(__int64);
    /**
     * @vftbl 9
     * @symbol ?writeBytes\@RakDataOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const*, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKDATAOUTPUT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakDataOutput();
#endif
};
