#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class IntTag : public ::Tag {

public:
    // prevent constructor by default
    IntTag& operator=(IntTag const&) = delete;
    IntTag(IntTag const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?write\@IntTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?load\@IntTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?toString\@IntTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getId\@IntTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?equals\@IntTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?copy\@IntTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?hash\@IntTag\@\@UEBA_KXZ
     */
    virtual unsigned __int64 hash() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTTAG
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IntTag(); // NOLINT
#endif
    /**
     * @symbol ??0IntTag\@\@QEAA\@H\@Z
     */
    MCAPI IntTag(int); // NOLINT
    /**
     * @symbol ??0IntTag\@\@QEAA\@XZ
     */
    MCAPI IntTag(); // NOLINT
};
