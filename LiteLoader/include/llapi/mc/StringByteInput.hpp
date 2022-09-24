/**
 * @file  StringByteInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~StringByteInput();
    /**
     * @hash   585495089
     * @vftbl  1
     * @symbol ?readString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string readString();
    /**
     * @hash   -672005523
     * @vftbl  2
     * @symbol ?readLongString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string readLongString();
    /**
     * @hash   -245564188
     * @vftbl  3
     * @symbol ?readFloat@BigEndianStringByteInput@@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @hash   -470128752
     * @vftbl  4
     * @symbol ?readDouble@BigEndianStringByteInput@@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @hash   676137122
     * @vftbl  5
     * @symbol ?readByte@BytesDataInput@@UEAADXZ
     */
    virtual char readByte();
    /**
     * @hash   -571542204
     * @vftbl  6
     * @symbol ?readShort@BigEndianStringByteInput@@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @hash   1568562340
     * @vftbl  7
     * @symbol ?readInt@BigEndianStringByteInput@@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @hash   -1011813245
     * @vftbl  8
     * @symbol ?readLongLong@BigEndianStringByteInput@@UEAA_JXZ
     */
    virtual __int64 readLongLong();
    /**
     * @hash   -1339024051
     * @vftbl  9
     * @symbol ?readBytes@StringByteInput@@UEAA_NPEAX_K@Z
     */
    virtual bool readBytes(void *, unsigned __int64);
    /**
     * @hash   -1662722869
     * @vftbl  10
     * @symbol ?numBytesLeft@StringByteInput@@UEBA_KXZ
     */
    virtual unsigned __int64 numBytesLeft() const;

};