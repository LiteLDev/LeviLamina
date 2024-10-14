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

    [[nodiscard]] constexpr ByteArrayTag(Array arr) : Array(std::move(arr)) {} // NOLINT

    [[nodiscard]] constexpr ByteArrayTag(std::initializer_list<uchar> val) : Array(val) {} // NOLINT


public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ByteArrayTag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const { return Tag::ByteArray; }

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

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

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
