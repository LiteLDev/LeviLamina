#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class Int64Tag : public ::Tag {
public:
    int64 data;

    template <std::integral T>
    constexpr Int64Tag& operator=(int64 value) {
        data = (int64)value;
        return *this;
    }

    template <std::integral T>
    [[nodiscard]] constexpr operator T() const {
        return (T)data;
    }

    template <std::integral T>
    [[nodiscard]] constexpr explicit Int64Tag(T value = 0) : data((int64)value) {}

    [[nodiscard]] Int64Tag operator-() const { return Int64Tag{(int64)-data}; }

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Int64Tag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const { return Tag::Int64; }

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    MCAPI explicit Int64Tag(int64 data);

    // NOLINTEND
};

namespace ll::nbt_literals {
[[nodiscard]] inline Int64Tag operator""_l(uint64 num) { return Int64Tag{(int64)num}; }
} // namespace ll::nbt_literals
