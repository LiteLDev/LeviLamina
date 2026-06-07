#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

struct BlockLeashableComponent : public ::IBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mLeashKnotOffset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onEvent(::BlockEvents::BlockPlayerInteractEvent& event) const;
    // NOLINTEND
};
