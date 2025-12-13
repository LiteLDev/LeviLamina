#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/editor/ProjectExportStatus.h"
#include "mc/editor/services/export/ExportResult.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Editor { class GameOptions; }
// clang-format on

namespace Editor::Services {

class EditorPlayerExportProjectServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPlayerExportProjectServiceProvider() = default;

    virtual void beginExportProject(
        ::WeakEntityRef,
        ::Editor::GameOptions const&,
        ::Editor::WorldType const,
        ::std::function<void(::Editor::ExportResult const&, ::std::string)>
    ) = 0;

    virtual bool canExportProject() = 0;

    virtual ::Editor::ProjectExportStatus getExportStatus() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
