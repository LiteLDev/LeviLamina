#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class AnnotationDataPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::AnnotationDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk20edac;
    ::ll::UntypedStorage<8, 32> mUnk6d96df;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationDataPayload& operator=(AnnotationDataPayload const&);
    AnnotationDataPayload(AnnotationDataPayload const&);
    AnnotationDataPayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
