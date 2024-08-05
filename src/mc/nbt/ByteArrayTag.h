#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class ByteArrayTag : public ::Tag {
public:
    // prevent constructor by default
    ByteArrayTag& operator=(ByteArrayTag const&);
    ByteArrayTag(ByteArrayTag const&);
    ByteArrayTag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ByteArrayTag();

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

    MCAPI explicit ByteArrayTag(std::vector<uchar>);

    // NOLINTEND
};
