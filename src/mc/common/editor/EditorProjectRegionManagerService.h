#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorProjectRegionManagerServiceProvider.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct Bounds;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct ProjectRegionConfig; }
namespace Editor { struct ProjectRegionManagerChunkProcessingState; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorProjectRegionManagerService : public ::Editor::Services::IEditorService,
                                          public ::Editor::Services::EditorProjectRegionManagerServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk63fcf5;
    ::ll::UntypedStorage<8, 16> mUnkc7932c;
    ::ll::UntypedStorage<8, 48> mUnk93874c;
    ::ll::UntypedStorage<8, 16> mUnk7e40b5;
    ::ll::UntypedStorage<8, 16> mUnkd791c9;
    ::ll::UntypedStorage<8, 64> mUnkfe8985;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorProjectRegionManagerService& operator=(EditorProjectRegionManagerService const&);
    EditorProjectRegionManagerService(EditorProjectRegionManagerService const&);
    EditorProjectRegionManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorProjectRegionManagerService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::WeakRef<::Editor::ProjectRegion> createRegion(
        ::Dimension&                         dimension,
        ::Editor::ProjectRegionConfig const& config,
        ::std::optional<uint64>              ownerId
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> destroyRegion(::mce::UUID const& id) /*override*/;

    virtual ::std::vector<::WeakRef<::Editor::ProjectRegion>> getAllRegions() const /*override*/;

    virtual ::WeakRef<::Editor::ProjectRegion> getRegion(::mce::UUID const& id) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> regenerateRegion(
        ::DimensionType                dimensionType,
        ::std::vector<::Bounds> const& boundsList,
        bool                           regenerateWorldWithExcludedBounds
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    pruneRegion(::DimensionType dimensionType, ::std::vector<::Bounds> const& boundsList) /*override*/;

    virtual bool isProcessingChunks() const /*override*/;

    virtual ::std::optional<::Editor::ProjectRegionManagerChunkProcessingState> getChunkProcessingState() const
        /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerChunkProcessingChangeListener(
        ::std::function<void(::Scripting::Result_deprecated<::Editor::ProjectRegionManagerChunkProcessingState> const&)>
            callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorProjectRegionManagerService(::Editor::ServiceProviderCollection& providers);
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

    MCNAPI ::WeakRef<::Editor::ProjectRegion>
    $createRegion(::Dimension& dimension, ::Editor::ProjectRegionConfig const& config, ::std::optional<uint64> ownerId);

    MCNAPI ::Scripting::Result_deprecated<void> $destroyRegion(::mce::UUID const& id);

    MCNAPI ::std::vector<::WeakRef<::Editor::ProjectRegion>> $getAllRegions() const;

    MCNAPI ::WeakRef<::Editor::ProjectRegion> $getRegion(::mce::UUID const& id) const;

    MCNAPI ::Scripting::Result_deprecated<void> $regenerateRegion(
        ::DimensionType                dimensionType,
        ::std::vector<::Bounds> const& boundsList,
        bool                           regenerateWorldWithExcludedBounds
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    $pruneRegion(::DimensionType dimensionType, ::std::vector<::Bounds> const& boundsList);

    MCNAPI bool $isProcessingChunks() const;

    MCNAPI ::std::optional<::Editor::ProjectRegionManagerChunkProcessingState> $getChunkProcessingState() const;

    MCNAPI ::Bedrock::PubSub::Subscription $registerChunkProcessingChangeListener(
        ::std::function<void(::Scripting::Result_deprecated<::Editor::ProjectRegionManagerChunkProcessingState> const&)>
            callback
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorProjectRegionManagerServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
