#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

enum class EncryptionCipherMode : uchar {
    Cfb8   = 0,
    Cfb128 = 1,
};

}

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CodeBuilder::EncryptionCipherMode>();
// clang-format on
