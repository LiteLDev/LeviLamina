#include "mc/nbt/CompoundTag.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/nbt/NbtIo.h"
#include "mc/util/BigEndianStringByteInput.h"
#include "mc/util/BigEndianStringByteOutput.h"

std::unique_ptr<CompoundTag> CompoundTag::fromSnbt(std::string_view snbt) {
    auto res = parseSnbt(snbt);
    if (res && res->getId() == Tag::Type::Compound) {
        return std::unique_ptr<CompoundTag>(static_cast<CompoundTag*>(res.release()));
    }
    return nullptr;
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
std::unique_ptr<CompoundTag> CompoundTag::fromBinaryNbt(std::string_view dataView, bool isLittleEndian) {
    if (isLittleEndian) {
        auto io = StringByteInput{dataView};
        return NbtIo::read(io);
    } else {
        auto io = BigEndianStringByteInput{dataView};
        return NbtIo::read(io);
    }
}
std::string CompoundTag::toNetworkNbt() const {
    BinaryStream stream;
    stream.writeType(*this);
    return stream.getAndReleaseData();
}
std::unique_ptr<CompoundTag> CompoundTag::fromNetworkNbt(std::string const& data) {
    auto stream = ReadOnlyBinaryStream{data, false};
    auto res    = std::make_unique<CompoundTag>();
    if (stream.readType(*res)) {
        return res;
    }
    return nullptr;
}
