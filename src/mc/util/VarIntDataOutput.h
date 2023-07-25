#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VarIntDataOutput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARINTDATAOUTPUT
public:
    VarIntDataOutput& operator=(VarIntDataOutput const&) = delete;
    VarIntDataOutput(VarIntDataOutput const&)            = delete;
    VarIntDataOutput()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?writeFloat\@VarIntDataOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float);
    /**
     * @vftbl 4
     * @symbol ?writeDouble\@VarIntDataOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double);
    /**
     * @vftbl 5
     * @symbol ?writeByte\@VarIntDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char);
    /**
     * @vftbl 6
     * @symbol ?writeShort\@VarIntDataOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short);
    /**
     * @vftbl 7
     * @symbol ?writeInt\@VarIntDataOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int);
    /**
     * @vftbl 8
     * @symbol ?writeLongLong\@VarIntDataOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(__int64);
    /**
     * @vftbl 9
     * @symbol ?writeBytes\@VarIntDataOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const*, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAOUTPUT
    /**
     * @symbol ?writeLongString\@VarIntDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void writeLongString(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?writeString\@VarIntDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void writeString(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VarIntDataOutput();
#endif
};
