#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Annotations { class AnnotationInstance; }
// clang-format on

namespace Editor::Annotations {

class AnnotationInstanceHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnnotationInstanceHandler() = default;

    virtual void onUpdate(::Editor::Annotations::AnnotationInstance const& instance);
    // NOLINTEND
};

} // namespace Editor::Annotations
