#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class WidgetComponentBasePayload : public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf29c21;
    ::ll::UntypedStorage<8, 32> mUnk9d3ecd;
    ::ll::UntypedStorage<4, 12> mUnke462d2;
    ::ll::UntypedStorage<1, 1>  mUnka46064;
    ::ll::UntypedStorage<1, 1>  mUnk63992d;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetComponentBasePayload(WidgetComponentBasePayload const&);
    WidgetComponentBasePayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WidgetComponentBasePayload(
        ::mce::UUID const&   serviceId,
        ::mce::UUID const&   groupId,
        ::mce::UUID const&   widgetId,
        ::mce::UUID const&   componentId,
        ::std::string const& componentName,
        ::Vec3 const&        pos,
        bool                 visible,
        bool                 lockToSurface
    );

    MCAPI ::Editor::Network::WidgetComponentBasePayload& operator=(::Editor::Network::WidgetComponentBasePayload&&);

    MCAPI ::Editor::Network::WidgetComponentBasePayload&
    operator=(::Editor::Network::WidgetComponentBasePayload const&);

    MCAPI ~WidgetComponentBasePayload();
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
        bool                 lockToSurface
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Network
