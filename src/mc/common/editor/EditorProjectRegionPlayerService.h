#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorProjectRegionPlayerServiceProvider.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct ProjectRegionConfig; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorProjectRegionPlayerService : public ::Editor::Services::IEditorService,
                                         public ::Editor::Services::EditorProjectRegionPlayerServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2122bb;
    ::ll::UntypedStorage<8, 16> mUnk3234aa;
    ::ll::UntypedStorage<8, 64> mUnk5d233b;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorProjectRegionPlayerService& operator=(EditorProjectRegionPlayerService const&);
    EditorProjectRegionPlayerService(EditorProjectRegionPlayerService const&);
    EditorProjectRegionPlayerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorProjectRegionPlayerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::WeakRef<::Editor::ProjectRegion> createRegion(::Editor::ProjectRegionConfig const& config) /*override*/;

    virtual ::Scripting::Result_deprecated<void> destroyRegion(::mce::UUID const& id) /*override*/;

    virtual ::std::vector<::WeakRef<::Editor::ProjectRegion>> getAllRegions() const /*override*/;

    virtual ::WeakRef<::Editor::ProjectRegion> getRegion(::mce::UUID const& id) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorProjectRegionPlayerService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::WeakRef<::Editor::ProjectRegion> $createRegion(::Editor::ProjectRegionConfig const& config);

    MCNAPI ::Scripting::Result_deprecated<void> $destroyRegion(::mce::UUID const& id);

    MCNAPI ::std::vector<::WeakRef<::Editor::ProjectRegion>> $getAllRegions() const;

    MCNAPI ::WeakRef<::Editor::ProjectRegion> $getRegion(::mce::UUID const& id) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorProjectRegionPlayerServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
