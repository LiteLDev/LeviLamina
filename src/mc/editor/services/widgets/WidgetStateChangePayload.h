#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetStateChangePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetStateChangePayload>,
                                 public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk947490;
    ::ll::UntypedStorage<4, 16> mUnkd88fbd;
    ::ll::UntypedStorage<1, 2>  mUnkdac016;
    ::ll::UntypedStorage<4, 8>  mUnk17562b;
    ::ll::UntypedStorage<1, 2>  mUnk4c08e3;
    ::ll::UntypedStorage<1, 2>  mUnk3e4160;
    ::ll::UntypedStorage<4, 16> mUnk7929fa;
    ::ll::UntypedStorage<1, 2>  mUnk580dd9;
    ::ll::UntypedStorage<1, 2>  mUnk3c2f45;
    ::ll::UntypedStorage<1, 2>  mUnk9b160b;
    ::ll::UntypedStorage<1, 2>  mUnk5d76c0;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetStateChangePayload& operator=(WidgetStateChangePayload const&);
    WidgetStateChangePayload(WidgetStateChangePayload const&);
    WidgetStateChangePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetStateChangePayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
