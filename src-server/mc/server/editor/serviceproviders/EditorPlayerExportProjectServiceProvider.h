#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ProjectExportStatus.h"
#include "mc/common/editor/WorldType.h"
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
    // vIndex: 0
    virtual ~EditorPlayerExportProjectServiceProvider() = default;

    // vIndex: 1
    virtual void beginExportProject(::WeakEntityRef, ::Editor::GameOptions const&, ::Editor::WorldType const, ::std::function<void(::Editor::ExportResult const&, ::std::string)>) = 0;

    // vIndex: 2
    virtual bool canExportProject() = 0;

    // vIndex: 3
    virtual ::Editor::ProjectExportStatus getExportStatus() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
