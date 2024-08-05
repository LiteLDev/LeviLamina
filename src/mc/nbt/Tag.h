#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class Tag {
public:
    // Tag inner types define
    enum class Type {};

public:
    // prevent constructor by default
    Tag& operator=(Tag const&);
    Tag(Tag const&);
    Tag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Tag();

    // vIndex: 1
    virtual void deleteChildren();

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const = 0;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis) = 0;

    // vIndex: 4
    virtual std::string toString() const = 0;

    // vIndex: 5
    virtual ::Tag::Type getId() const = 0;

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 7
    virtual void print(class PrintStream& out) const;

    // vIndex: 8
    virtual void print(std::string const& prefix, class PrintStream& out) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const = 0;

    // vIndex: 10
    virtual uint64 hash() const = 0;

    MCAPI static std::string getTagName(::Tag::Type);

    MCAPI static class Bedrock::Result<std::unique_ptr<class Tag>> newTag(::Tag::Type type);

    MCAPI static std::string const NullString;

    // NOLINTEND
};
