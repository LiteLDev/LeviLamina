#include "mc/nbt/CompoundTag.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/nbt/NbtIo.h"
#include "mc/nbt/detail/SnbtErrorCode.h"
#include "mc/util/BigEndianStringByteInput.h"
#include "mc/util/BigEndianStringByteOutput.h"

namespace ll::nbt::detail {
nonstd::expected<CompoundTagVariant, std::error_code> parseSnbtValue(std::string_view&);
std::error_code                                       makeSnbtError(SnbtErrorCode);
} // namespace ll::nbt::detail

nonstd::expected<CompoundTagVariant, std::error_code>
CompoundTagVariant::parse(std::string_view snbt, optional_ref<size_t> parsedLength) {
    char const* begin{snbt.data()};
    auto        result = ll::nbt::detail::parseSnbtValue(snbt);
    if (parsedLength) {
        *parsedLength = snbt.data() - begin;
    }
    return result;
}

nonstd::expected<CompoundTag, std::error_code>
CompoundTag::fromSnbt(std::string_view snbt, optional_ref<size_t> parsedLength) {
    return CompoundTagVariant::parse(snbt, parsedLength)
        .and_then([](CompoundTagVariant&& val) -> nonstd::expected<CompoundTag, std::error_code> {
            if (val.hold<CompoundTag>()) {
                return std::move(val.get<CompoundTag>());
            } else {
                return nonstd::make_unexpected(
                    ll::nbt::detail::makeSnbtError(ll::nbt::detail::SnbtErrorCode::NotTheExpectedType)
                );
            }
        });
}

std::string CompoundTag::toBinaryNbt(bool isLittleEndian) const {
    std::string result;
    if (isLittleEndian) {
        auto io = StringByteOutput{result};
        NbtIo::write(this, io);
    } else {
        auto io = BigEndianStringByteOutput{result};
        NbtIo::write(this, io);
    }
    return result;
}

nonstd::expected<CompoundTag, std::error_code>
CompoundTag::fromBinaryNbt(std::string_view dataView, bool isLittleEndian) {
    if (isLittleEndian) {
        auto io = StringByteInput{dataView};
        return NbtIo::read(io).transform_error([](auto&& err) { return err.code(); }
        ).transform([](auto&& val) { return std::move(*val); });
    } else {
        auto io = BigEndianStringByteInput{dataView};
        return NbtIo::read(io).transform_error([](auto&& err) { return err.code(); }
        ).transform([](auto&& val) { return std::move(*val); });
    }
}

std::string CompoundTag::toNetworkNbt() const {
    BinaryStream stream;
    stream.writeType(*this);
    return stream.getAndReleaseData();
}

nonstd::expected<CompoundTag, std::error_code> CompoundTag::fromNetworkNbt(std::string const& data) {
    auto                                           stream = ReadOnlyBinaryStream{data, false};
    nonstd::expected<CompoundTag, std::error_code> result;
    if (auto r = stream.readType(*result); !r) {
        result = nonstd::make_unexpected(r.error().code());
    }
    return result;
}
