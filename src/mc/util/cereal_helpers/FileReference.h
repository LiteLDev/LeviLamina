#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CerealHelpers {

struct FileReference {
public:
    // prevent constructor by default
    FileReference& operator=(FileReference const&);
    FileReference(FileReference const&);
    FileReference();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace CerealHelpers
