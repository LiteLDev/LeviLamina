#include "mc/nbt/CompoundTag.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/nbt/NbtIo.h"
#include "mc/nbt/detail/SnbtErrorCode.h"
#include "mc/network/serialize/serialize.h"
#include "mc/util/BigEndianStringByteInput.h"
#include "mc/util/BigEndianStringByteOutput.h"

namespace ll::nbt::detail {
ll::Expected<CompoundTagVariant> parseSnbtValue(std::string_view&) noexcept;
ll::Unexpected                   makeSnbtError(SnbtErrorCode);
} // namespace ll::nbt::detail

ll::Expected<CompoundTagVariant>
CompoundTagVariant::parse(std::string_view snbt, optional_ref<size_t> parsedLength) noexcept {
    auto begin{snbt.begin()};
    auto result = ll::nbt::detail::parseSnbtValue(snbt);
    if (parsedLength) {
        *parsedLength = snbt.begin() - begin;
    }
    return result;
}
ll::Expected<CompoundTag> CompoundTag::fromSnbt(std::string_view snbt, optional_ref<size_t> parsedLength) noexcept {
    return CompoundTagVariant::parse(snbt, parsedLength)
        .and_then([](CompoundTagVariant&& val) -> ll::Expected<CompoundTag> {
            if (val.hold<CompoundTag>()) {
                return std::move(val.get<CompoundTag>());
            } else {
                return ll::nbt::detail::makeSnbtError(ll::nbt::detail::SnbtErrorCode::NotTheExpectedType);
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
ll::Expected<CompoundTag> CompoundTag::fromBinaryNbt(std::string_view dataView, bool isLittleEndian) noexcept try {
    if (isLittleEndian) {
        auto io = StringByteInput{dataView};
        if (auto res = NbtIo::read(io); res) {
            return ll::Expected<CompoundTag>{std::in_place, std::move(**res)};
        } else {
            return ll::makeErrorCodeError(res.error().code());
        }
    } else {
        auto io = BigEndianStringByteInput{dataView};
        if (auto res = NbtIo::read(io); res) {
            return ll::Expected<CompoundTag>{std::in_place, std::move(**res)};
        } else {
            return ll::makeErrorCodeError(res.error().code());
        }
    }
} catch (...) {
    return ll::makeExceptionError();
}

std::string CompoundTag::toNetworkNbt() const {
    std::string  result;
    BinaryStream stream{result};
    serialize<CompoundTag>::write(*this, stream);
    return result;
}
ll::Expected<CompoundTag> CompoundTag::fromNetworkNbt(std::string const& data) noexcept try {
    auto                      stream = ReadOnlyBinaryStream{data, false};
    ll::Expected<CompoundTag> result;
    if (auto r = serialize<CompoundTag>::read(stream); r) {
        result = std::move(*r);
    } else {
        result = ll::makeErrorCodeError(r.error().code());
    }
    return result;
} catch (...) {
    return ll::makeExceptionError();
}
