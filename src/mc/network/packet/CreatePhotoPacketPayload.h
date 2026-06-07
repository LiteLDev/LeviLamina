#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct CreatePhotoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
    ::ll::TypedStorage<8, 32, ::std::string>  mPhotoName;
    ::ll::TypedStorage<8, 32, ::std::string>  mPhotoItemName;
    // NOLINTEND

public:
    // prevent constructor by default
    CreatePhotoPacketPayload& operator=(CreatePhotoPacketPayload const&);
    CreatePhotoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreatePhotoPacketPayload(::CreatePhotoPacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI CreatePhotoPacketPayload(::ActorUniqueID, ::std::string const& photoName);
#endif

    MCFOLD ::CreatePhotoPacketPayload& operator=(::CreatePhotoPacketPayload&&);

    MCAPI ~CreatePhotoPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::CreatePhotoPacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ActorUniqueID, ::std::string const& photoName);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
