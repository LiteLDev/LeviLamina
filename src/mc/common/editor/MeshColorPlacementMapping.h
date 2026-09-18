#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

struct MeshColorPlacementMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka9ac60;
    ::ll::UntypedStorage<8, 32> mUnkb5f58d;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshColorPlacementMapping& operator=(MeshColorPlacementMapping const&);
    MeshColorPlacementMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshColorPlacementMapping(::Editor::Network::MeshColorPlacementMapping const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MeshColorPlacementMapping const&);
    // NOLINTEND
};

} // namespace Editor::Network
