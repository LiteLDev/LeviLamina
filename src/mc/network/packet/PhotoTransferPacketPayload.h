#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/storage/PhotoType.h"

// auto generated forward declare list
// clang-format off
class PhotoTransferPacket;
namespace Core { class Path; }
// clang-format on

struct PhotoTransferPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  mPhotoName;
    ::ll::TypedStorage<8, 32, ::std::string>  mPhotoData;
    ::ll::TypedStorage<8, 32, ::std::string>  mBookId;
    ::ll::TypedStorage<1, 1, ::PhotoType>     mType;
    ::ll::TypedStorage<1, 1, ::PhotoType>     mSourceType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOwnerId;
    ::ll::TypedStorage<8, 32, ::std::string>  mNewPhotoName;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PhotoTransferPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit PhotoTransferPacketPayload(::std::string const& photoName);
#endif

    MCAPI ~PhotoTransferPacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static bool fromDisk(::Core::Path path, ::PhotoTransferPacket& result);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& photoName);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
