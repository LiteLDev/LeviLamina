#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Editor { struct ProjectRegionConfig; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorProjectRegionServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorProjectRegionServiceProvider() = default;

    // vIndex: 1
    virtual ::WeakRef<::Editor::ProjectRegion> createRegion(::Editor::ProjectRegionConfig const&) = 0;

    // vIndex: 2
    virtual ::std::vector<::WeakRef<::Editor::ProjectRegion>> getAllRegions() const = 0;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> destroyRegion(::mce::UUID const&) = 0;

    // vIndex: 4
    virtual ::WeakRef<::Editor::ProjectRegion> getRegion(::mce::UUID const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
