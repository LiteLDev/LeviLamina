#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class SelectionContainerCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4723f5;
    ::ll::UntypedStorage<1, 1>  mUnkfc16d4;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerCommon& operator=(SelectionContainerCommon const&);
    SelectionContainerCommon(SelectionContainerCommon const&);
    SelectionContainerCommon();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
