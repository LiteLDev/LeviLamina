#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

class ListTag : public ::Tag {
public:
    // prevent constructor by default
    ListTag& operator=(ListTag const&);
    ListTag(ListTag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ListTag();

    // vIndex: 1
    virtual void deleteChildren();

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

    // vIndex: 8
    virtual void print(std::string const& prefix_, class PrintStream& out) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    MCAPI ListTag();

    MCAPI void add(std::unique_ptr<class Tag> tag);

    MCAPI std::unique_ptr<class ListTag> copyList() const;

    MCAPI void erase(uint64 index);

    MCAPI void forEachCompoundTag(std::function<void(class CompoundTag const&)> func) const;

    MCAPI class Tag* get(int index) const;

    MCAPI class CompoundTag* getCompound(uint64 index);

    MCAPI class CompoundTag const* getCompound(uint64 index) const;

    MCAPI double getDouble(int index) const;

    MCAPI float getFloat(int index) const;

    MCAPI int getInt(int index) const;

    MCAPI int64 getInt64(int index) const;

    MCAPI std::string const& getString(int index) const;

    MCAPI void popBack();

    MCAPI int size() const;

    // NOLINTEND
};
