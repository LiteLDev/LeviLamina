#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorServerGuidePlaneServiceProvider.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct GuidePlaneData; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorServerGuidePlaneService : public ::Editor::Services::IEditorService,
                                      public ::Editor::Services::EditorServerGuidePlaneServiceProvider,
                                      public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1790bf;
    ::ll::UntypedStorage<8, 24> mUnkb1d659;
    ::ll::UntypedStorage<1, 1>  mUnkfd0d0e;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServerGuidePlaneService& operator=(EditorServerGuidePlaneService const&);
    EditorServerGuidePlaneService(EditorServerGuidePlaneService const&);
    EditorServerGuidePlaneService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerGuidePlaneService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<::mce::UUID> addPlane(
        ::Vec3 const&       origin,
        ::Vec3 const&       normal,
        bool                visible,
        ::mce::Color const& outlineColor,
        ::mce::Color const& fillColor
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> removePlane(::mce::UUID const& planeId) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setPlaneVisibility(::mce::UUID const& planeId, bool visible) /*override*/;

    virtual ::Scripting::Result_deprecated<void> setPlaneColors(
        ::mce::UUID const&  planeId,
        ::mce::Color const& outlineColor,
        ::mce::Color const& fillColor
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setPlaneOrigin(::mce::UUID const& planeId, ::Vec3 const& origin) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    setPlaneNormal(::mce::UUID const& planeId, ::Vec3 const& normal) /*override*/;

    virtual ::std::vector<::Editor::GuidePlaneData> getPlanes() const /*override*/;

    virtual ::std::optional<::Editor::GuidePlaneData> getPlane(::mce::UUID const& planeId) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> setAllPlanesVisible(bool visible) /*override*/;

    virtual bool isAllPlanesVisible() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorServerGuidePlaneService(::Editor::ServiceProviderCollection& providers);
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

    MCNAPI ::Scripting::Result_deprecated<::mce::UUID> $addPlane(
        ::Vec3 const&       origin,
        ::Vec3 const&       normal,
        bool                visible,
        ::mce::Color const& outlineColor,
        ::mce::Color const& fillColor
    );

    MCNAPI ::Scripting::Result_deprecated<void> $removePlane(::mce::UUID const& planeId);

    MCNAPI ::Scripting::Result_deprecated<void> $setPlaneVisibility(::mce::UUID const& planeId, bool visible);

    MCNAPI ::Scripting::Result_deprecated<void>
    $setPlaneColors(::mce::UUID const& planeId, ::mce::Color const& outlineColor, ::mce::Color const& fillColor);

    MCNAPI ::Scripting::Result_deprecated<void> $setPlaneOrigin(::mce::UUID const& planeId, ::Vec3 const& origin);

    MCNAPI ::Scripting::Result_deprecated<void> $setPlaneNormal(::mce::UUID const& planeId, ::Vec3 const& normal);

    MCNAPI ::std::vector<::Editor::GuidePlaneData> $getPlanes() const;

    MCNAPI ::std::optional<::Editor::GuidePlaneData> $getPlane(::mce::UUID const& planeId) const;

    MCNAPI ::Scripting::Result_deprecated<void> $setAllPlanesVisible(bool visible);

    MCNAPI bool $isAllPlanesVisible() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorServerGuidePlaneServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
