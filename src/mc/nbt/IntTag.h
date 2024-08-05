#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class IntTag : public ::Tag {
public:
    int data;

    template <std::integral T>
    constexpr IntTag& operator=(int value) {
        data = (int)value;
        return *this;
    }

    template <std::integral T>
    [[nodiscard]] constexpr operator T() const {
        return (T)data;
    }

    template <std::integral T>
    [[nodiscard]] constexpr explicit IntTag(T value = 0) : data((int)value) {}

    [[nodiscard]] IntTag operator-() const { return IntTag{-data}; }

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IntTag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const;

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    // NOLINTEND
};
namespace ll::nbt_literals {
[[nodiscard]] inline IntTag operator""_i(uint64 num) { return IntTag{(int)num}; }
} // namespace ll::nbt_literals
