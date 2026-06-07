#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class WidgetAddVolumeOutlineComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddVolumeOutlineComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnka420c8;
    ::ll::UntypedStorage<4, 16> mUnk5cfecf;
    ::ll::UntypedStorage<4, 16> mUnkbe769a;
    ::ll::UntypedStorage<4, 16> mUnk82c17c;
    ::ll::UntypedStorage<4, 16> mUnkb79290;
    ::ll::UntypedStorage<1, 1>  mUnkb4f845;
    ::ll::UntypedStorage<1, 1>  mUnk20e000;
    ::ll::UntypedStorage<1, 1>  mUnkb08d42;
    ::ll::UntypedStorage<1, 1>  mUnkd05602;
    ::ll::UntypedStorage<4, 12> mUnke0cf13;
    ::ll::UntypedStorage<4, 12> mUnk52a6ae;
    ::ll::UntypedStorage<8, 96> mUnk2e30a5;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddVolumeOutlineComponentPayload& operator=(WidgetAddVolumeOutlineComponentPayload const&);
    WidgetAddVolumeOutlineComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddVolumeOutlineComponentPayload(::Editor::Network::WidgetAddVolumeOutlineComponentPayload const&);

    MCNAPI WidgetAddVolumeOutlineComponentPayload(
        ::mce::UUID const&                                              serviceId,
        ::mce::UUID const&                                              groupId,
        ::mce::UUID const&                                              widgetId,
        ::mce::UUID const&                                              componentId,
        ::std::string const&                                            componentName,
        ::Vec3 const&                                                   pos,
        bool                                                            visible,
        bool                                                            lockToSurface,
        ::std::optional<::Editor::RelativeVolumeListBlockVolume> const& volume,
        ::mce::Color const&                                             outlineColor,
        ::mce::Color const&                                             hullColor,
        ::mce::Color const&                                             highlightOutlineColor,
        ::mce::Color const&                                             highlightHullColor,
        bool                                                            showOutline,
        bool                                                            showHighlightOutline,
        ::Rotation                                                      rotation,
        ::Mirror                                                        mirror,
        ::Vec3 const&                                                   offset,
        ::Vec3 const&                                                   normalizedOrigin
    );

    MCNAPI ::Editor::Network::WidgetAddVolumeOutlineComponentPayload&
    operator=(::Editor::Network::WidgetAddVolumeOutlineComponentPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddVolumeOutlineComponentPayload const&);

    MCNAPI void* $ctor(
        ::mce::UUID const&                                              serviceId,
        ::mce::UUID const&                                              groupId,
        ::mce::UUID const&                                              widgetId,
        ::mce::UUID const&                                              componentId,
        ::std::string const&                                            componentName,
        ::Vec3 const&                                                   pos,
        bool                                                            visible,
        bool                                                            lockToSurface,
        ::std::optional<::Editor::RelativeVolumeListBlockVolume> const& volume,
        ::mce::Color const&                                             outlineColor,
        ::mce::Color const&                                             hullColor,
        ::mce::Color const&                                             highlightOutlineColor,
        ::mce::Color const&                                             highlightHullColor,
        bool                                                            showOutline,
        bool                                                            showHighlightOutline,
        ::Rotation                                                      rotation,
        ::Mirror                                                        mirror,
        ::Vec3 const&                                                   offset,
        ::Vec3 const&                                                   normalizedOrigin
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
