/**
 * @file  StringByteOutput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StringByteOutput.
 *
 */
class StringByteOutput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRINGBYTEOUTPUT
public:
    class StringByteOutput& operator=(class StringByteOutput const &) = delete;
    StringByteOutput(class StringByteOutput const &) = delete;
    StringByteOutput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StringByteOutput();
    /**
     * @hash   -232600634
     * @vftbl  1
     * @symbol ?writeString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    virtual void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   521460586
     * @vftbl  2
     * @symbol ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    virtual void writeLongString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -5850968
     * @vftbl  3
     * @symbol ?writeFloat@BigEndianStringByteOutput@@UEAAXM@Z
     */
    virtual void writeFloat(float);
    /**
     * @hash   592515024
     * @vftbl  4
     * @symbol ?writeDouble@BigEndianStringByteOutput@@UEAAXN@Z
     */
    virtual void writeDouble(double);
    /**
     * @hash   1001724452
     * @vftbl  5
     * @symbol ?writeByte@BytesDataOutput@@UEAAXD@Z
     */
    virtual void writeByte(char);
    /**
     * @hash   -127429480
     * @vftbl  6
     * @symbol ?writeShort@BigEndianStringByteOutput@@UEAAXF@Z
     */
    virtual void writeShort(short);
    /**
     * @hash   -94310638
     * @vftbl  7
     * @symbol ?writeInt@BigEndianStringByteOutput@@UEAAXH@Z
     */
    virtual void writeInt(int);
    /**
     * @hash   1607709333
     * @vftbl  8
     * @symbol ?writeLongLong@BigEndianStringByteOutput@@UEAAX_J@Z
     */
    virtual void writeLongLong(__int64);
    /**
     * @hash   -744284500
     * @vftbl  9
     * @symbol ?writeBytes@StringByteOutput@@UEAAXPEBX_K@Z
     */
    virtual void writeBytes(void const *, unsigned __int64);

};