#pragma once

#include "ll/api/Expected.h"
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class CompoundTagVariant;
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

class CompoundTag : public ::Tag {
public:
    using TagMap = std::map<std::string, CompoundTagVariant, std::less<void>>;

    TagMap mTags;

    using iterator               = TagMap::iterator;
    using const_iterator         = TagMap::const_iterator;
    using reverse_iterator       = TagMap::reverse_iterator;
    using const_reverse_iterator = TagMap::const_reverse_iterator;

    CompoundTag() = default;

    CompoundTag(TagMap tags) : mTags(std::move(tags)) {}

    CompoundTag(std::initializer_list<TagMap::value_type> tagPairs) : mTags(tagPairs) {}

    CompoundTag(CompoundTag const&)            = default;
    CompoundTag& operator=(CompoundTag const&) = default;
    CompoundTag(CompoundTag&&)                 = default;
    CompoundTag& operator=(CompoundTag&&)      = default;

    [[nodiscard]] CompoundTagVariant&       operator[](std::string_view index);
    [[nodiscard]] CompoundTagVariant const& operator[](std::string_view index) const;

    [[nodiscard]] CompoundTagVariant& at(std::string_view index) {
        return const_cast<CompoundTagVariant&>(std::as_const(*this).operator[](index));
    }
    [[nodiscard]] CompoundTagVariant const& at(std::string_view index) const { return operator[](index); }

    LLNDAPI static ll::Expected<CompoundTag>
    fromSnbt(std::string_view snbt, optional_ref<size_t> parsedLength = std::nullopt) noexcept;

    LLNDAPI std::string toBinaryNbt(bool isLittleEndian = true) const;
    LLNDAPI static ll::Expected<CompoundTag>
    fromBinaryNbt(std::string_view dataView, bool isLittleEndian = true) noexcept;

    LLNDAPI std::string                      toNetworkNbt() const;
    LLNDAPI static ll::Expected<CompoundTag> fromNetworkNbt(std::string const& data) noexcept;

    [[nodiscard]] size_t size() const noexcept { return mTags.size(); }
    [[nodiscard]] bool   empty() const noexcept { return mTags.empty(); }

    [[nodiscard]] auto begin() noexcept;
    [[nodiscard]] auto begin() const noexcept;
    [[nodiscard]] auto end() noexcept;
    [[nodiscard]] auto end() const noexcept;
    [[nodiscard]] auto rbegin() noexcept;
    [[nodiscard]] auto rbegin() const noexcept;
    [[nodiscard]] auto rend() noexcept;
    [[nodiscard]] auto rend() const noexcept;
    [[nodiscard]] auto cbegin() const noexcept;
    [[nodiscard]] auto cend() const noexcept;
    [[nodiscard]] auto crbegin() const noexcept;
    [[nodiscard]] auto crend() const noexcept;

    bool               erase(std::string_view name);
    void               rename(std::string_view name, std::string_view newName);
    [[nodiscard]] bool contains(std::string_view name) const { return mTags.contains(name); }
    LLNDAPI bool       contains(std::string_view name, Type type) const;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundTag() /*override*/ = default;

    virtual void write(::IDataOutput& dos) const /*override*/;

    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    virtual ::Tag::Type getId() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual void print(::std::string const& prefix_, ::PrintStream& out) const /*override*/;

    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual bool equals(::Tag const& obj) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void append(::CompoundTag const& tag);

    MCAPI ::std::unique_ptr<::CompoundTag> clone() const;

    MCAPI void deepCopy(::CompoundTag const& other);

    MCFOLD ::Tag const* get(::std::string_view name) const;

    MCFOLD ::Tag* get(::std::string_view name);

    MCAPI ::std::vector<uchar> const& getByteArray(::std::string_view name) const;

    MCAPI ::Tag& put(::std::string name, ::Tag&& tag);

    MCAPI ::Tag* put(::std::string name, ::std::unique_ptr<::Tag> tag);

    MCAPI void putBoolean(::std::string name, bool val);

    MCAPI uchar& putByte(::std::string name, uchar value);

    MCAPI ::std::vector<uchar>& putByteArray(::std::string name, ::std::vector<uchar> mem);

    MCAPI ::CompoundTag& putCompound(::std::string name, ::CompoundTag value);

    MCAPI ::CompoundTag* putCompound(::std::string name, ::std::unique_ptr<::CompoundTag> value);

    MCAPI float& putFloat(::std::string name, float value);

    MCAPI int& putInt(::std::string name, int value);

    MCAPI int64& putInt64(::std::string name, int64 value);

    MCAPI short& putShort(::std::string name, short value);

    MCAPI ::std::string& putString(::std::string name, ::std::string value);

    MCAPI bool remove(::std::string_view name);

    MCAPI void rename(::std::string_view name, ::std::string newName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI void $print(::std::string const& prefix_, ::PrintStream& out) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI uint64 $hash() const;

    MCAPI bool $equals(::Tag const& obj) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#include "mc/deps/nbt/CompoundTagVariant.h"
