/**
 * @file  RakDataOutput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakDataOutput.
 *
 */
class RakDataOutput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKDATAOUTPUT
public:
    class RakDataOutput& operator=(class RakDataOutput const &) = delete;
    RakDataOutput(class RakDataOutput const &) = delete;
    RakDataOutput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RakDataOutput();
    /**
     * @hash   -1139473245
     * @vftbl  1
     * @symbol  ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    virtual void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -385427401
     * @vftbl  2
     * @symbol  ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    virtual void writeLongString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -1594132379
     * @vftbl  3
     * @symbol  ?writeFloat\@BytesDataOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float);
    /**
     * @hash   -475571331
     * @vftbl  4
     * @symbol  ?writeDouble\@BytesDataOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double);
    /**
     * @hash   990995873
     * @vftbl  5
     * @symbol  ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char);
    /**
     * @hash   889325701
     * @vftbl  6
     * @symbol  ?writeShort\@BytesDataOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short);
    /**
     * @hash   -905747745
     * @vftbl  7
     * @symbol  ?writeInt\@BytesDataOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int);
    /**
     * @hash   -1324673486
     * @vftbl  8
     * @symbol  ?writeLongLong\@BytesDataOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(__int64);
    /**
     * @hash   99441567
     * @vftbl  9
     * @symbol  ?writeBytes\@RakDataOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const *, unsigned __int64);

};