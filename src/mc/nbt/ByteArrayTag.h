#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class ByteArrayTag : public ::Tag {
public:
    // prevent constructor by default
    ByteArrayTag& operator=(ByteArrayTag const&);
    ByteArrayTag(ByteArrayTag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?write@ByteArrayTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@ByteArrayTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@ByteArrayTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@ByteArrayTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@ByteArrayTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 9, symbol: ?copy@ByteArrayTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@ByteArrayTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // symbol: ??0ByteArrayTag@@QEAA@UTagMemoryChunk@@@Z
    MCAPI explicit ByteArrayTag(struct TagMemoryChunk);

    // symbol: ??0ByteArrayTag@@QEAA@XZ
    MCAPI ByteArrayTag();

    // NOLINTEND
};
