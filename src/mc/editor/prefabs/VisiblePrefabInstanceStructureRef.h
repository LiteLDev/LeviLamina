#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs {

class VisiblePrefabInstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke18ffe;
    ::ll::UntypedStorage<8, 16> mUnkd3caae;
    ::ll::UntypedStorage<4, 12> mUnk432fa7;
    ::ll::UntypedStorage<1, 1>  mUnk206b41;
    ::ll::UntypedStorage<1, 1>  mUnkabf785;
    ::ll::UntypedStorage<4, 12> mUnk3723eb;
    ::ll::UntypedStorage<4, 12> mUnk12eb68;
    ::ll::UntypedStorage<4, 12> mUnk40e664;
    // NOLINTEND

public:
    // prevent constructor by default
    VisiblePrefabInstanceStructureRef& operator=(VisiblePrefabInstanceStructureRef const&);
    VisiblePrefabInstanceStructureRef(VisiblePrefabInstanceStructureRef const&);
    VisiblePrefabInstanceStructureRef();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Prefabs
