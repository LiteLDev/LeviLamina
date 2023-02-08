/**
 * @file  RakDataInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakDataInput.
 *
 */
class RakDataInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKDATAINPUT
public:
    class RakDataInput& operator=(class RakDataInput const &) = delete;
    RakDataInput(class RakDataInput const &) = delete;
    RakDataInput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RakDataInput();
    /**
     * @hash   -266477986
     * @vftbl  1
     * @symbol  ?readString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readString();
    /**
     * @hash   -1523947846
     * @vftbl  2
     * @symbol  ?readLongString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readLongString();
    /**
     * @hash   298810305
     * @vftbl  3
     * @symbol  ?readFloat\@BytesDataInput\@\@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @hash   1253523053
     * @vftbl  4
     * @symbol  ?readDouble\@BytesDataInput\@\@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @hash   720246575
     * @vftbl  5
     * @symbol  ?readByte\@BytesDataInput\@\@UEAADXZ
     */
    virtual char readByte();
    /**
     * @hash   -1494846431
     * @vftbl  6
     * @symbol  ?readShort\@BytesDataInput\@\@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @hash   -1779805311
     * @vftbl  7
     * @symbol  ?readInt\@BytesDataInput\@\@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @hash   457281312
     * @vftbl  8
     * @symbol  ?readLongLong\@BytesDataInput\@\@UEAA_JXZ
     */
    virtual __int64 readLongLong();
    /**
     * @hash   1857938490
     * @vftbl  9
     * @symbol  ?readBytes\@RakDataInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void *, unsigned __int64);
    /**
     * @hash   -442602376
     * @vftbl  10
     * @symbol  ?numBytesLeft\@RakDataInput\@\@UEBA_KXZ
     */
    virtual unsigned __int64 numBytesLeft() const;

};