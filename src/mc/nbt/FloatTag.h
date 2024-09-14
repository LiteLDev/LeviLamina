#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class FloatTag : public ::Tag {
public:
    float data;

    constexpr FloatTag& operator=(float value) noexcept {
        data = value;
        return *this;
    }

    constexpr operator float() const noexcept { return data; } // NOLINT

    [[nodiscard]] constexpr explicit FloatTag(float value = 0) noexcept : data(value) {}

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FloatTag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const { return Tag::Float; }

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    // NOLINTEND
};
namespace ll::inline literals::inline nbt_literals {
[[nodiscard]] inline FloatTag operator""_f(ldouble num) noexcept { return FloatTag{(float)num}; }
} // namespace ll::inline literals::inline nbt_literals
