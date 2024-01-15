#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/TagMemoryChunk.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class IntArrayTag : public ::Tag {
public:
    TagMemoryChunk data{};

    [[nodiscard]] _CONSTEXPR23 operator TagMemoryChunk const&() const { return data; } // NOLINT
    [[nodiscard]] _CONSTEXPR23 operator TagMemoryChunk&() { return data; }             // NOLINT

    [[nodiscard]] _CONSTEXPR23 IntArrayTag() = default;

    template <class T>
        requires(std::is_trivially_destructible_v<T>)
    [[nodiscard]] _CONSTEXPR23 IntArrayTag(std::in_place_type_t<T>, TagMemoryChunk mem) : data(std::move(mem)) {
        data.mSize = (data.mSize * sizeof(T)) / sizeof(int);
    }

    [[nodiscard]] _CONSTEXPR23 IntArrayTag(std::vector<int> const& arr) : data(std::span{arr}) { // NOLINT
        data.mSize = arr.size();
    }

    [[nodiscard]] _CONSTEXPR23 std::span<int> view() const {
        return std::span<int>((int*)data.mBuffer.get(), data.mSize);
    }

    [[nodiscard]] _CONSTEXPR23 int& operator[](size_t index) const { return view()[index]; }

    [[nodiscard]] _CONSTEXPR23 size_t size() const { return data.mSize; }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IntArrayTag@@UEAA@XZ
    virtual ~IntArrayTag() = default;

    // vIndex: 2, symbol: ?write@IntArrayTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@IntArrayTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput& dis);

    // vIndex: 4, symbol: ?toString@IntArrayTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@IntArrayTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@IntArrayTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9, symbol: ?copy@IntArrayTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@IntArrayTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
