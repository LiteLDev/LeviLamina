#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class IntTag : public ::Tag {
public:
    // prevent constructor by default
    IntTag& operator=(IntTag const&);
    IntTag(IntTag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IntTag@@UEAA@XZ
    virtual ~IntTag();

    // vIndex: 2, symbol: ?write@IntTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@IntTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput& dis);

    // vIndex: 4, symbol: ?toString@IntTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@IntTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@IntTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9, symbol: ?copy@IntTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@IntTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // symbol: ??0IntTag@@QEAA@XZ
    MCAPI IntTag();

    // symbol: ??0IntTag@@QEAA@H@Z
    MCAPI explicit IntTag(int data);

    // NOLINTEND
};
