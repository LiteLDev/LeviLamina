#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/export/ExportResult.h"
#include "mc/server/editor/serviceproviders/EditorPlayerExportProjectServiceProvider.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Editor { class GameOptions; }
// clang-format on

namespace Editor::Services {

class EditorExportProjectManagerService : public ::Editor::Services::IEditorService,
                                          public ::Editor::Services::EditorPlayerExportProjectServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk328f45;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExportProjectManagerService& operator=(EditorExportProjectManagerService const&);
    EditorExportProjectManagerService(EditorExportProjectManagerService const&);
    EditorExportProjectManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorExportProjectManagerService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual void beginExportProject(
        ::WeakEntityRef                                      playerRef,
        ::Editor::GameOptions const&                         gameOptions,
        ::Editor::WorldType const                            editorWorldType,
        ::std::function<void(::Editor::ExportResult const&)> callback
    ) /*override*/;

    // vIndex: 2
    virtual bool canExportProject() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $beginExportProject(
        ::WeakEntityRef                                      playerRef,
        ::Editor::GameOptions const&                         gameOptions,
        ::Editor::WorldType const                            editorWorldType,
        ::std::function<void(::Editor::ExportResult const&)> callback
    );

    MCNAPI bool $canExportProject();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorPlayerExportProjectServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
