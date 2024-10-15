#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

class ByteTag : public ::Tag {
public:
    schar data;

    template <std::integral T>
    constexpr ByteTag& operator=(T value) {
        data = (schar)value;
        return *this;
    }

    template <std::integral T>
    [[nodiscard]] constexpr operator T() const {
        return (T)data;
    }

    [[nodiscard]] constexpr operator std::byte() const { return (std::byte)data; } // NOLINT

    template <std::integral T>
    [[nodiscard]] constexpr explicit ByteTag(T value = 0) : data((schar)value) {}

    [[nodiscard]] constexpr explicit ByteTag(std::byte b) : data(std::to_integer<schar>(b)) {}

    [[nodiscard]] ByteTag operator-() const { return ByteTag{-data}; }

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ByteTag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const { return Tag::Byte; }

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(uchar data);

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class Tag> copy$() const;

    MCAPI bool equals$(class Tag const& rhs) const;

    MCAPI ::Tag::Type getId$() const;

    MCAPI uint64 hash$() const;

    MCAPI class Bedrock::Result<void> load$(class IDataInput& dis);

    MCAPI std::string toString$() const;

    MCAPI void write$(class IDataOutput& dos) const;

    // NOLINTEND
};
namespace ll::inline literals::inline nbt_literals {
[[nodiscard]] inline ByteTag operator""_b(uint64 num) { return ByteTag{(schar)num}; }
} // namespace ll::inline literals::inline nbt_literals
