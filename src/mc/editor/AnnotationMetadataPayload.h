#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class AnnotationMetadataPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::AnnotationMetadataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfd2e47;
    ::ll::UntypedStorage<4, 4>  mUnk916ae2;
    ::ll::UntypedStorage<8, 32> mUnk1525d8;
    ::ll::UntypedStorage<4, 12> mUnk3203d7;
    ::ll::UntypedStorage<1, 1>  mUnk393fb5;
    ::ll::UntypedStorage<8, 48> mUnk36121a;
    ::ll::UntypedStorage<8, 24> mUnk3fcfe2;
    ::ll::UntypedStorage<8, 8>  mUnkcab7ab;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationMetadataPayload& operator=(AnnotationMetadataPayload const&);
    AnnotationMetadataPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnnotationMetadataPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnnotationMetadataPayload(::Editor::Network::AnnotationMetadataPayload const&);

    MCNAPI ::Editor::Network::AnnotationMetadataPayload& operator=(::Editor::Network::AnnotationMetadataPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::AnnotationMetadataPayload const&);
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
