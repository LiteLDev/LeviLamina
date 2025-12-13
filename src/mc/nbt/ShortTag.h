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
    // virtual functions
    // NOLINTBEGIN
    virtual void write(::IDataOutput& dos) const /*override*/;

    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    virtual ::Tag::Type getId() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    virtual bool equals(::Tag const& rhs) const /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual ~ShortTag() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI bool $equals(::Tag const& rhs) const;

    MCAPI uint64 $hash() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
namespace ll::inline literals::inline nbt_literals {
[[nodiscard]] inline ShortTag operator""_s(uint64 num) noexcept { return ShortTag{(short)num}; }
} // namespace ll::inline literals::inline nbt_literals
