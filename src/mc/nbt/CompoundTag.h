#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

#include "ll/api/Expected.h"

class CompoundTagVariant;

class CompoundTag : public ::Tag {
public:
    using TagMap = std::map<std::string, CompoundTagVariant, std::less<void>>;

    TagMap mTags;

    CompoundTag() = default;

    CompoundTag(TagMap tags) : mTags(std::move(tags)) {} // NOLINT

    CompoundTag(std::initializer_list<TagMap::value_type> tags) : mTags(tags) {} // NOLINT

    CompoundTag(CompoundTag const&)            = default;
    CompoundTag& operator=(CompoundTag const&) = default;
    CompoundTag(CompoundTag&&)                 = default;
    CompoundTag& operator=(CompoundTag&&)      = default;

    [[nodiscard]] CompoundTagVariant&       operator[](std::string const& index) { return mTags[index]; }
    [[nodiscard]] CompoundTagVariant const& operator[](std::string const& index) const { return mTags.at(index); }

    [[nodiscard]] CompoundTagVariant&       at(std::string const& index) { return mTags[index]; }
    [[nodiscard]] CompoundTagVariant const& at(std::string const& index) const { return mTags.at(index); }

    LLNDAPI static ll::Expected<CompoundTag>
    fromSnbt(std::string_view snbt, optional_ref<size_t> parsedLength = std::nullopt) noexcept;

    LLNDAPI std::string toBinaryNbt(bool isLittleEndian = true) const;
    LLNDAPI static ll::Expected<CompoundTag>
    fromBinaryNbt(std::string_view dataView, bool isLittleEndian = true) noexcept;

    LLNDAPI std::string                      toNetworkNbt() const;
    LLNDAPI static ll::Expected<CompoundTag> fromNetworkNbt(std::string const& data) noexcept;

    size_t size() const noexcept { return mTags.size(); }

    bool contains(std::string_view name) const;

    bool contains(std::string_view name, ::Tag::Type type) const;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundTag() = default;

    // vIndex: 2
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4
    virtual std::string toString() const;

    // vIndex: 5
    virtual ::Tag::Type getId() const { return Tag::Compound; }

    // vIndex: 6
    virtual bool equals(class Tag const& obj) const;

    // vIndex: 8
    virtual void print(std::string const& prefix_, class PrintStream& out) const;

    // vIndex: 9
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10
    virtual uint64 hash() const;

    MCAPI void append(class CompoundTag const& tag);

    MCAPI TagMap::const_iterator begin() const;

    MCAPI void clear();

    MCAPI std::unique_ptr<class CompoundTag> clone() const;

    [[deprecated]] MCAPI void deepCopy(class CompoundTag const& other);

    MCAPI TagMap::const_iterator end() const;

    [[deprecated]] MCAPI class Tag* get(std::string_view name);

    [[deprecated]] MCAPI class Tag const* get(std::string_view name) const;

    [[deprecated]] MCAPI bool getBoolean(std::string_view string) const;

    [[deprecated]] MCAPI uchar getByte(std::string_view name) const;

    [[deprecated]] MCAPI std::vector<uchar> const& getByteArray(std::string_view name) const;

    [[deprecated]] MCAPI class ByteTag* getByteTag(std::string_view name);

    [[deprecated]] MCAPI class CompoundTag* getCompound(std::string_view name);

    [[deprecated]] MCAPI class CompoundTag const* getCompound(std::string_view name) const;

    [[deprecated]] MCAPI float getFloat(std::string_view name) const;

    [[deprecated]] MCAPI int getInt(std::string_view name) const;

    [[deprecated]] MCAPI int64 getInt64(std::string_view name) const;

    [[deprecated]] MCAPI class Int64Tag* getInt64Tag(std::string_view name);

    [[deprecated]] MCAPI class Int64Tag const* getInt64Tag(std::string_view name) const;

    [[deprecated]] MCAPI class IntTag* getIntTag(std::string_view name);

    [[deprecated]] MCAPI class IntTag const* getIntTag(std::string_view name) const;

    [[deprecated]] MCAPI class ListTag* getList(std::string_view name);

    [[deprecated]] MCAPI class ListTag const* getList(std::string_view name) const;

    [[deprecated]] MCAPI short getShort(std::string_view name) const;

    [[deprecated]] MCAPI class ShortTag const* getShortTag(std::string_view name) const;

    [[deprecated]] MCAPI std::string const& getString(std::string_view) const;

    [[deprecated]] MCAPI class StringTag const* getStringTag(std::string_view name) const;

    MCAPI bool isEmpty() const;

    [[deprecated]] MCAPI class Tag& put(std::string name, class Tag&& tag);

    [[deprecated]] MCAPI class Tag* put(std::string name, std::unique_ptr<class Tag> tag);

    [[deprecated]] MCAPI void putBoolean(std::string name, bool val);

    [[deprecated]] MCAPI uchar& putByte(std::string name, uchar value);

    [[deprecated]] MCAPI std::vector<uchar>& putByteArray(std::string, std::vector<uchar>);

    [[deprecated]] MCAPI class CompoundTag& putCompound(std::string name, class CompoundTag value);

    [[deprecated]] MCAPI class CompoundTag* putCompound(std::string name, std::unique_ptr<class CompoundTag> value);

    [[deprecated]] MCAPI float& putFloat(std::string name, float value);

    [[deprecated]] MCAPI int& putInt(std::string name, int value);

    [[deprecated]] MCAPI int64& putInt64(std::string name, int64 value);

    [[deprecated]] MCAPI short& putShort(std::string name, short value);

    [[deprecated]] MCAPI std::string& putString(std::string name, std::string value);

    MCAPI TagMap const& rawView() const;

    MCAPI bool remove(std::string_view name);

    MCAPI void rename(std::string_view name, std::string newName);

    // NOLINTEND
};

#include "mc/nbt/CompoundTagVariant.h"

inline bool CompoundTag::contains(std::string_view name) const { return mTags.find(name) != mTags.end(); }

inline bool CompoundTag::contains(std::string_view name, ::Tag::Type type) const {
    if (auto iter = mTags.find(name); iter != mTags.end()) {
        return iter->second.getId() == type;
    }
    return false;
}
