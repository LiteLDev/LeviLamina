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

    [[nodiscard]] constexpr operator std::byte() const { return (std::byte)data; }

    template <std::integral T>
    [[nodiscard]] constexpr explicit ByteTag(T value = 0) : data((schar)value) {}

    [[nodiscard]] constexpr explicit ByteTag(std::byte b) : data(std::to_integer<schar>(b)) {}

    [[nodiscard]] ByteTag operator-() const { return ByteTag{-data}; }

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void write(::IDataOutput& dos) const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    // vIndex: 5
    virtual ::Tag::Type getId() const /*override*/;

    // vIndex: 4
    virtual ::std::string toString() const /*override*/;

    // vIndex: 6
    virtual bool equals(::Tag const& rhs) const /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    // vIndex: 10
    virtual uint64 hash() const /*override*/;

    // vIndex: 0
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
