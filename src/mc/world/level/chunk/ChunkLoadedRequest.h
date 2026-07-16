#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Bounds.h"
#include "mc/world/level/chunk/AreaType.h"

// auto generated forward declare list
// clang-format off
class IRequestAction;
// clang-format on

class ChunkLoadedRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mAllowNonTickingPlayerAndTickingAreaChunks;
    ::ll::TypedStorage<1, 1, ::AreaType>                          mAreaType;
    ::ll::TypedStorage<4, 48, ::Bounds>                           mBounds;
    ::ll::TypedStorage<8, 32, ::std::string>                      mTickingAreaName;
    ::ll::TypedStorage<8, 32, ::std::string>                      mSerializationId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IRequestAction>> mRequestAction;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkLoadedRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkLoadedRequest(
        ::std::string const&                tickingAreaName,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI ~ChunkLoadedRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                tickingAreaName,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
