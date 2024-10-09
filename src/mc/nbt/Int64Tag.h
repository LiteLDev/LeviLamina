#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

class Int64Tag : public ::Tag {
public:
    // prevent constructor by default
    Int64Tag& operator=(Int64Tag const&);
    Int64Tag(Int64Tag const&);
    Int64Tag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Int64Tag() = default;

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

    MCAPI explicit Int64Tag(int64 data);

    // NOLINTEND
};
