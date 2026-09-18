#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

struct MeshBlockPlacementGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkac6e45;
    ::ll::UntypedStorage<8, 24> mUnk3738ea;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshBlockPlacementGroup& operator=(MeshBlockPlacementGroup const&);
    MeshBlockPlacementGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshBlockPlacementGroup(::Editor::Network::MeshBlockPlacementGroup const&);

#ifdef LL_PLAT_C
    MCNAPI ~MeshBlockPlacementGroup();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MeshBlockPlacementGroup const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor::Network
