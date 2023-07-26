#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VarIntDataOutput {

public:
    // prevent constructor by default
    VarIntDataOutput& operator=(VarIntDataOutput const&) = delete;
    VarIntDataOutput(VarIntDataOutput const&)            = delete;
    VarIntDataOutput()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?writeFloat\@VarIntDataOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?writeDouble\@VarIntDataOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?writeByte\@VarIntDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?writeShort\@VarIntDataOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?writeInt\@VarIntDataOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?writeLongLong\@VarIntDataOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(__int64); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?writeBytes\@VarIntDataOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const*, unsigned __int64); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAOUTPUT
    /**
     * @symbol ?writeLongString\@VarIntDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void writeLongString(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?writeString\@VarIntDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void writeString(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VarIntDataOutput(); // NOLINT
#endif
};
