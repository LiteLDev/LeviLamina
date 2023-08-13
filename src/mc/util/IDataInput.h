#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataInput {

public:
    // prevent constructor by default
    IDataInput& operator=(IDataInput const&) = delete;
    IDataInput(IDataInput const&)            = delete;
    IDataInput()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?readString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readString() = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?readLongString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readLongString() = 0;
    /**
     * @vftbl 3
     * @symbol ?readFloat\@BigEndianStringByteInput\@\@UEAAMXZ
     */
    virtual float readFloat() = 0;
    /**
     * @vftbl 4
     * @symbol ?readDouble\@BigEndianStringByteInput\@\@UEAANXZ
     */
    virtual double readDouble() = 0;
    /**
     * @vftbl 5
     * @symbol ?readByte\@BytesDataInput\@\@UEAADXZ
     */
    virtual char readByte() = 0;
    /**
     * @vftbl 6
     * @symbol ?readShort\@BigEndianStringByteInput\@\@UEAAFXZ
     */
    virtual short readShort() = 0;
    /**
     * @vftbl 7
     * @symbol ?readInt\@BigEndianStringByteInput\@\@UEAAHXZ
     */
    virtual int readInt() = 0;
    /**
     * @vftbl 8
     * @symbol ?readLongLong\@BigEndianStringByteInput\@\@UEAA_JXZ
     */
    virtual int64_t readLongLong() = 0;
    /**
     * @vftbl 9
     * @symbol ?readBytes\@StringByteInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void*, uint64_t) = 0;
    /**
     * @vftbl 10
     * @symbol ?numBytesLeft\@StringByteInput\@\@UEBA_KXZ
     */
    virtual uint64_t numBytesLeft() const = 0;
    // NOLINTEND
};
