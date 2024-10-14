#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/UniqueTagPtr.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

class CompoundTagVariant;

class ListTag : public ::Tag, public std::vector<UniqueTagPtr> {
public:
    using List = std::vector<UniqueTagPtr>;
    Tag::Type mType{Tag::End};

    using Tag::operator==;

public:
    [[nodiscard]] constexpr ListTag() = default;

    [[nodiscard]] constexpr ListTag(List tags) : List(std::move(tags)) {
        if (!empty()) mType = front().getId();
    }
    [[nodiscard]] constexpr ListTag(std::initializer_list<CompoundTagVariant> tags);
    [[nodiscard]] constexpr ListTag(std::vector<CompoundTagVariant> tags);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ListTag() = default;

    // vIndex: 1
    virtual void deleteChildren() { clear(); }

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const { return Tag::List; }

    // vIndex: 6
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 8
    virtual void print(std::string const& prefix_, class PrintStream& out) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

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

    MCAPI void deleteChildren$();

    MCAPI bool equals$(class Tag const& rhs) const;

    MCAPI ::Tag::Type getId$() const;

    MCAPI uint64 hash$() const;

    MCAPI class Bedrock::Result<void> load$(class IDataInput& dis);

    MCAPI void print$(std::string const& prefix_, class PrintStream& out) const;

    MCAPI std::string toString$() const;

    MCAPI void write$(class IDataOutput& dos) const;

    // NOLINTEND
};
