#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual ~BytesDataInput() = default;
    /**
     * @vftbl 1
     * @symbol
     * ?readString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readString();
    /**
     * @vftbl 2
     * @symbol
     * ?readLongString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readLongString();
    /**
     * @vftbl 3
     * @symbol ?readFloat\@BytesDataInput\@\@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @vftbl 4
     * @symbol ?readDouble\@BytesDataInput\@\@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @vftbl 5
     * @symbol ?readByte\@BytesDataInput\@\@UEAADXZ
     */
    virtual char readByte();
    /**
     * @vftbl 6
     * @symbol ?readShort\@BytesDataInput\@\@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @vftbl 7
     * @symbol ?readInt\@BytesDataInput\@\@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @vftbl 8
     * @symbol ?readLongLong\@BytesDataInput\@\@UEAA_JXZ
     */
    virtual int64_t readLongLong();
    /**
     * @vftbl 9
     * @symbol ?readBytes\@BytesDataInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void*, uint64_t) = 0;
    /**
     * @vftbl 10
     * @symbol ?numBytesLeft\@StringByteInput\@\@UEBA_KXZ
     */
    virtual uint64_t numBytesLeft() const = 0;
    // NOLINTEND
};
