#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

struct BlockColorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf38a4f;
    ::ll::UntypedStorage<4, 16> mUnk707547;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockColorInfo& operator=(BlockColorInfo const&);
    BlockColorInfo(BlockColorInfo const&);
    BlockColorInfo();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
