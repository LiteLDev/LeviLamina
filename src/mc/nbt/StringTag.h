#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class StringTag : public ::Tag {
public:
    std::string data;

    StringTag& operator=(std::string const& value) {
        data = value;
        return *this;
    }

    operator std::string() const { return data; }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StringTag@@UEAA@XZ
    virtual ~StringTag();

    // vIndex: 2, symbol: ?write@StringTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@StringTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@StringTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@StringTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@StringTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 9, symbol: ?copy@StringTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@StringTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // symbol: ??0StringTag@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit StringTag(std::string);

    // symbol: ??0StringTag@@QEAA@XZ
    MCAPI StringTag();

    // NOLINTEND
};
