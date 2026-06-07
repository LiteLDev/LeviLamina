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
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class WidgetAddClipboardComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddClipboardComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka36b14;
    ::ll::UntypedStorage<1, 1>  mUnk13d350;
    ::ll::UntypedStorage<1, 1>  mUnk130de2;
    ::ll::UntypedStorage<4, 12> mUnk597bd9;
    ::ll::UntypedStorage<4, 12> mUnk975c08;
    ::ll::UntypedStorage<1, 1>  mUnk7d7c68;
    ::ll::UntypedStorage<4, 16> mUnkfb54ec;
    ::ll::UntypedStorage<4, 16> mUnk6d80b4;
    ::ll::UntypedStorage<4, 16> mUnk4f361a;
    ::ll::UntypedStorage<4, 16> mUnk5ecd30;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddClipboardComponentPayload& operator=(WidgetAddClipboardComponentPayload const&);
    WidgetAddClipboardComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddClipboardComponentPayload(::Editor::Network::WidgetAddClipboardComponentPayload const&);

    MCNAPI WidgetAddClipboardComponentPayload(
        ::mce::UUID const&   serviceId,
        ::mce::UUID const&   groupId,
        ::mce::UUID const&   widgetId,
        ::mce::UUID const&   componentId,
        ::std::string const& componentName,
        ::Vec3 const&        pos,
        bool                 visible,
        bool                 lockToSurface,
        ::std::string const& clipboardItemId,
        ::Rotation           rotation,
        ::Mirror             mirror,
        ::Vec3 const&        clipboardOffset,
        ::Vec3 const&        clipboardOrigin,
        bool                 showOutline,
        ::mce::Color const&  outlineColor,
        ::mce::Color const&  hullColor,
        ::mce::Color const&  highlightOutlineColor,
        ::mce::Color const&  highlightHullColor
    );

    MCNAPI ::Editor::Network::WidgetAddClipboardComponentPayload&
    operator=(::Editor::Network::WidgetAddClipboardComponentPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddClipboardComponentPayload const&);

    MCNAPI void* $ctor(
        ::mce::UUID const&   serviceId,
        ::mce::UUID const&   groupId,
        ::mce::UUID const&   widgetId,
        ::mce::UUID const&   componentId,
        ::std::string const& componentName,
        ::Vec3 const&        pos,
        bool                 visible,
        bool                 lockToSurface,
        ::std::string const& clipboardItemId,
        ::Rotation           rotation,
        ::Mirror             mirror,
        ::Vec3 const&        clipboardOffset,
        ::Vec3 const&        clipboardOrigin,
        bool                 showOutline,
        ::mce::Color const&  outlineColor,
        ::mce::Color const&  hullColor,
        ::mce::Color const&  highlightOutlineColor,
        ::mce::Color const&  highlightHullColor
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
