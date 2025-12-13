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

class StringTag : public ::Tag, public std::string {
public:
    using Tag::operator==;

    [[nodiscard]] constexpr StringTag() = default;

    [[nodiscard]] constexpr StringTag(std::string str) : std::string(std::move(str)) {}
    [[nodiscard]] constexpr StringTag(std::string_view str) : std::string(str) {}
    template <size_t N>
    [[nodiscard]] constexpr StringTag(char const (&str)[N]) : std::string(str) {}

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

    virtual ~StringTag() /*override*/ = default;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

    MCFOLD uint64 $hash() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
namespace ll::inline literals::inline nbt_literals {
[[nodiscard]] inline StringTag operator""_tag(char const* x, size_t len) { return StringTag(std::string{x, len}); }
} // namespace ll::inline literals::inline nbt_literals
