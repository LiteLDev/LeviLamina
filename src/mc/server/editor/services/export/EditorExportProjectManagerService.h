#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ProjectExportStatus.h"
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
    ::ll::UntypedStorage<4, 4>  mUnk7651cd;
    ::ll::UntypedStorage<8, 24> mUnkb15932;
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
        ::WeakEntityRef                                                     playerRef,
        ::Editor::GameOptions const&                                        gameOptions,
        ::Editor::WorldType const                                           editorWorldType,
        ::std::function<void(::Editor::ExportResult const&, ::std::string)> callback
    ) /*override*/;

    // vIndex: 2
    virtual bool canExportProject() /*override*/;

    // vIndex: 3
    virtual ::Editor::ProjectExportStatus getExportStatus() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onExportError(
        ::std::function<void(::Editor::ExportResult const&, ::std::string)> callback,
        ::std::string                                                       message,
        ::Editor::ExportResult                                              result
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $beginExportProject(
        ::WeakEntityRef                                                     playerRef,
        ::Editor::GameOptions const&                                        gameOptions,
        ::Editor::WorldType const                                           editorWorldType,
        ::std::function<void(::Editor::ExportResult const&, ::std::string)> callback
    );

    MCNAPI bool $canExportProject();

    MCNAPI ::Editor::ProjectExportStatus $getExportStatus();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorPlayerExportProjectServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
