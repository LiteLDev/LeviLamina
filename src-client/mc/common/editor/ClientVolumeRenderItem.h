#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct ClientVolumeRenderItem {
public:
    // ClientVolumeRenderItem inner types declare
    // clang-format off
    struct BaseComponent;
    struct BoundingBoxComponent;
    struct StructureComponent;
    struct VolumeOutlineComponent;
    // clang-format on

    // ClientVolumeRenderItem inner types define
    enum class ComponentTypes : uint {};

    struct BaseComponent {};

    struct BoundingBoxComponent {};

    struct StructureComponent {};

    struct VolumeOutlineComponent {};
};

} // namespace Editor::Services
