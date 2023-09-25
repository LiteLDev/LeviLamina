/**
 * @file  IDataInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IDataInput.
 *
 */
class IDataInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDATAINPUT
public:
    class IDataInput& operator=(class IDataInput const &) = delete;
    IDataInput(class IDataInput const &) = delete;
    IDataInput() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readString() = 0;
    /**
     * @vftbl 2
     * @symbol ?readLongString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readLongString() = 0;
    /**
     * @vftbl 3
     * @symbol ?readFloat\@BytesDataInput\@\@UEAAMXZ
     */
    virtual float readFloat() = 0;
    /**
     * @vftbl 4
     * @symbol ?readDouble\@BytesDataInput\@\@UEAANXZ
     */
    virtual double readDouble() = 0;
    /**
     * @vftbl 5
     * @symbol ?readByte\@BytesDataInput\@\@UEAADXZ
     */
    virtual char readByte() = 0;
    /**
     * @vftbl 6
     * @symbol ?readShort\@BytesDataInput\@\@UEAAFXZ
     */
    virtual short readShort() = 0;
    /**
     * @vftbl 7
     * @symbol ?readInt\@BytesDataInput\@\@UEAAHXZ
     */
    virtual int readInt() = 0;
    /**
     * @vftbl 8
     * @symbol ?readLongLong\@BytesDataInput\@\@UEAA_JXZ
     */
    virtual __int64 readLongLong() = 0;
    /**
     * @vftbl 9
     * @symbol ?readBytes\@RakDataInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void *, unsigned __int64) = 0;
    /**
     * @vftbl 10
     * @symbol ?numBytesLeft\@RakDataInput\@\@UEBA_KXZ
     */
    virtual unsigned __int64 numBytesLeft() const = 0;

};
