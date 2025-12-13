#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

class IntArrayTag : public ::Tag, public std::vector<int> {
public:
    using Array = std::vector<int>;

    using Tag::operator==;

    [[nodiscard]] constexpr IntArrayTag() = default;

    [[nodiscard]] constexpr IntArrayTag(Array arr) : Array(std::move(arr)) {}

    [[nodiscard]] constexpr IntArrayTag(std::initializer_list<int> val) : Array(val) {}

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Tag::Type getId() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual bool equals(::Tag const& rhs) const /*override*/;

    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    virtual void write(::IDataOutput& dos) const /*override*/;

    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual ~IntArrayTag() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCFOLD bool $equals(::Tag const& rhs) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCAPI uint64 $hash() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
