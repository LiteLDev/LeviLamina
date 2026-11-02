#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::Prefabs { class PrefabDBTemplate; }
// clang-format on

namespace Editor::Prefabs {

class PrefabInstanceBoundsCalculator {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BoundingBox calculate(
        ::Editor::Prefabs::PrefabDBPrefabInstance const& instance,
        ::Vec3 const&                                    position,
        ::Mirror                                         mirror,
        ::Rotation                                       rotation
    );

    MCNAPI static ::BoundingBox calculate(
        ::Editor::Prefabs::PrefabDBTemplate const& prefabTemplate,
        ::Vec3 const&                              position,
        ::Mirror                                   mirror,
        ::Rotation                                 rotation
    );
    // NOLINTEND
};

} // namespace Editor::Prefabs
