#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VarIntDataInput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARINTDATAINPUT
public:
    VarIntDataInput& operator=(VarIntDataInput const&) = delete;
    VarIntDataInput(VarIntDataInput const&)            = delete;
    VarIntDataInput()                                  = delete;
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
    virtual __int64 readLongLong();
    /**
     * @vftbl 9
     * @symbol ?readBytes\@VarIntDataInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void*, unsigned __int64);
    /**
     * @vftbl 10
     * @symbol ?numBytesLeft\@VarIntDataInput\@\@UEBA_KXZ
     */
    virtual unsigned __int64 numBytesLeft() const;
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
};
