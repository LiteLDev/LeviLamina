#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class IntTag : public ::Tag {

public:
    int data;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?write\@IntTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput&) const;
    /**
     * @vftbl 3
     * @symbol ?load\@IntTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput&);
    /**
     * @vftbl 4
     * @symbol ?toString\@IntTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl 5
     * @symbol ?getId\@IntTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl 6
     * @symbol ?equals\@IntTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const&) const;
    /**
     * @vftbl 9
     * @symbol ?copy\@IntTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl 10
     * @symbol ?hash\@IntTag\@\@UEBA_KXZ
     */
    virtual uint64_t hash() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTTAG
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IntTag();
#endif
    /**
     * @symbol ??0IntTag\@\@QEAA\@H\@Z
     */
    MCAPI IntTag(int);
    /**
     * @symbol ??0IntTag\@\@QEAA\@XZ
     */
    MCAPI IntTag();
    // NOLINTEND
};
