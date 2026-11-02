#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/ClientSkinInfoData.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class GeometryGroup;
// clang-format on

struct ClientSkin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mInitialized;
    ::ll::TypedStorage<1, 1, bool>                                mIsLoadingGeometry;
    ::ll::TypedStorage<4, 4, int>                                 mReferenceCount;
    ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityId>>             mEntity;
    ::ll::TypedStorage<8, 328, ::ClientSkinInfoData>              mSkinInfoData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryGroup>> mClientSkinGeometryGroup;
    // NOLINTEND
};
