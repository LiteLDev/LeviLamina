#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/selection/SelectionServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
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
    ::ll::UntypedStorage<8, 16>  mUnk41c42a;
    ::ll::UntypedStorage<8, 16>  mUnk7e7ef6;
    ::ll::UntypedStorage<8, 56>  mUnkf28297;
    ::ll::UntypedStorage<8, 8>   mUnka13fb7;
    ::ll::UntypedStorage<8, 64>  mUnkdc3f46;
    ::ll::UntypedStorage<8, 8>   mUnk1fee3a;
    ::ll::UntypedStorage<8, 64>  mUnk8c7459;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionServiceServer& operator=(SelectionServiceServer const&);
    SelectionServiceServer(SelectionServiceServer const&);
    SelectionServiceServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelectionServiceServer() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Editor::Selection::SelectionContainerVolume const& containerVolume() const /*override*/;

    virtual ::Editor::Selection::SelectionContainerEntity const& containerEntity() const /*override*/;

    virtual ::Editor::Selection::SelectionContainerVolume& containerVolumeNonConst() /*override*/;

    virtual ::Editor::Selection::SelectionContainerEntity& containerEntityNonConst() /*override*/;

    virtual ::WeakRef<::Editor::ProjectRegion> getVolumeRegion() const /*override*/;

    virtual uint64 generateManifest() /*override*/;

    virtual uint64 generateManifestWithCallback(
        ::std::function<
            void(::Scripting::Result_deprecated<::Editor::Services::SelectionServiceProvider::ManifestState> const&)>
    ) /*override*/;

    virtual ::Editor::Services::SelectionServiceProvider::ManifestState const& getCurrentManifest() const /*override*/;

    virtual void deselectBlocksAsync(
        ::std::string const&,
        ::std::function<void(::Scripting::Result_deprecated<uint64> const&)>
    ) /*override*/;

    virtual void replaceBlocksAsync(
        ::std::string const&,
        ::std::string const&,
        ::std::function<void(::Scripting::Result_deprecated<uint64> const&)>
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SelectionServiceServer(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
