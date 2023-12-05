#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class ByteTag : public ::Tag {
public:
    schar data;

    constexpr ByteTag& operator=(schar value) {
        data = value;
        return *this;
    }

    constexpr operator schar() const { return data; } // NOLINT

    template <std::integral T>
        requires(sizeof(T) == 1)
    [[nodiscard]] constexpr explicit ByteTag(T value = 0) : data((schar)value) {}

    constexpr explicit operator bool() const { return data != 0; }

    ByteTag operator-() const { return ByteTag{(schar)-data}; }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ByteTag@@UEAA@XZ
    virtual ~ByteTag();

    // vIndex: 2, symbol: ?write@ByteTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@ByteTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@ByteTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@ByteTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@ByteTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 9, symbol: ?copy@ByteTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@ByteTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
namespace ll::nbt_literals {
[[nodiscard]] inline ByteTag operator""_b(uint64 num) { return ByteTag{(schar)num}; }
} // namespace ll::nbt_literals
