#include "mc/nbt/CompoundTag.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/nbt/NbtIo.h"
#include "mc/util/BigEndianStringByteInput.h"
#include "mc/util/BigEndianStringByteOutput.h"

extern std::optional<CompoundTagVariant> parseSnbtValue(std::string_view&);

std::unique_ptr<CompoundTag> CompoundTag::fromSnbt(std::string_view snbt) {
    auto res = parseSnbtValue(snbt);
    if (res && res.value().hold<CompoundTag>()) {
        return std::make_unique<CompoundTag>(std::move(res.value().get<CompoundTag>()));
    }
    return nullptr;
}

std::string CompoundTag::toBinaryNBT(bool isLittleEndian) const {
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
std::unique_ptr<CompoundTag> CompoundTag::fromBinaryNBT(std::string_view dataView, bool isLittleEndian) {
    if (isLittleEndian) {
        auto io = StringByteInput{dataView};
        return NbtIo::read(io);
    } else {
        auto io = BigEndianStringByteInput{dataView};
        return NbtIo::read(io);
    }
}
std::string CompoundTag::toNetworkNBT() const {
    BinaryStream stream;
    stream.writeType(*this);
    return stream.getAndReleaseData();
}
std::unique_ptr<CompoundTag> CompoundTag::fromNetworkNBT(std::string const& data) {
    auto stream = ReadOnlyBinaryStream{data, false};
    auto res    = std::make_unique<CompoundTag>();
    stream.readType(*res);
    return res;
}