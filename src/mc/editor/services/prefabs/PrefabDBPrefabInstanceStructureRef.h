#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBPrefabInstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9e08a0;
    ::ll::UntypedStorage<8, 8>  mUnk65baaf;
    ::ll::UntypedStorage<8, 16> mUnkb0d6c6;
    ::ll::UntypedStorage<8, 16> mUnked050e;
    ::ll::UntypedStorage<1, 1>  mUnk81f6da;
    ::ll::UntypedStorage<1, 1>  mUnkef25a5;
    ::ll::UntypedStorage<1, 1>  mUnkea2832;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBPrefabInstanceStructureRef(PrefabDBPrefabInstanceStructureRef const&);
    PrefabDBPrefabInstanceStructureRef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Prefabs::PrefabDBPrefabInstanceStructureRef&
    operator=(::Editor::Prefabs::PrefabDBPrefabInstanceStructureRef&&);

    MCNAPI ::Editor::Prefabs::PrefabDBPrefabInstanceStructureRef&
    operator=(::Editor::Prefabs::PrefabDBPrefabInstanceStructureRef const&);

    MCNAPI ~PrefabDBPrefabInstanceStructureRef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
