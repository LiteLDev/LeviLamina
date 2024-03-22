#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class ByteArrayTag : public ::Tag {
public:
    std::vector<uchar> data;

    [[nodiscard]] constexpr operator std::vector<uchar> const&() const { return data; }
    [[nodiscard]] constexpr operator std::vector<uchar>&() { return data; }

    [[nodiscard]] constexpr ByteArrayTag() = default;

    [[nodiscard]] constexpr ByteArrayTag(std::vector<uchar> arr) : data(std::move(arr)) {} // NOLINT

    [[nodiscard]] constexpr ByteArrayTag(std::initializer_list<uchar> val) : data(std::move(val)) {} // NOLINT

    [[nodiscard]] constexpr uchar const& operator[](size_t index) const { return data[index]; }
    [[nodiscard]] constexpr uchar&       operator[](size_t index) { return data[index]; }

    [[nodiscard]] constexpr size_t size() const { return data.size(); }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ByteArrayTag@@UEAA@XZ
    virtual ~ByteArrayTag() = default;

    // vIndex: 2, symbol: ?write@ByteArrayTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@ByteArrayTag@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVIDataInput@@@Z
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

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
