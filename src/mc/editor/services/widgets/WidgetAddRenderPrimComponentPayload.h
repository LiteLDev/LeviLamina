#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::Network { class WidgetPrimComponentAxialSphere; }
namespace Editor::Network { class WidgetPrimComponentBox; }
namespace Editor::Network { class WidgetPrimComponentDisc; }
namespace Editor::Network { class WidgetPrimComponentLine; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class WidgetAddRenderPrimComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddRenderPrimComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 48> mUnk25a3a6;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddRenderPrimComponentPayload& operator=(WidgetAddRenderPrimComponentPayload const&);
    WidgetAddRenderPrimComponentPayload(WidgetAddRenderPrimComponentPayload const&);
    WidgetAddRenderPrimComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddRenderPrimComponentPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WidgetAddRenderPrimComponentPayload(
        ::mce::UUID const&   serviceId,
        ::mce::UUID const&   groupId,
        ::mce::UUID const&   widgetId,
        ::mce::UUID const&   componentId,
        ::std::string const& componentName,
        ::Vec3 const&        pos,
        bool                 visible,
        bool                 lockToSurface,
        ::std::variant<
            ::Editor::Network::WidgetPrimComponentBox,
            ::Editor::Network::WidgetPrimComponentLine,
            ::Editor::Network::WidgetPrimComponentDisc,
            ::Editor::Network::WidgetPrimComponentAxialSphere> primitive
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
        ::std::variant<
            ::Editor::Network::WidgetPrimComponentBox,
            ::Editor::Network::WidgetPrimComponentLine,
            ::Editor::Network::WidgetPrimComponentDisc,
            ::Editor::Network::WidgetPrimComponentAxialSphere> primitive
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
