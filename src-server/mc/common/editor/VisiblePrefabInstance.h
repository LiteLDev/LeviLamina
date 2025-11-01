#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs {

class VisiblePrefabInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk74aa47;
    ::ll::UntypedStorage<8, 16> mUnk755cdf;
    ::ll::UntypedStorage<4, 12> mUnk24bd45;
    ::ll::UntypedStorage<8, 24> mUnk58e1c7;
    // NOLINTEND

public:
    // prevent constructor by default
    VisiblePrefabInstance& operator=(VisiblePrefabInstance const&);
    VisiblePrefabInstance(VisiblePrefabInstance const&);
    VisiblePrefabInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Prefabs::VisiblePrefabInstance& operator=(::Editor::Prefabs::VisiblePrefabInstance&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
