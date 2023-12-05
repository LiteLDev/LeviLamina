#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/TagMemoryChunk.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class ByteArrayTag : public ::Tag {
public:
    TagMemoryChunk data{};

    operator TagMemoryChunk() const { return data; }

    ByteArrayTag() = default;

    [[nodiscard]] constexpr ByteArrayTag(TagMemoryChunk mem) : data(std::move(mem)) {} // NOLINT

    [[nodiscard]] constexpr ByteArrayTag(std::vector<schar> const& arr) : data(std::span{arr}) {} // NOLINT

    std::span<schar> view() const { return std::span<schar>((schar*)data.mBuffer.get(), data.mSize); }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ByteArrayTag@@UEAA@XZ
    virtual ~ByteArrayTag() = default;

    // vIndex: 2, symbol: ?write@ByteArrayTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput&) const;

    // vIndex: 3, symbol: ?load@ByteArrayTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput&);

    // vIndex: 4, symbol: ?toString@ByteArrayTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@ByteArrayTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@ByteArrayTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const&) const;

    // vIndex: 9, symbol: ?copy@ByteArrayTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@ByteArrayTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
