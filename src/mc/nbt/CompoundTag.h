#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class CompoundTag : public ::Tag {
public:
    // prevent constructor by default
    CompoundTag& operator=(CompoundTag const&);
    CompoundTag(CompoundTag const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundTag();

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const;

    // vIndex: 6
    virtual bool equals(class Tag const& obj) const;

    // vIndex: 8
    virtual void print(std::string const& prefix_, class PrintStream& out) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    MCAPI CompoundTag();

    MCAPI CompoundTag(class CompoundTag&& rhs);

    MCAPI void append(class CompoundTag const& tag);

    MCAPI std::_Tree_const_iterator<
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const, class CompoundTagVariant>>>>
    begin() const;

    MCAPI void clear();

    MCAPI std::unique_ptr<class CompoundTag> clone() const;

    MCAPI bool contains(std::string_view name) const;

    MCAPI bool contains(std::string_view name, ::Tag::Type type) const;

    MCAPI void deepCopy(class CompoundTag const& other);

    MCAPI std::_Tree_const_iterator<
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const, class CompoundTagVariant>>>>
    end() const;

    MCAPI class Tag* get(std::string_view name);

    MCAPI class Tag const* get(std::string_view name) const;

    MCAPI bool getBoolean(std::string_view string) const;

    MCAPI uchar getByte(std::string_view name) const;

    MCAPI std::vector<uchar> const& getByteArray(std::string_view name) const;

    MCAPI class ByteTag* getByteTag(std::string_view name);

    MCAPI class CompoundTag* getCompound(std::string_view name);

    MCAPI class CompoundTag const* getCompound(std::string_view name) const;

    MCAPI float getFloat(std::string_view name) const;

    MCAPI int getInt(std::string_view name) const;

    MCAPI int64 getInt64(std::string_view name) const;

    MCAPI class Int64Tag* getInt64Tag(std::string_view name);

    MCAPI class Int64Tag const* getInt64Tag(std::string_view name) const;

    MCAPI class IntTag* getIntTag(std::string_view name);

    MCAPI class IntTag const* getIntTag(std::string_view name) const;

    MCAPI class ListTag* getList(std::string_view name);

    MCAPI class ListTag const* getList(std::string_view name) const;

    MCAPI short getShort(std::string_view name) const;

    MCAPI class ShortTag const* getShortTag(std::string_view name) const;

    MCAPI std::string const& getString(std::string_view) const;

    MCAPI class StringTag const* getStringTag(std::string_view name) const;

    MCAPI bool isEmpty() const;

    MCAPI class CompoundTag& operator=(class CompoundTag&& rhs);

    MCAPI class Tag& put(std::string name, class Tag&& tag);

    MCAPI class Tag* put(std::string name, std::unique_ptr<class Tag> tag);

    MCAPI void putBoolean(std::string name, bool val);

    MCAPI uchar& putByte(std::string name, uchar value);

    MCAPI std::vector<uchar>& putByteArray(std::string, std::vector<uchar>);

    MCAPI class CompoundTag& putCompound(std::string name, class CompoundTag value);

    MCAPI class CompoundTag* putCompound(std::string name, std::unique_ptr<class CompoundTag> value);

    MCAPI float& putFloat(std::string name, float value);

    MCAPI int& putInt(std::string name, int value);

    MCAPI int64& putInt64(std::string name, int64 value);

    MCAPI short& putShort(std::string name, short value);

    MCAPI std::string& putString(std::string name, std::string value);

    MCAPI std::map<std::string, class CompoundTagVariant, std::less<void>> const& rawView() const;

    MCAPI bool remove(std::string_view name);

    MCAPI void rename(std::string_view name, std::string newName);

    MCAPI uint64 size() const;

    // NOLINTEND
};
