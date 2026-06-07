#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/SplineType.h"
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class WidgetAddSplineComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddSplineComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbb722d;
    ::ll::UntypedStorage<4, 4>  mUnk69b4a7;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddSplineComponentPayload& operator=(WidgetAddSplineComponentPayload const&);
    WidgetAddSplineComponentPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddSplineComponentPayload(::Editor::Network::WidgetAddSplineComponentPayload const&);

    MCNAPI WidgetAddSplineComponentPayload(
        ::mce::UUID const&                    serviceId,
        ::mce::UUID const&                    groupId,
        ::mce::UUID const&                    widgetId,
        ::mce::UUID const&                    componentId,
        ::std::string const&                  componentName,
        ::Vec3 const&                         pos,
        bool                                  visible,
        bool                                  lockToSurface,
        ::std::vector<::mce::UUID>            controlPointIds,
        ::Scripting::RenderHelper::SplineType splineType
    );

    MCNAPI ::Editor::Network::WidgetAddSplineComponentPayload&
    operator=(::Editor::Network::WidgetAddSplineComponentPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::WidgetAddSplineComponentPayload const&);

    MCNAPI void* $ctor(
        ::mce::UUID const&                    serviceId,
        ::mce::UUID const&                    groupId,
        ::mce::UUID const&                    widgetId,
        ::mce::UUID const&                    componentId,
        ::std::string const&                  componentName,
        ::Vec3 const&                         pos,
        bool                                  visible,
        bool                                  lockToSurface,
        ::std::vector<::mce::UUID>            controlPointIds,
        ::Scripting::RenderHelper::SplineType splineType
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
