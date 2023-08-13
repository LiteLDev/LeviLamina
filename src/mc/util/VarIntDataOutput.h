#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataOutput.h"

class VarIntDataOutput : public ::BytesDataOutput {

public:
    // prevent constructor by default
    VarIntDataOutput& operator=(VarIntDataOutput const&) = delete;
    VarIntDataOutput(VarIntDataOutput const&)            = delete;
    VarIntDataOutput()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?writeString\@VarIntDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeString(std::string_view);
    /**
     * @vftbl 2
     * @symbol ?writeLongString\@VarIntDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeLongString(std::string_view);
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
    virtual void writeLongLong(int64_t);
    /**
     * @vftbl 9
     * @symbol ?writeBytes\@VarIntDataOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const*, uint64_t);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAOUTPUT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VarIntDataOutput();
#endif
    // NOLINTEND
};
