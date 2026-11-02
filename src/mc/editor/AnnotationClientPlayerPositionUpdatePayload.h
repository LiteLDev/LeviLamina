#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class AnnotationClientPlayerPositionUpdatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::AnnotationClientPlayerPositionUpdatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk41a962;
    ::ll::UntypedStorage<4, 12> mUnk37e717;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationClientPlayerPositionUpdatePayload& operator=(AnnotationClientPlayerPositionUpdatePayload const&);
    AnnotationClientPlayerPositionUpdatePayload(AnnotationClientPlayerPositionUpdatePayload const&);
    AnnotationClientPlayerPositionUpdatePayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
