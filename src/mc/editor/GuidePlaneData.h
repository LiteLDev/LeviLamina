#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct GuidePlaneData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4f4643;
    ::ll::UntypedStorage<4, 12> mUnk710d03;
    ::ll::UntypedStorage<4, 12> mUnk72b1a6;
    ::ll::UntypedStorage<1, 1>  mUnk149a49;
    ::ll::UntypedStorage<4, 16> mUnk32529c;
    ::ll::UntypedStorage<4, 16> mUnk973422;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidePlaneData& operator=(GuidePlaneData const&);
    GuidePlaneData(GuidePlaneData const&);
    GuidePlaneData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor
