#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

class ShortTag : public ::Tag {
public:
    short data;

    template <std::integral T>
    constexpr ShortTag& operator=(T value) noexcept {
        data = (short)value;
        return *this;
    }

    template <std::integral T>
    [[nodiscard]] constexpr operator T() const noexcept {
        return (T)data;
    }

    template <std::integral T>
    [[nodiscard]] constexpr explicit ShortTag(T value = 0) noexcept : data((short)value) {}

    [[nodiscard]] ShortTag operator-() const noexcept { return ShortTag{(short)-data}; }

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShortTag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const { return Tag::Short; }

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
[[nodiscard]] inline ShortTag operator""_s(uint64 num) noexcept { return ShortTag{(short)num}; }
} // namespace ll::inline literals::inline nbt_literals
