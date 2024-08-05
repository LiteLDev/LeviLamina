#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

namespace NbtIo {
// NOLINTBEGIN
MCAPI class Bedrock::Result<std::unique_ptr<class CompoundTag>> read(class IDataInput& dis);

MCAPI class Bedrock::Result<std::unique_ptr<class CompoundTag>> readNamedCompoundTag(class IDataInput&, std::string&);

MCAPI class Bedrock::Result<std::unique_ptr<class Tag>> readNamedTag(class IDataInput&, std::string&);

MCAPI std::unique_ptr<class CompoundTag> readOrGetEmpty(class IDataInput&);

MCAPI void write(class CompoundTag const*, class IDataOutput&);

MCAPI void writeNamedTag(std::string const&, class Tag const&, class IDataOutput&);
// NOLINTEND

}; // namespace NbtIo
