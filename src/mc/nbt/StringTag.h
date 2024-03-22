#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/nbt/Tag.h"

class StringTag : public ::Tag {
public:
    std::string data;

    [[nodiscard]] constexpr StringTag() = default;

    [[nodiscard]] constexpr StringTag(std::string str) : data(std::move(str)) {} // NOLINT
    [[nodiscard]] constexpr StringTag(std::string_view str) : data(str) {}       // NOLINT
    template <size_t N>
    [[nodiscard]] constexpr StringTag(char const (&str)[N]) : StringTag(std::string_view{str, N - 1}) {} // NOLINT

    [[nodiscard]] constexpr operator std::string const&() const { return data; } // NOLINT

    [[nodiscard]] constexpr operator std::string_view() const { return data; } // NOLINT

    [[nodiscard]] constexpr operator std::string&() { return data; } // NOLINT

    [[nodiscard]] constexpr operator std::string&&() && { return std::move(data); } // NOLINT

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StringTag@@UEAA@XZ
    virtual ~StringTag();

    // vIndex: 2, symbol: ?write@StringTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput& dos) const;

    // vIndex: 3, symbol: ?load@StringTag@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVIDataInput@@@Z
    virtual class Bedrock::Result<void> load(class IDataInput& dis);

    // vIndex: 4, symbol: ?toString@StringTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@StringTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@StringTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const& rhs) const;

    // vIndex: 9, symbol: ?copy@StringTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@StringTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND
};
namespace ll::nbt_literals {
[[nodiscard]] inline StringTag operator""_tag(char const* x, size_t len) { return StringTag(std::string{x, len}); }
} // namespace ll::nbt_literals
