#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class AnnotationRemovePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::AnnotationRemovePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke96a88;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationRemovePayload& operator=(AnnotationRemovePayload const&);
    AnnotationRemovePayload(AnnotationRemovePayload const&);
    AnnotationRemovePayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
