#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/StringByteInput.h"

class BigEndianStringByteInput : public ::StringByteInput {

public:
    // prevent constructor by default
    BigEndianStringByteInput& operator=(BigEndianStringByteInput const&) = delete;
    BigEndianStringByteInput(BigEndianStringByteInput const&)            = delete;
    BigEndianStringByteInput()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?readFloat\@BigEndianStringByteInput\@\@UEAAMXZ
     */
    virtual float readFloat(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?readDouble\@BigEndianStringByteInput\@\@UEAANXZ
     */
    virtual double readDouble(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?readShort\@BigEndianStringByteInput\@\@UEAAFXZ
     */
    virtual short readShort(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?readInt\@BigEndianStringByteInput\@\@UEAAHXZ
     */
    virtual int readInt(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?readLongLong\@BigEndianStringByteInput\@\@UEAA_JXZ
     */
    virtual __int64 readLongLong(); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?readBytes\@BigEndianStringByteInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void*, unsigned __int64); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?readBigEndianBytes\@BigEndianStringByteInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBigEndianBytes(void*, unsigned __int64); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIGENDIANSTRINGBYTEINPUT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BigEndianStringByteInput(); // NOLINT
#endif
};
