#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
// clang-format on

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

    [[nodiscard]] constexpr operator std::byte() const { return (std::byte)data; }

    template <std::integral T>
    [[nodiscard]] constexpr explicit ByteTag(T value = 0) : data((schar)value) {}

    [[nodiscard]] constexpr explicit ByteTag(std::byte b) : data(std::to_integer<schar>(b)) {}

    [[nodiscard]] ByteTag operator-() const { return ByteTag{-data}; }

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void write(::IDataOutput& dos) const /*override*/;

    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    virtual ::Tag::Type getId() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual bool equals(::Tag const& rhs) const /*override*/;

    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual ~ByteTag() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI bool $equals(::Tag const& rhs) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI uint64 $hash() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
namespace ll::inline literals::inline nbt_literals {
[[nodiscard]] inline ByteTag operator""_b(uint64 num) { return ByteTag{(schar)num}; }
} // namespace ll::inline literals::inline nbt_literals
