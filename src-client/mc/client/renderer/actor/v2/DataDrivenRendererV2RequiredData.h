#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRenderer;
class GameVersion;
class HashedString;
class MinecraftGameplayGraphicsResources;
struct DataDrivenRendererPreprocessingContext;
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
        ::ll::UntypedStorage<8, 48> mUnk1f3522;
        ::ll::UntypedStorage<8, 16> mUnk2bf92a;
        ::ll::UntypedStorage<8, 8>  mUnk85d17b;
        // NOLINTEND

    public:
        // prevent constructor by default
        LateRenderer& operator=(LateRenderer const&);
        LateRenderer(LateRenderer const&);
        LateRenderer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LateRenderer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk1ce86b;
    ::ll::UntypedStorage<8, 8>   mUnkeaa985;
    ::ll::UntypedStorage<1, 1>   mUnk6ed104;
    ::ll::UntypedStorage<1, 1>   mUnk37f415;
    ::ll::UntypedStorage<4, 4>   mUnk918898;
    ::ll::UntypedStorage<4, 4>   mUnk81b805;
    ::ll::UntypedStorage<8, 208> mUnke8c231;
    ::ll::UntypedStorage<8, 24>  mUnk11451e;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererV2RequiredData& operator=(DataDrivenRendererV2RequiredData const&);
    DataDrivenRendererV2RequiredData(DataDrivenRendererV2RequiredData const&);
    DataDrivenRendererV2RequiredData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool forceReinitialize(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::DataDrivenRenderer>> const& renderers,
        ::MinecraftGameplayGraphicsResources&                                                graphicsResources,
        ::GameVersion const&                                                                 gameVersion
    );

    MCNAPI void rebuildLateRenderers(::MinecraftGameplayGraphicsResources& graphicsResources);

    MCNAPI bool removeRenderer(::std::shared_ptr<::DataDrivenRenderer> const& renderer);

    MCNAPI bool shouldRebuild() const;

    MCNAPI bool tryLateAddRenderer(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::MinecraftGameplayGraphicsResources&          graphicsResources
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _tryAddRenderer(
        ::HashedString const&                          name,
        ::std::shared_ptr<::DataDrivenRenderer> const& renderer,
        ::DataDrivenRendererPreprocessingContext&      ctx,
        bool                                           supportPlayers
    );
    // NOLINTEND
};
