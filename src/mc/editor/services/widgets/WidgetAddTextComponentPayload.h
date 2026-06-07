#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class WidgetAddTextComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddTextComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka3dfc4;
    ::ll::UntypedStorage<4, 16> mUnkbe93e4;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddTextComponentPayload& operator=(WidgetAddTextComponentPayload const&);
    WidgetAddTextComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddTextComponentPayload(::Editor::Network::WidgetAddTextComponentPayload const&);

    MCNAPI WidgetAddTextComponentPayload(
        ::mce::UUID const&   serviceId,
        ::mce::UUID const&   groupId,
        ::mce::UUID const&   widgetId,
        ::mce::UUID const&   componentId,
        ::std::string const& componentName,
        ::Vec3 const&        pos,
        bool                 visible,
        bool                 lockToSurface,
        ::std::string const& textString,
        ::mce::Color const&  color
    );

    MCNAPI ::Editor::Network::WidgetAddTextComponentPayload&
    operator=(::Editor::Network::WidgetAddTextComponentPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddTextComponentPayload const&);

    MCNAPI void* $ctor(
        ::mce::UUID const&   serviceId,
        ::mce::UUID const&   groupId,
        ::mce::UUID const&   widgetId,
        ::mce::UUID const&   componentId,
        ::std::string const& componentName,
        ::Vec3 const&        pos,
        bool                 visible,
        bool                 lockToSurface,
        ::std::string const& textString,
        ::mce::Color const&  color
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
