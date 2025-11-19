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

    [[nodiscard]] CompoundTagVariant&       at(std::string_view index) { return operator[](index); }
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

    bool erase(std::string_view name);
    void rename(std::string_view name, std::string_view newName);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundTag() /*override*/ = default;

    // vIndex: 2
    virtual void write(::IDataOutput& dos) const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    // vIndex: 5
    virtual ::Tag::Type getId() const /*override*/;

    // vIndex: 4
    virtual ::std::string toString() const /*override*/;

    // vIndex: 7
    virtual void print(::std::string const& prefix_, ::PrintStream& out) const /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    // vIndex: 10
    virtual uint64 hash() const /*override*/;

    // vIndex: 6
    virtual bool equals(::Tag const& obj) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    MCAPI void append(::CompoundTag const& tag);

    MCAPI ::std::unique_ptr<::CompoundTag> clone() const;

    MCAPI bool contains(::std::string_view name) const;

    MCAPI bool contains(::std::string_view name, ::Tag::Type type) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CompoundTag&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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

#include "mc/nbt/CompoundTagVariant.h"
