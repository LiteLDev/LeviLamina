#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

namespace Editor::Network {

class WidgetCreateGroupPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetCreateGroupPayload>,
                                 public ::Editor::Network::WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk80f121;
    ::ll::UntypedStorage<4, 4>  mUnke9b552;
    ::ll::UntypedStorage<1, 1>  mUnk6923c5;
    ::ll::UntypedStorage<1, 1>  mUnkfb1cb2;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetCreateGroupPayload& operator=(WidgetCreateGroupPayload const&);
    WidgetCreateGroupPayload(WidgetCreateGroupPayload const&);
    WidgetCreateGroupPayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
