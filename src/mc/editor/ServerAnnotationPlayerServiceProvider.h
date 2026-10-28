#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class ServerAnnotationPlayerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerAnnotationPlayerServiceProvider() = default;

    virtual void setShowAnnotations(bool showAnnotations) = 0;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
