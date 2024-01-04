#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/TagMemoryChunk.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class ByteArrayTag : public ::Tag {
public:
    TagMemoryChunk data{};

    [[nodiscard]] _CONSTEXPR23 operator TagMemoryChunk const&() const { return data; } // NOLINT
    [[nodiscard]] _CONSTEXPR23 operator TagMemoryChunk&() { return data; }             // NOLINT

    ByteArrayTag() = default;

    template <class T>
        requires(std::is_trivially_destructible_v<T>)
    [[nodiscard]] _CONSTEXPR23 ByteArrayTag(std::in_place_type_t<T>, TagMemoryChunk mem) : data(std::move(mem)) {
        data.mSize = data.mCapacity;
    }

    [[nodiscard]] _CONSTEXPR23 ByteArrayTag(std::vector<schar> const& arr) : data(std::span{arr}) {} // NOLINT

    std::span<schar> view() const { return std::span<schar>((schar*)data.mBuffer.get(), data.mSize); }

    [[nodiscard]] _CONSTEXPR23 schar& operator[](size_t index) const { return view()[index]; }

    [[nodiscard]] _CONSTEXPR23 size_t size() const { return data.mSize; }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ByteArrayTag@@UEAA@XZ
    virtual ~ByteArrayTag() = default;

    // vIndex: 2, symbol: ?write@ByteArrayTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@ByteArrayTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput& dis);

    // vIndex: 4, symbol: ?toString@ByteArrayTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@ByteArrayTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@ByteArrayTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9, symbol: ?copy@ByteArrayTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@ByteArrayTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
