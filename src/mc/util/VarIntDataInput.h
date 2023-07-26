#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VarIntDataInput {

public:
    // prevent constructor by default
    VarIntDataInput& operator=(VarIntDataInput const&) = delete;
    VarIntDataInput(VarIntDataInput const&)            = delete;
    VarIntDataInput()                                  = delete;

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
     * @symbol ?readFloat\@VarIntDataInput\@\@UEAAMXZ
     */
    virtual float readFloat(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?readDouble\@VarIntDataInput\@\@UEAANXZ
     */
    virtual double readDouble(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?readByte\@VarIntDataInput\@\@UEAADXZ
     */
    virtual char readByte(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?readShort\@VarIntDataInput\@\@UEAAFXZ
     */
    virtual short readShort(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?readInt\@VarIntDataInput\@\@UEAAHXZ
     */
    virtual int readInt(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?readLongLong\@VarIntDataInput\@\@UEAA_JXZ
     */
    virtual __int64 readLongLong(); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?readBytes\@VarIntDataInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void*, unsigned __int64); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?numBytesLeft\@VarIntDataInput\@\@UEBA_KXZ
     */
    virtual unsigned __int64 numBytesLeft() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAINPUT
    /**
     * @symbol
     * ?readLongString\@VarIntDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readLongString(); // NOLINT
    /**
     * @symbol
     * ?readString\@VarIntDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readString(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VarIntDataInput(); // NOLINT
#endif
};
