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

class FloatTag : public ::Tag {
public:
    float data;

    constexpr FloatTag& operator=(float value) noexcept {
        data = value;
        return *this;
    }

    constexpr operator float() const noexcept { return data; }

    [[nodiscard]] constexpr explicit FloatTag(float value = 0) noexcept : data(value) {}

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

    virtual ~FloatTag() /*override*/ = default;
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
[[nodiscard]] inline FloatTag operator""_f(ldouble num) noexcept { return FloatTag{(float)num}; }
} // namespace ll::inline literals::inline nbt_literals
