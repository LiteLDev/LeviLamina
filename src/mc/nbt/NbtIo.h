#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace NbtIo {
// NOLINTBEGIN
MCAPI class Bedrock::Result<std::unique_ptr<class CompoundTag>> read(class IDataInput& dis);

MCAPI class Bedrock::Result<std::unique_ptr<class CompoundTag>>
readNamedCompoundTag(class IDataInput& dis, std::string& name);

MCAPI class Bedrock::Result<std::unique_ptr<class Tag>> readNamedTag(class IDataInput& dis, std::string& name);

MCAPI std::unique_ptr<class CompoundTag> readOrGetEmpty(class IDataInput& dis);

MCAPI void write(class CompoundTag const* tag, class IDataOutput& dos);

MCAPI void writeNamedTag(std::string const& name, class Tag const& tag, class IDataOutput& dos);
// NOLINTEND

}; // namespace NbtIo
