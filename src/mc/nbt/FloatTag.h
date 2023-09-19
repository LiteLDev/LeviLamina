#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class FloatTag : public ::Tag {
public:
    // prevent constructor by default
    FloatTag& operator=(FloatTag const&);
    FloatTag(FloatTag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?write@FloatTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@FloatTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@FloatTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@FloatTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@FloatTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 9, symbol: ?copy@FloatTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@FloatTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // symbol: ??1FloatTag@@UEAA@XZ
    MCVAPI ~FloatTag();

    // symbol: ??0FloatTag@@QEAA@XZ
    MCAPI FloatTag();

    // symbol: ??0FloatTag@@QEAA@M@Z
    MCAPI explicit FloatTag(float);

    // NOLINTEND
};
