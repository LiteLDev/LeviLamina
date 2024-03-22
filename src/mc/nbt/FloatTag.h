#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class FloatTag : public ::Tag {
public:
    float data;

    constexpr FloatTag& operator=(float value) {
        data = value;
        return *this;
    }

    constexpr operator float() const { return data; } // NOLINT

    [[nodiscard]] constexpr explicit FloatTag(float value = 0) : data(value) {}

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FloatTag@@UEAA@XZ
    virtual ~FloatTag();

    // vIndex: 2, symbol: ?write@FloatTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@FloatTag@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVIDataInput@@@Z
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4, symbol: ?toString@FloatTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@FloatTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@FloatTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9, symbol: ?copy@FloatTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@FloatTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
namespace ll::nbt_literals {
[[nodiscard]] inline FloatTag operator""_f(ldouble num) { return FloatTag{(float)num}; }
} // namespace ll::nbt_literals
