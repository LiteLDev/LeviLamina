#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Bounds.h"
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
class JigsawStructureElementRegistry;
class LevelChunk;
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
    // prevent constructor by default
    ChunkLoadedRequest& operator=(ChunkLoadedRequest const&);
    ChunkLoadedRequest(ChunkLoadedRequest const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkLoadedRequest(::ChunkLoadedRequest&&);

    MCNAPI ChunkLoadedRequest(
        ::std::string const&                tickingAreaName,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );

    MCNAPI ::ITickingAreaView const* _getTickingArea(::Dimension const& dimension) const;

    MCNAPI ::ChunksLoadedStatus areAllChunksLoaded(::Dimension& dimension, ::Tick currentLevelTick) const;

    MCNAPI bool areaContainsChunk(::LevelChunk const& chunk) const;

    MCNAPI ::CompoundTag serialize(::ChunkRequestListType chunkRequestListType);

    MCNAPI ~ChunkLoadedRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidTag(::CompoundTag const& tag);

    MCNAPI static ::DeserializedChunkLoadedRequest load(
        ::std::string const&                    key,
        ::CompoundTag const&                    tag,
        ::ICommandOriginLoader&                 loader,
        ::std::string const&                    dimensionPrefix,
        ::JigsawStructureElementRegistry const& elementReg
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkLoadedRequest&&);

    MCNAPI void* $ctor(
        ::std::string const&                tickingAreaName,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
