#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class ByteTag : public ::Tag {

public:
    // prevent constructor by default
    ByteTag& operator=(ByteTag const&) = delete;
    ByteTag(ByteTag const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?write\@ByteTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?load\@ByteTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?toString\@ByteTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getId\@ByteTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?equals\@ByteTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?copy\@ByteTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?hash\@ByteTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BYTETAG
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ByteTag(); // NOLINT
#endif
    /**
     * @symbol ??0ByteTag\@\@QEAA\@XZ
     */
    MCAPI ByteTag(); // NOLINT
    /**
     * @symbol ??0ByteTag\@\@QEAA\@E\@Z
     */
    MCAPI ByteTag(unsigned char); // NOLINT
};
