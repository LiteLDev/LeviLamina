#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class DoubleTag : public ::Tag {
public:
    double data;

    DoubleTag& operator=(double value) {
        data = value;
        return *this;
    }

    operator double() const { return data; }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual ~DoubleTag() {}

    // vIndex: 2, symbol: ?write@DoubleTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@DoubleTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@DoubleTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@DoubleTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@DoubleTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 9, symbol: ?copy@DoubleTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@DoubleTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
