#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { struct GuidePlaneData; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class EditorServerGuidePlaneServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerGuidePlaneServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<::mce::UUID> addPlane(
        ::Vec3 const&       origin,
        ::Vec3 const&       normal,
        bool                visible,
        ::mce::Color const& outlineColor,
        ::mce::Color const& fillColor
    ) = 0;

    virtual ::Scripting::Result_deprecated<void> removePlane(::mce::UUID const& planeId) = 0;

    virtual ::Scripting::Result_deprecated<void> setPlaneVisibility(::mce::UUID const& planeId, bool visible) = 0;

    virtual ::Scripting::Result_deprecated<void>
    setPlaneColors(::mce::UUID const& planeId, ::mce::Color const& outlineColor, ::mce::Color const& fillColor) = 0;

    virtual ::Scripting::Result_deprecated<void> setPlaneOrigin(::mce::UUID const& planeId, ::Vec3 const& origin) = 0;

    virtual ::Scripting::Result_deprecated<void> setPlaneNormal(::mce::UUID const& planeId, ::Vec3 const& normal) = 0;

    virtual ::std::vector<::Editor::GuidePlaneData> getPlanes() const = 0;

    virtual ::std::optional<::Editor::GuidePlaneData> getPlane(::mce::UUID const& planeId) const = 0;

    virtual ::Scripting::Result_deprecated<void> setAllPlanesVisible(bool visible) = 0;

    virtual bool isAllPlanesVisible() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
