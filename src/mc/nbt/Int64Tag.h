#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class Int64Tag : public ::Tag {
public:
    int64 data;

    constexpr Int64Tag& operator=(int64 value) {
        data = value;
        return *this;
    }

    constexpr operator int64() const { return data; } // NOLINT

    template <std::integral T>
        requires(sizeof(T) == 8)
    [[nodiscard]] constexpr explicit Int64Tag(T value = 0) : data((int64)value) {}

    Int64Tag operator-() const { return Int64Tag{(int64)-data}; }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Int64Tag@@UEAA@XZ
    virtual ~Int64Tag() = default;

    // vIndex: 2, symbol: ?write@Int64Tag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@Int64Tag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@Int64Tag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@Int64Tag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@Int64Tag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 9, symbol: ?copy@Int64Tag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@Int64Tag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
namespace ll::nbt_literals {
[[nodiscard]] inline Int64Tag operator""_l(uint64 num) { return Int64Tag{(int64)num}; }
} // namespace ll::nbt_literals
