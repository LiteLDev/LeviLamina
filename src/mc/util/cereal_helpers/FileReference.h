#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {

struct FileReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkefc077;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReference& operator=(FileReference const&);
    FileReference(FileReference const&);
    FileReference();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace CerealHelpers
