#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UITextureInfoPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb98782;
    ::ll::UntypedStorage<8, 24> mUnk2a11d8;
    ::ll::UntypedStorage<8, 56> mUnk2ebe6b;
    // NOLINTEND

public:
    // prevent constructor by default
    UITextureInfoPtr& operator=(UITextureInfoPtr const&);
    UITextureInfoPtr(UITextureInfoPtr const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UITextureInfoPtr();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UITextureInfoPtr();

    MCNAPI ::UITextureInfoPtr& _move(::UITextureInfoPtr&& moved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
