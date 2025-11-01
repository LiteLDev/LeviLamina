#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDataInput;
class IDataOutput;
class Tag;
// clang-format on

namespace NbtIo {
// functions
// NOLINTBEGIN
MCAPI ::Bedrock::Result<::std::unique_ptr<::CompoundTag>> read(::IDataInput& dis);

MCAPI ::Bedrock::Result<::std::unique_ptr<::CompoundTag>> readNamedCompoundTag(::IDataInput& dis, ::std::string& name);

MCAPI ::Bedrock::Result<::std::unique_ptr<::Tag>> readNamedTag(::IDataInput& dis, ::std::string& name);

MCAPI ::std::unique_ptr<::CompoundTag> readOrGetEmpty(::IDataInput& dis);

MCAPI void write(::CompoundTag const* tag, ::IDataOutput& dos);
// NOLINTEND

} // namespace NbtIo
