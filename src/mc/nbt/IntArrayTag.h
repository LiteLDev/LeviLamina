#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class IntArrayTag : public ::Tag {
public:
    std::vector<int> data;

    [[nodiscard]] constexpr operator std::vector<int> const&() const { return data; }
    [[nodiscard]] constexpr operator std::vector<int>&() { return data; }

    [[nodiscard]] constexpr IntArrayTag() = default;

    [[nodiscard]] constexpr IntArrayTag(std::vector<int> arr) : data(std::move(arr)) {} // NOLINT

    [[nodiscard]] constexpr IntArrayTag(std::initializer_list<int> val) : data(std::move(val)) {} // NOLINT

    [[nodiscard]] constexpr int const& operator[](size_t index) const { return data[index]; }
    [[nodiscard]] constexpr int&       operator[](size_t index) { return data[index]; }

    [[nodiscard]] constexpr size_t size() const { return data.size(); }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IntArrayTag@@UEAA@XZ
    virtual ~IntArrayTag() = default;

    // vIndex: 2, symbol: ?write@IntArrayTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@IntArrayTag@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVIDataInput@@@Z
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

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
