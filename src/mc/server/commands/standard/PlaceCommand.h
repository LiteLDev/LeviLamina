#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandFilePath.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/ServerCommand.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Dimension;
class Experiments;
class HashedString;
class IFeature;
struct BiomeDecorationFeature;
// clang-format on

class PlaceCommand : public ::ServerCommand {
public:
    // PlaceCommand inner types define
    enum class PlaceAction : int {
        Structure   = 0,
        Jigsaw      = 1,
        Feature     = 2,
        FeatureRule = 3,
    };

    using BiomeDecorationFeatureMap = ::std::unordered_map<::HashedString, ::BiomeDecorationFeature>;

    using PlaceResult = ::nonstd::expected<::BoundingBox, ::std::string_view>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlaceCommand::PlaceAction>    mPlaceAction;
    ::ll::TypedStorage<8, 32, ::CommandFilePath>             mPool;
    ::ll::TypedStorage<8, 32, ::std::string>                 mTarget;
    ::ll::TypedStorage<4, 4, int>                            mMaxDepth;
    ::ll::TypedStorage<4, 16, ::CommandPosition>             mPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                 mStructureOrFeatureName;
    ::ll::TypedStorage<8, 8, ::IFeature const*>              mFeature;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings> mLiquidSettings;
    ::ll::TypedStorage<1, 1, bool>                           mPosIsSet;
    ::ll::TypedStorage<1, 1, bool>                           mIgnoreStartHeight;
    ::ll::TypedStorage<1, 1, bool>                           mKeepJigsaws;
    ::ll::TypedStorage<1, 1, bool>                           mIncludeEntities;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~PlaceCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _placeFeature(
        ::IFeature const*        feature,
        ::CommandPosition const& pos,
        ::CommandOrigin const&   origin,
        ::CommandOutput&         output
    ) const;

    MCAPI void _placeFeatureRule(
        ::std::string const&     featureRuleName,
        ::CommandPosition const& pos,
        ::CommandOrigin const&   origin,
        ::CommandOutput&         output
    ) const;

    MCAPI void _placeJigsaw(
        ::std::string const&           pool,
        ::std::string const&           target,
        schar                          maxDepth,
        ::CommandPosition const&       pos,
        bool                           keepJigsaws,
        bool                           includeEntities,
        ::br::worldgen::LiquidSettings liquidSettings,
        ::CommandOrigin const&         origin,
        ::CommandOutput&               output
    ) const;

    MCAPI void _placeStructure(
        ::std::string const&           id,
        ::CommandPosition const&       pos,
        bool                           ignoreStartHeight,
        bool                           keepJigsaws,
        bool                           includeEntities,
        ::br::worldgen::LiquidSettings liquidSettings,
        ::CommandOrigin const&         origin,
        ::CommandOutput&               output
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::nonstd::expected<::BoundingBox, ::std::string_view> placeJigsaw(
        ::std::string const&           pool,
        ::std::string const&           target,
        schar                          maxDepth,
        ::BlockPos const&              position,
        bool                           keepJigsaws,
        bool                           includeEntities,
        ::Dimension&                   dimension,
        ::br::worldgen::LiquidSettings liquidSettings
    );

    MCAPI static ::nonstd::expected<::BoundingBox, ::std::string_view> placeStructure(
        ::std::string const&           id,
        ::BlockPos const&              pos,
        ::Dimension&                   dimension,
        bool                           ignoreStartHeight,
        bool                           keepJigsaws,
        bool                           includeEntities,
        ::br::worldgen::LiquidSettings liquidSettings
    );

    MCAPI static void setup(
        ::CommandRegistry&                                                    registry,
        ::std::unordered_map<::HashedString, ::BiomeDecorationFeature> const& biomeDecorationFeatures,
        ::Experiments const&
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
