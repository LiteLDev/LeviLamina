#include "mc/network/serialize/serialize.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/nbt/NbtIo.h"
#include "mc/util/VarIntDataInput.h"
#include "mc/util/VarIntDataOutput.h"

void serialize<CompoundTag>::write(CompoundTag const& tag, BinaryStream& stream) {
    auto io = VarIntDataOutput{stream};
    NbtIo::write(&tag, io);
}

Bedrock::Result<CompoundTag> serialize<CompoundTag>::read(ReadOnlyBinaryStream& stream) {
    auto io = VarIntDataInput{stream};
    if (auto res = NbtIo::read(io); res) {
        return std::move(*res->get());
    } else {
        return nonstd::make_unexpected(res.error());
    }
}
