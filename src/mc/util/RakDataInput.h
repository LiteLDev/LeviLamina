#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BytesDataInput.h"

class RakDataInput : public ::BytesDataInput {

public:
    // prevent constructor by default
    RakDataInput& operator=(RakDataInput const&) = delete;
    RakDataInput(RakDataInput const&)            = delete;
    RakDataInput()                               = delete;

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
    virtual std::string readString();
    /**
     * @vftbl 2
     * @symbol
     * ?readLongString\@BytesDataInput\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string readLongString();
    /**
     * @vftbl 3
     * @symbol ?readFloat\@BigEndianStringByteInput\@\@UEAAMXZ
     */
    virtual float readFloat();
    /**
     * @vftbl 4
     * @symbol ?readDouble\@BigEndianStringByteInput\@\@UEAANXZ
     */
    virtual double readDouble();
    /**
     * @vftbl 5
     * @symbol ?readByte\@BytesDataInput\@\@UEAADXZ
     */
    virtual char readByte();
    /**
     * @vftbl 6
     * @symbol ?readShort\@BigEndianStringByteInput\@\@UEAAFXZ
     */
    virtual short readShort();
    /**
     * @vftbl 7
     * @symbol ?readInt\@BigEndianStringByteInput\@\@UEAAHXZ
     */
    virtual int readInt();
    /**
     * @vftbl 8
     * @symbol ?readLongLong\@BigEndianStringByteInput\@\@UEAA_JXZ
     */
    virtual int64_t readLongLong();
    /**
     * @vftbl 9
     * @symbol ?readBytes\@RakDataInput\@\@UEAA_NPEAX_K\@Z
     */
    virtual bool readBytes(void*, uint64_t);
    /**
     * @vftbl 10
     * @symbol ?numBytesLeft\@RakDataInput\@\@UEBA_KXZ
     */
    virtual uint64_t numBytesLeft() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKDATAINPUT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakDataInput();
#endif
    // NOLINTEND
};
