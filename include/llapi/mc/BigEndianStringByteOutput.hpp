/**
 * @file  BigEndianStringByteOutput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StringByteOutput.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BigEndianStringByteOutput.
 *
 */
class BigEndianStringByteOutput : public StringByteOutput {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIGENDIANSTRINGBYTEOUTPUT
public:
    class BigEndianStringByteOutput& operator=(class BigEndianStringByteOutput const &) = delete;
    BigEndianStringByteOutput(class BigEndianStringByteOutput const &) = delete;
    BigEndianStringByteOutput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BigEndianStringByteOutput();
    /**
     * @vftbl  3
     * @symbol  ?writeFloat\@BigEndianStringByteOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float);
    /**
     * @vftbl  4
     * @symbol  ?writeDouble\@BigEndianStringByteOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double);
    /**
     * @vftbl  6
     * @symbol  ?writeShort\@BigEndianStringByteOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short);
    /**
     * @vftbl  7
     * @symbol  ?writeInt\@BigEndianStringByteOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int);
    /**
     * @vftbl  8
     * @symbol  ?writeLongLong\@BigEndianStringByteOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(__int64);

};