/**
 * @file  StringByteOutput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~StringByteOutput();
    /**
     * @hash   -883205322
     * @vftbl  1
     * @symbol  ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    virtual void writeString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -129159478
     * @vftbl  2
     * @symbol  ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    virtual void writeLongString(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   239719128
     * @vftbl  3
     * @symbol  ?writeFloat\@BigEndianStringByteOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float);
    /**
     * @hash   838069744
     * @vftbl  4
     * @symbol  ?writeDouble\@BigEndianStringByteOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double);
    /**
     * @hash   1247263796
     * @vftbl  5
     * @symbol  ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char);
    /**
     * @hash   118186744
     * @vftbl  6
     * @symbol  ?writeShort\@BigEndianStringByteOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short);
    /**
     * @hash   151274834
     * @vftbl  7
     * @symbol  ?writeInt\@BigEndianStringByteOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int);
    /**
     * @hash   1853310181
     * @vftbl  8
     * @symbol  ?writeLongLong\@BigEndianStringByteOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(__int64);
    /**
     * @hash   -498729780
     * @vftbl  9
     * @symbol  ?writeBytes\@StringByteOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const *, unsigned __int64);

};