#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VarIntDataInput {

public:
    // prevent constructor by default
    VarIntDataInput& operator=(VarIntDataInput const&) = delete;
    VarIntDataInput(VarIntDataInput const&)            = delete;
    VarIntDataInput()                                  = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?readFloat\@VarIntDataInput\@\@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @vftbl 4
     * @symbol ?readDouble\@VarIntDataInput\@\@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @vftbl 5
     * @symbol ?readByte\@VarIntDataInput\@\@UEAADXZ
     */
    virtual char readByte();
    /**
     * @vftbl 6
     * @symbol ?readShort\@VarIntDataInput\@\@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @vftbl 7
     * @symbol ?readInt\@VarIntDataInput\@\@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @vftbl 8
     * @symbol ?readLongLong\@VarIntDataInput\@\@UEAA_JXZ
     */
    virtual int64_t readLongLong();
    /**
     * @vftbl 9
     * @symbol ?readBytes\@VarIntDataInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void*, uint64_t);
    /**
     * @vftbl 10
     * @symbol ?numBytesLeft\@VarIntDataInput\@\@UEBA_KXZ
     */
    virtual uint64_t numBytesLeft() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAINPUT
    /**
     * @symbol
     * ?readLongString\@VarIntDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readLongString();
    /**
     * @symbol
     * ?readString\@VarIntDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readString();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VarIntDataInput();
#endif
    // NOLINTEND
};
