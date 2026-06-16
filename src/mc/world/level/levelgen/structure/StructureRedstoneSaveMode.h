#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StructureRedstoneSaveMode : uchar {
    SavesToMemory = 0,
    SavesToDisk   = 1,
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::StructureRedstoneSaveMode>();
// clang-format on
