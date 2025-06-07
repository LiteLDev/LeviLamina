#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/selection/SelectionServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class SelectionVolumeUpdate; }
namespace Editor::Selection { class SelectionContainerEntity; }
namespace Editor::Selection { class SelectionContainerVolume; }
// clang-format on

namespace Editor::Services {

class SelectionServiceServer : public ::Editor::Services::IEditorService,
                               public ::Editor::Services::SelectionServiceProvider,
                               public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnkc15a5e;
    ::ll::UntypedStorage<8, 16>  mUnk7bbf27;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionServiceServer& operator=(SelectionServiceServer const&);
    SelectionServiceServer(SelectionServiceServer const&);
    SelectionServiceServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionServiceServer() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Editor::Selection::SelectionContainerVolume const& containerVolume() const /*override*/;

    // vIndex: 2
    virtual ::Editor::Selection::SelectionContainerEntity const& containerEntity() const /*override*/;

    // vIndex: 3
    virtual ::Editor::Selection::SelectionContainerVolume& containerVolumeNonConst() /*override*/;

    // vIndex: 4
    virtual ::Editor::Selection::SelectionContainerEntity& containerEntityNonConst() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleVolumeUpdate(::Editor::Network::SelectionVolumeUpdate const& payload);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Editor::Selection::SelectionContainerVolume const& $containerVolume() const;

    MCNAPI ::Editor::Selection::SelectionContainerEntity const& $containerEntity() const;

    MCNAPI ::Editor::Selection::SelectionContainerVolume& $containerVolumeNonConst();

    MCNAPI ::Editor::Selection::SelectionContainerEntity& $containerEntityNonConst();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForSelectionServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
