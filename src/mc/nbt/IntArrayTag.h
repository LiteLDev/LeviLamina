#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class IntArrayTag : public ::Tag, public std::vector<int> {
public:
    using Array = std::vector<int>;

    using Tag::operator==;

    [[nodiscard]] constexpr IntArrayTag() = default;

    [[nodiscard]] constexpr IntArrayTag(Array arr) : Array(std::move(arr)) {} // NOLINT

    [[nodiscard]] constexpr IntArrayTag(std::initializer_list<int> val) : Array(val) {} // NOLINT

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IntArrayTag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const;

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    // NOLINTEND
};
