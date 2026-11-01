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
// clang-format on

class DataDrivenRendererV2RequiredData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererRegistry>>       mProcessedData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenRendererContinuousData>> mContinuousData;
    ::ll::TypedStorage<1, 1, bool>                                                  mEnabled;
    ::ll::TypedStorage<1, 1, bool> mActorsWithAttachablesAndIndependentRenderersEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererV2RequiredData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenRendererV2RequiredData(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );

    MCNAPI bool _addRendererToDedicatedPool(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::MinecraftGameplayGraphicsResources&          graphicsResources
    );

    MCNAPI bool forceReinitialize(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );

    MCNAPI bool removeIndependentRenderer(::std::shared_ptr<::DataDrivenRenderer> const& renderer);

    MCNAPI bool tryAddIndependentRenderer(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::MinecraftGameplayGraphicsResources&          graphicsResources
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );
    // NOLINTEND
};
