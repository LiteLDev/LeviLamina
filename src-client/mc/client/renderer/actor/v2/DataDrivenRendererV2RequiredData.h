#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRenderer;
class DataDrivenRendererRegistry;
class GameVersion;
class HashedString;
class MinecraftGameplayGraphicsResources;
struct DataDrivenRendererContinuousData;
struct DataDrivenRendererPreprocessingContext;
// clang-format on

class DataDrivenRendererV2RequiredData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererRegistry>>       mProcessedData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererContinuousData>> mContinuousData;
    ::ll::TypedStorage<1, 1, bool>                                                  mEnabled;
    ::ll::TypedStorage<1, 1, bool> mActorsWithAttachablesEnabledAndPlayers;
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

    MCAPI bool _addRendererToDedicatedPool(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::MinecraftGameplayGraphicsResources&          graphicsResources
    );

    MCAPI bool forceReinitialize(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );

    MCAPI bool removeRenderer(::std::shared_ptr<::DataDrivenRenderer> const& renderer);
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
