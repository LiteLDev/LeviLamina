#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class ShortTag : public ::Tag {
public:
    short data;

    ShortTag& operator=(short value) {
        data = value;
        return *this;
    }

    operator short() const { return data; }

    explicit ShortTag(short value) : data(value) {}

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShortTag@@UEAA@XZ
    virtual ~ShortTag() = default;

    // vIndex: 2, symbol: ?write@ShortTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@ShortTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@ShortTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@ShortTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@ShortTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 9, symbol: ?copy@ShortTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@ShortTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
namespace ll::nbt_literals {
[[nodiscard]] inline ShortTag operator""_s(uint64 num) { return ShortTag{(short)num}; }
} // namespace ll::nbt_literals
