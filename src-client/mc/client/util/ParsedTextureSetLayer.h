#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParsedTextureSetLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkb42cfe;
    ::ll::UntypedStorage<8, 56> mUnk19041c;
    ::ll::UntypedStorage<4, 16> mUnkf47021;
    ::ll::UntypedStorage<1, 1>  mUnk5dc33f;
    ::ll::UntypedStorage<4, 4>  mUnk469263;
    ::ll::UntypedStorage<4, 16> mUnk226562;
    ::ll::UntypedStorage<4, 16> mUnkeedc2e;
    ::ll::UntypedStorage<4, 64> mUnk750fc9;
    ::ll::UntypedStorage<4, 64> mUnkca47a8;
    ::ll::UntypedStorage<4, 4>  mUnk1ca79d;
    ::ll::UntypedStorage<1, 1>  mUnke9c873;
    ::ll::UntypedStorage<1, 1>  mUnkb4e110;
    ::ll::UntypedStorage<1, 1>  mUnk9939eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedTextureSetLayer& operator=(ParsedTextureSetLayer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParsedTextureSetLayer();

    MCNAPI ParsedTextureSetLayer(::ParsedTextureSetLayer const&);

    MCNAPI ParsedTextureSetLayer(::ParsedTextureSetLayer&&);

    MCNAPI ~ParsedTextureSetLayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ParsedTextureSetLayer const&);

    MCNAPI void* $ctor(::ParsedTextureSetLayer&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
