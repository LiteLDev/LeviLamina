#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/selection/SelectionServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class HashedString;
class TaskResult;
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class SelectionVolumeUpdate; }
namespace Editor::Selection { class SelectionContainerEntity; }
namespace Editor::Selection { class SelectionContainerVolume; }
namespace Editor::Selection { struct SelectionVolumeEvent; }
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
    virtual ~SelectionServiceServer() /*override*/;

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
            callback
    ) /*override*/;

    virtual ::Editor::Services::SelectionServiceProvider::ManifestState const& getCurrentManifest() const /*override*/;

    virtual void deselectBlocksAsync(
        ::std::string const&                                                 blockIdentifier,
        ::std::function<void(::Scripting::Result_deprecated<uint64> const&)> callback
    ) /*override*/;

    virtual void replaceBlocksAsync(
        ::std::string const&                                                 fromBlockIdentifier,
        ::std::string const&                                                 toBlockIdentifier,
        ::std::function<void(::Scripting::Result_deprecated<uint64> const&)> callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SelectionServiceServer(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _cancelPreviousGeneration();

    MCNAPI void _completeManifestWithEmptyState();

    MCNAPI ::std::vector<::Editor::Services::SelectionServiceProvider::ManifestEntry>
    _createSortedEntries(::std::unordered_map<::HashedString, uint64> const& blockCounts) const;

    MCNAPI void _handleRegionUpdate(::Editor::Selection::SelectionVolumeEvent const& evt);

    MCNAPI void _handleVolumeUpdate(::Editor::Network::SelectionVolumeUpdate const& payload);

    MCNAPI ::TaskResult _processBlocksInChunks(::BlockSource& region, uint64 generationId);

    MCNAPI void _startManifestGeneration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Editor::Selection::SelectionContainerVolume const& $containerVolume() const;

    MCNAPI ::Editor::Selection::SelectionContainerEntity const& $containerEntity() const;

    MCNAPI ::Editor::Selection::SelectionContainerVolume& $containerVolumeNonConst();

    MCNAPI ::Editor::Selection::SelectionContainerEntity& $containerEntityNonConst();

    MCNAPI ::WeakRef<::Editor::ProjectRegion> $getVolumeRegion() const;

    MCNAPI uint64 $generateManifest();

    MCNAPI uint64 $generateManifestWithCallback(
        ::std::function<
            void(::Scripting::Result_deprecated<::Editor::Services::SelectionServiceProvider::ManifestState> const&)>
            callback
    );

    MCNAPI ::Editor::Services::SelectionServiceProvider::ManifestState const& $getCurrentManifest() const;

    MCNAPI void $deselectBlocksAsync(
        ::std::string const&                                                 blockIdentifier,
        ::std::function<void(::Scripting::Result_deprecated<uint64> const&)> callback
    );

    MCNAPI void $replaceBlocksAsync(
        ::std::string const&                                                 fromBlockIdentifier,
        ::std::string const&                                                 toBlockIdentifier,
        ::std::function<void(::Scripting::Result_deprecated<uint64> const&)> callback
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForSelectionServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
