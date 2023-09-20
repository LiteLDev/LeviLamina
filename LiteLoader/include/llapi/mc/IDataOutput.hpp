/**
 * @file  IDataOutput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IDataOutput.
 *
 */
class IDataOutput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDATAOUTPUT
public:
    class IDataOutput& operator=(class IDataOutput const &) = delete;
    IDataOutput(class IDataOutput const &) = delete;
    IDataOutput() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?writeString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeString(class std::basic_string_view<char, struct std::char_traits<char>>) = 0;
    /**
     * @vftbl 2
     * @symbol ?writeLongString\@BytesDataOutput\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void writeLongString(class std::basic_string_view<char, struct std::char_traits<char>>) = 0;
    /**
     * @vftbl 3
     * @symbol ?writeFloat\@BytesDataOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float) = 0;
    /**
     * @vftbl 4
     * @symbol ?writeDouble\@BytesDataOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double) = 0;
    /**
     * @vftbl 5
     * @symbol ?writeByte\@BytesDataOutput\@\@UEAAXD\@Z
     */
    virtual void writeByte(char) = 0;
    /**
     * @vftbl 6
     * @symbol ?writeShort\@BytesDataOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short) = 0;
    /**
     * @vftbl 7
     * @symbol ?writeInt\@BytesDataOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int) = 0;
    /**
     * @vftbl 8
     * @symbol ?writeLongLong\@BytesDataOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(__int64) = 0;
    /**
     * @vftbl 9
     * @symbol ?writeBytes\@RakDataOutput\@\@UEAAXPEBX_K\@Z
     */
    virtual void writeBytes(void const *, unsigned __int64) = 0;

};
