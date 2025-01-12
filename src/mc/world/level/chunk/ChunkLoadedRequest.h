#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/AreaType.h"
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class ITickingAreaView;
class LevelChunk;
struct Bounds;
struct DeserializedChunkLoadedRequest;
struct Tick;
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
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkLoadedRequest(::ChunkLoadedRequest&&);

    MCAPI ChunkLoadedRequest(
        ::std::string const&                tickingAreaName,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI ChunkLoadedRequest(
        ::Bounds const&                     bounds,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                isCircleArea,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI ::ITickingAreaView const* _getTickingArea(::Dimension const& dimension) const;

    MCAPI ::ChunksLoadedStatus areAllChunksLoaded(::Dimension& dimension, ::Tick currentLevelTick) const;

    MCAPI bool areaContainsChunk(::LevelChunk const& chunk) const;

    MCAPI ::CompoundTag serialize(::ChunkRequestListType chunkRequestListType);

    MCAPI ~ChunkLoadedRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::DeserializedChunkLoadedRequest load(
        ::std::string const&    key,
        ::CompoundTag const&    tag,
        ::ICommandOriginLoader& loader,
        ::std::string const&    dimensionPrefix
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkLoadedRequest&&);

    MCAPI void* $ctor(
        ::std::string const&                tickingAreaName,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI void* $ctor(
        ::Bounds const&                     bounds,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                isCircleArea,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
