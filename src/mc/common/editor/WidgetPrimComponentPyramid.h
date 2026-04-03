#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentPyramid {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk61d42a;
    ::ll::UntypedStorage<4, 4>  mUnkdab09b;
    ::ll::UntypedStorage<4, 4>  mUnk489b88;
    ::ll::UntypedStorage<4, 16> mUnkc63e15;
    ::ll::UntypedStorage<4, 8>  mUnk6223af;
    ::ll::UntypedStorage<4, 16> mUnk2fb150;
    ::ll::UntypedStorage<4, 8>  mUnk28b931;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentPyramid& operator=(WidgetPrimComponentPyramid const&);
    WidgetPrimComponentPyramid(WidgetPrimComponentPyramid const&);
    WidgetPrimComponentPyramid();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::Network::WidgetPrimComponentPyramid const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
