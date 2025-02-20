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
    ::ll::UntypedStorage<8, 32> mUnk27ccf6;
    ::ll::UntypedStorage<1, 1>  mUnk13d350;
    ::ll::UntypedStorage<1, 1>  mUnk130de2;
    ::ll::UntypedStorage<4, 12> mUnk597bd9;
    ::ll::UntypedStorage<4, 12> mUnk975c08;
    ::ll::UntypedStorage<1, 1>  mUnka491e3;
    ::ll::UntypedStorage<4, 16> mUnkf2fade;
    ::ll::UntypedStorage<4, 16> mUnk6b03a9;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddClipboardComponentPayload& operator=(WidgetAddClipboardComponentPayload const&);
    WidgetAddClipboardComponentPayload(WidgetAddClipboardComponentPayload const&);
    WidgetAddClipboardComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddClipboardComponentPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WidgetAddClipboardComponentPayload(
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
        bool                 showBounds,
        ::mce::Color const&  outlineColor,
        ::mce::Color const&  fillColor
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
        bool                 showBounds,
        ::mce::Color const&  outlineColor,
        ::mce::Color const&  fillColor
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
