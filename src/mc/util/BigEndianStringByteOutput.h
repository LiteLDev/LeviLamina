#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteOutput.h"

class BigEndianStringByteOutput : public ::StringByteOutput {

public:
    // prevent constructor by default
    BigEndianStringByteOutput& operator=(BigEndianStringByteOutput const&) = delete;
    BigEndianStringByteOutput(BigEndianStringByteOutput const&)            = delete;
    BigEndianStringByteOutput()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?writeFloat\@BigEndianStringByteOutput\@\@UEAAXM\@Z
     */
    virtual void writeFloat(float);
    /**
     * @vftbl 4
     * @symbol ?writeDouble\@BigEndianStringByteOutput\@\@UEAAXN\@Z
     */
    virtual void writeDouble(double);
    /**
     * @vftbl 6
     * @symbol ?writeShort\@BigEndianStringByteOutput\@\@UEAAXF\@Z
     */
    virtual void writeShort(short);
    /**
     * @vftbl 7
     * @symbol ?writeInt\@BigEndianStringByteOutput\@\@UEAAXH\@Z
     */
    virtual void writeInt(int);
    /**
     * @vftbl 8
     * @symbol ?writeLongLong\@BigEndianStringByteOutput\@\@UEAAX_J\@Z
     */
    virtual void writeLongLong(int64_t);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIGENDIANSTRINGBYTEOUTPUT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BigEndianStringByteOutput();
#endif
    // NOLINTEND
};
