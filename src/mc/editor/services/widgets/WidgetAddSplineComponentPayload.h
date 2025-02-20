#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/SplineType.h"
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
    ::ll::UntypedStorage<8, 24> mUnk4296eb;
    ::ll::UntypedStorage<4, 4>  mUnk2ad0de;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddSplineComponentPayload& operator=(WidgetAddSplineComponentPayload const&);
    WidgetAddSplineComponentPayload(WidgetAddSplineComponentPayload const&);
    WidgetAddSplineComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddSplineComponentPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WidgetAddSplineComponentPayload(
        ::mce::UUID const&                 serviceId,
        ::mce::UUID const&                 groupId,
        ::mce::UUID const&                 widgetId,
        ::mce::UUID const&                 componentId,
        ::std::string const&               componentName,
        ::Vec3 const&                      pos,
        bool                               visible,
        bool                               lockToSurface,
        ::std::vector<::mce::UUID>         controlPointIds,
        ::Editor::RenderHelper::SplineType splineType
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
        ::mce::UUID const&                 serviceId,
        ::mce::UUID const&                 groupId,
        ::mce::UUID const&                 widgetId,
        ::mce::UUID const&                 componentId,
        ::std::string const&               componentName,
        ::Vec3 const&                      pos,
        bool                               visible,
        bool                               lockToSurface,
        ::std::vector<::mce::UUID>         controlPointIds,
        ::Editor::RenderHelper::SplineType splineType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
