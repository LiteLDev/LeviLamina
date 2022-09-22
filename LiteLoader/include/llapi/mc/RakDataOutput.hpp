/**
 * @file  RakDataOutput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~RakDataOutput();
    /**
     * @hash   -488868557
     * @vftbl  1
     * @symbol ?writeString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    virtual void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   265192663
     * @vftbl  2
     * @symbol ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    virtual void writeLongString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -1839702475
     * @vftbl  3
     * @symbol ?writeFloat@BytesDataOutput@@UEAAXM@Z
     */
    virtual void writeFloat(float);
    /**
     * @hash   -721126051
     * @vftbl  4
     * @symbol ?writeDouble@BytesDataOutput@@UEAAXN@Z
     */
    virtual void writeDouble(double);
    /**
     * @hash   745456529
     * @vftbl  5
     * @symbol ?writeByte@BytesDataOutput@@UEAAXD@Z
     */
    virtual void writeByte(char);
    /**
     * @hash   643709477
     * @vftbl  6
     * @symbol ?writeShort@BytesDataOutput@@UEAAXF@Z
     */
    virtual void writeShort(short);
    /**
     * @hash   -1151333217
     * @vftbl  7
     * @symbol ?writeInt@BytesDataOutput@@UEAAXH@Z
     */
    virtual void writeInt(int);
    /**
     * @hash   -1570274334
     * @vftbl  8
     * @symbol ?writeLongLong@BytesDataOutput@@UEAAX_J@Z
     */
    virtual void writeLongLong(__int64);
    /**
     * @hash   -1044855729
     * @vftbl  9
     * @symbol ?writeBytes@RakDataOutput@@UEAAXPEBX_K@Z
     */
    virtual void writeBytes(void const *, unsigned __int64);

};