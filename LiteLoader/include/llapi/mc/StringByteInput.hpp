/**
 * @file  StringByteInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StringByteInput.
 *
 */
class StringByteInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRINGBYTEINPUT
public:
    class StringByteInput& operator=(class StringByteInput const &) = delete;
    StringByteInput(class StringByteInput const &) = delete;
    StringByteInput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StringByteInput();
    /**
     * @hash   -65094223
     * @vftbl  1
     * @symbol  ?readString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readString();
    /**
     * @hash   -1322564083
     * @vftbl  2
     * @symbol  ?readLongString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readLongString();
    /**
     * @hash   -24844
     * @vftbl  3
     * @symbol  ?readFloat\@BigEndianStringByteInput\@\@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @hash   -224589408
     * @vftbl  4
     * @symbol  ?readDouble\@BigEndianStringByteInput\@\@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @hash   921630338
     * @vftbl  5
     * @symbol  ?readByte\@BytesDataInput\@\@UEAADXZ
     */
    virtual char readByte();
    /**
     * @hash   -326002860
     * @vftbl  6
     * @symbol  ?readShort\@BigEndianStringByteInput\@\@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @hash   1814101684
     * @vftbl  7
     * @symbol  ?readInt\@BigEndianStringByteInput\@\@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @hash   -766273901
     * @vftbl  8
     * @symbol  ?readLongLong\@BigEndianStringByteInput\@\@UEAA_JXZ
     */
    virtual __int64 readLongLong();
    /**
     * @hash   -1093515459
     * @vftbl  9
     * @symbol  ?readBytes\@StringByteInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void *, unsigned __int64);
    /**
     * @hash   -1417245029
     * @vftbl  10
     * @symbol  ?numBytesLeft\@StringByteInput\@\@UEBA_KXZ
     */
    virtual unsigned __int64 numBytesLeft() const;

};