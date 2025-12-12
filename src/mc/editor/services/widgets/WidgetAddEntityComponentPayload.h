#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetComponentBasePayload.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class WidgetAddEntityComponentPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetAddEntityComponentPayload>,
  public ::Editor::Network::WidgetComponentBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb22c2c;
    ::ll::UntypedStorage<1, 1>  mUnka6ce39;
    ::ll::UntypedStorage<8, 40> mUnk7e0373;
    ::ll::UntypedStorage<8, 40> mUnk55487e;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetAddEntityComponentPayload(WidgetAddEntityComponentPayload const&);
    WidgetAddEntityComponentPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetAddEntityComponentPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetAddEntityComponentPayload(
        ::mce::UUID const&             serviceId,
        ::mce::UUID const&             groupId,
        ::mce::UUID const&             widgetId,
        ::mce::UUID const&             componentId,
        ::std::string const&           componentName,
        ::Vec3 const&                  pos,
        bool                           visible,
        bool                           lockToSurface,
        ::std::string const&           entityName,
        bool                           clickable,
        ::std::optional<::std::string> selectedAnimation,
        ::std::optional<::std::string> deselectedAnimation
    );

    MCNAPI ::Editor::Network::WidgetAddEntityComponentPayload&
    operator=(::Editor::Network::WidgetAddEntityComponentPayload&&);

    MCNAPI ::Editor::Network::WidgetAddEntityComponentPayload&
    operator=(::Editor::Network::WidgetAddEntityComponentPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::UUID const&             serviceId,
        ::mce::UUID const&             groupId,
        ::mce::UUID const&             widgetId,
        ::mce::UUID const&             componentId,
        ::std::string const&           componentName,
        ::Vec3 const&                  pos,
        bool                           visible,
        bool                           lockToSurface,
        ::std::string const&           entityName,
        bool                           clickable,
        ::std::optional<::std::string> selectedAnimation,
        ::std::optional<::std::string> deselectedAnimation
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
