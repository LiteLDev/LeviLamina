#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Editor::Selection { class SelectionContainerEntity; }
namespace Editor::Selection { class SelectionContainerVolume; }
// clang-format on

namespace Editor::Services {

class SelectionServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionServiceProvider() = default;

    // vIndex: 1
    virtual ::Editor::Selection::SelectionContainerVolume const& containerVolume() const = 0;

    // vIndex: 2
    virtual ::Editor::Selection::SelectionContainerEntity const& containerEntity() const = 0;

    // vIndex: 3
    virtual ::Editor::Selection::SelectionContainerVolume& containerVolumeNonConst() = 0;

    // vIndex: 4
    virtual ::Editor::Selection::SelectionContainerEntity& containerEntityNonConst() = 0;

    // vIndex: 5
    virtual ::WeakRef<::Editor::ProjectRegion> getVolumeRegion() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
