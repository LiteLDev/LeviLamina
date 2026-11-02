#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class AnnotationClientInitializedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::AnnotationClientInitializedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk49578b;
    ::ll::UntypedStorage<4, 4>  mUnk7a2e3d;
    ::ll::UntypedStorage<4, 12> mUnkc376bc;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationClientInitializedPayload& operator=(AnnotationClientInitializedPayload const&);
    AnnotationClientInitializedPayload(AnnotationClientInitializedPayload const&);
    AnnotationClientInitializedPayload();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
