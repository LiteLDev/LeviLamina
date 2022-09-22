/**
 * @file  RakDataInput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~RakDataInput();
    /**
     * @hash   384111326
     * @vftbl  1
     * @symbol ?readString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string readString();
    /**
     * @hash   -873389286
     * @vftbl  2
     * @symbol ?readLongString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string readLongString();
    /**
     * @hash   53270961
     * @vftbl  3
     * @symbol ?readFloat@BytesDataInput@@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @hash   1007983709
     * @vftbl  4
     * @symbol ?readDouble@BytesDataInput@@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @hash   474753359
     * @vftbl  5
     * @symbol ?readByte@BytesDataInput@@UEAADXZ
     */
    virtual char readByte();
    /**
     * @hash   -1740385775
     * @vftbl  6
     * @symbol ?readShort@BytesDataInput@@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @hash   -2025344655
     * @vftbl  7
     * @symbol ?readInt@BytesDataInput@@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @hash   211741968
     * @vftbl  8
     * @symbol ?readLongLong@BytesDataInput@@UEAA_JXZ
     */
    virtual __int64 readLongLong();
    /**
     * @hash   -1484946886
     * @vftbl  9
     * @symbol ?readBytes@RakDataInput@@UEAA_NPEAX_K@Z
     */
    virtual bool readBytes(void *, unsigned __int64);
    /**
     * @hash   509279656
     * @vftbl  10
     * @symbol ?numBytesLeft@RakDataInput@@UEBA_KXZ
     */
    virtual unsigned __int64 numBytesLeft() const;

};