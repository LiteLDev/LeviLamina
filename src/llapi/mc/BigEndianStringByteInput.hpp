/**
 * @file  BigEndianStringByteInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StringByteInput.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BigEndianStringByteInput.
 *
 */
class BigEndianStringByteInput : public StringByteInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIGENDIANSTRINGBYTEINPUT
public:
    class BigEndianStringByteInput& operator=(class BigEndianStringByteInput const &) = delete;
    BigEndianStringByteInput(class BigEndianStringByteInput const &) = delete;
    BigEndianStringByteInput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BigEndianStringByteInput();
    /**
     * @vftbl  3
     * @symbol  ?readFloat\@BigEndianStringByteInput\@\@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @vftbl  4
     * @symbol  ?readDouble\@BigEndianStringByteInput\@\@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @vftbl  6
     * @symbol  ?readShort\@BigEndianStringByteInput\@\@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @vftbl  7
     * @symbol  ?readInt\@BigEndianStringByteInput\@\@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @vftbl  8
     * @symbol  ?readLongLong\@BigEndianStringByteInput\@\@UEAA_JXZ
     */
    virtual __int64 readLongLong();
    /**
     * @vftbl  9
     * @symbol  ?readBytes\@BigEndianStringByteInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void *, unsigned __int64);
    /**
     * @vftbl  11
     * @symbol  ?readBigEndianBytes\@BigEndianStringByteInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBigEndianBytes(void *, unsigned __int64);

};