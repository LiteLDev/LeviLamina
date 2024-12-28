#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/export/ExportResult.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Editor { class GameOptions; }
// clang-format on

namespace Editor::Services {

class EditorPlayerExportProjectServiceProvider {
public:
    // prevent constructor by default
    EditorPlayerExportProjectServiceProvider& operator=(EditorPlayerExportProjectServiceProvider const&);
    EditorPlayerExportProjectServiceProvider(EditorPlayerExportProjectServiceProvider const&);
    EditorPlayerExportProjectServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPlayerExportProjectServiceProvider();

    // vIndex: 1
    virtual void
    beginExportProject(::WeakEntityRef, ::Editor::GameOptions const&, ::std::function<void(::Editor::ExportResult const&)>) = 0;

    // vIndex: 2
    virtual bool canExportProject() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
