#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

class ByteArrayTag : public ::Tag, public std::vector<uchar> {
public:
    using Array = std::vector<uchar>;

    using Tag::operator==;

    [[nodiscard]] constexpr ByteArrayTag() = default;

    [[nodiscard]] constexpr ByteArrayTag(Array arr) : Array(std::move(arr)) {}

    [[nodiscard]] constexpr ByteArrayTag(std::initializer_list<uchar> val) : Array(val) {}


public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::Tag::Type getId() const /*override*/;

    // vIndex: 4
    virtual ::std::string toString() const /*override*/;

    // vIndex: 6
    virtual bool equals(::Tag const& rhs) const /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    // vIndex: 2
    virtual void write(::IDataOutput& dos) const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    // vIndex: 10
    virtual uint64 hash() const /*override*/;

    // vIndex: 0
    virtual ~ByteArrayTag() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI bool $equals(::Tag const& rhs) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCAPI uint64 $hash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
