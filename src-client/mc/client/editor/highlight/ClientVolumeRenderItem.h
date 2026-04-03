#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class ClientVolumeRenderItem {
public:
    // ClientVolumeRenderItem inner types declare
    // clang-format off
    class BaseComponent;
    class BoundingBoxComponent;
    class StructureComponent;
    class VolumeOutlineComponent;
    // clang-format on

    // ClientVolumeRenderItem inner types define
    enum class ComponentTypes : int {};

    class BaseComponent {};

    class BoundingBoxComponent {};

    class StructureComponent {};

    class VolumeOutlineComponent {};
};

} // namespace Editor::Services
