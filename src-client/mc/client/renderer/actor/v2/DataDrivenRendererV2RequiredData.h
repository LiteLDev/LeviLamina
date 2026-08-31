#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/DataDrivenV2ResetPoint.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorRenderer;
class DataDrivenRenderer;
class GameVersion;
class MinecraftGameplayGraphicsResources;
struct DataDrivenRendererContinuousData;
struct DataDrivenRendererPreprocessingContext;
struct ProcessedDataDrivenRenderers;
// clang-format on

class DataDrivenRendererV2RequiredData {
public:
    // DataDrivenRendererV2RequiredData inner types declare
    // clang-format off
    struct LateRenderer;
    // clang-format on

    // DataDrivenRendererV2RequiredData inner types define
    struct LateRenderer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString>                        name;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>> renderer;
        ::ll::TypedStorage<8, 8, ::ActorRenderer const*>                 rendererKey;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProcessedDataDrivenRenderers>>     mProcessedData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererContinuousData>> mContinuousData;
    ::ll::TypedStorage<1, 1, bool>                                                  mEnabled;
    ::ll::TypedStorage<1, 1, bool>                       mActorsWithAttachablesEnabledAndPlayers;
    ::ll::TypedStorage<4, 4, uint>                       mDisabledRenderersBeforeRebuild;
    ::ll::TypedStorage<4, 4, uint>                       mCurrentDisabledRendererCount;
    ::ll::TypedStorage<8, 208, ::DataDrivenV2ResetPoint> mResetPoint;
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRendererV2RequiredData::LateRenderer>> mLateRenderers;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererV2RequiredData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenRendererV2RequiredData(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );

    MCAPI bool forceReinitialize(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );

    MCAPI void rebuildLateRenderers(::MinecraftGameplayGraphicsResources& graphicsResources);

    MCAPI bool removeRenderer(::std::shared_ptr<::DataDrivenRenderer> const& renderer);

    MCAPI bool tryLateAddRenderer(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::MinecraftGameplayGraphicsResources&          graphicsResources
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _tryAddRenderer(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::DataDrivenRendererPreprocessingContext&      ctx,
        bool                                           supportPlayers
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );
    // NOLINTEND
};
