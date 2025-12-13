#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorProjectRegionServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct ProjectRegionConfig; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorProjectRegionService : public ::Editor::Services::IEditorService,
                                   public ::Editor::Services::EditorProjectRegionServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke288f6;
    ::ll::UntypedStorage<8, 16> mUnkb5beaa;
    ::ll::UntypedStorage<8, 64> mUnkc79468;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorProjectRegionService& operator=(EditorProjectRegionService const&);
    EditorProjectRegionService(EditorProjectRegionService const&);
    EditorProjectRegionService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorProjectRegionService() /*override*/ = default;

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
    MCNAPI void _handleDimensionChange(::DimensionType, ::DimensionType);

    MCNAPI void tick(::Editor::ServiceProviderCollection&);
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
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorProjectRegionServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
