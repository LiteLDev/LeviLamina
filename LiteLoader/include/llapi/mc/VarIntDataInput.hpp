/**
 * @file  VarIntDataInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VarIntDataInput.
 *
 */
class VarIntDataInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARINTDATAINPUT
public:
    class VarIntDataInput& operator=(class VarIntDataInput const &) = delete;
    VarIntDataInput(class VarIntDataInput const &) = delete;
    VarIntDataInput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VarIntDataInput();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   960102493
     * @vftbl  3
     * @symbol  ?readFloat\@VarIntDataInput\@\@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @hash   1474862921
     * @vftbl  4
     * @symbol  ?readDouble\@VarIntDataInput\@\@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @hash   353302091
     * @vftbl  5
     * @symbol  ?readByte\@VarIntDataInput\@\@UEAADXZ
     */
    virtual char readByte();
    /**
     * @hash   1679356093
     * @vftbl  6
     * @symbol  ?readShort\@VarIntDataInput\@\@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @hash   -352628899
     * @vftbl  7
     * @symbol  ?readInt\@VarIntDataInput\@\@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @hash   1116740988
     * @vftbl  8
     * @symbol  ?readLongLong\@VarIntDataInput\@\@UEAA_JXZ
     */
    virtual __int64 readLongLong();
    /**
     * @hash   564856166
     * @vftbl  9
     * @symbol  ?readBytes\@VarIntDataInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void *, unsigned __int64);
    /**
     * @hash   -133271900
     * @vftbl  10
     * @symbol  ?numBytesLeft\@VarIntDataInput\@\@UEBA_KXZ
     */
    virtual unsigned __int64 numBytesLeft() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAINPUT
    /**
     * @hash   -2050588794
     * @symbol  ?readLongString\@VarIntDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readLongString();
    /**
     * @hash   1051258730
     * @symbol  ?readString\@VarIntDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string readString();
#endif

};