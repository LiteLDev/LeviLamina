#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Cursor {

struct Ray {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk41a2b6;
    ::ll::UntypedStorage<4, 12> mUnk4aebce;
    ::ll::UntypedStorage<4, 12> mUnka56a18;
    ::ll::UntypedStorage<1, 1>  mUnk57ae4c;
    // NOLINTEND

public:
    // prevent constructor by default
    Ray& operator=(Ray const&);
    Ray(Ray const&);
    Ray();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Cursor
