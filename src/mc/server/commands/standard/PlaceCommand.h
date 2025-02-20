#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CommandOrigin;
class CommandOutput;
class CommandPosition;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3aa43a;
    ::ll::UntypedStorage<8, 32> mUnk959a5a;
    ::ll::UntypedStorage<8, 32> mUnk6570bc;
    ::ll::UntypedStorage<4, 4>  mUnk194dc9;
    ::ll::UntypedStorage<4, 16> mUnke003e7;
    ::ll::UntypedStorage<8, 32> mUnkd4ce49;
    ::ll::UntypedStorage<8, 8>  mUnkf720b6;
    ::ll::UntypedStorage<1, 1>  mUnk663c8d;
    ::ll::UntypedStorage<1, 1>  mUnk5c7fb5;
    ::ll::UntypedStorage<1, 1>  mUnk77c817;
    ::ll::UntypedStorage<1, 1>  mUnk7d4350;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaceCommand& operator=(PlaceCommand const&);
    PlaceCommand(PlaceCommand const&);
    PlaceCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
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
        ::std::string const&     pool,
        ::std::string const&     target,
        schar                    maxDepth,
        ::CommandPosition const& pos,
        bool                     keepJigsaws,
        bool                     includeEntities,
        ::CommandOrigin const&   origin,
        ::CommandOutput&         output
    ) const;

    MCAPI void _placeStructure(
        ::std::string const&     id,
        ::CommandPosition const& pos,
        bool                     ignoreStartHeight,
        bool                     keepJigsaws,
        bool                     includeEntities,
        ::CommandOrigin const&   origin,
        ::CommandOutput&         output
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::nonstd::expected<::BoundingBox, ::std::string_view> placeJigsaw(
        ::std::string const& pool,
        ::std::string const& target,
        schar                maxDepth,
        ::BlockPos const&    position,
        bool                 keepJigsaws,
        bool                 includeEntities,
        ::Dimension&         dimension
    );

    MCAPI static ::nonstd::expected<::BoundingBox, ::std::string_view> placeStructure(
        ::std::string const& id,
        ::BlockPos const&    pos,
        ::Dimension&         dimension,
        bool                 ignoreStartHeight,
        bool                 keepJigsaws,
        bool                 includeEntities
    );

    MCAPI static void setup(
        ::CommandRegistry&                                                    registry,
        ::std::unordered_map<::HashedString, ::BiomeDecorationFeature> const& biomeDecorationFeatures,
        ::Experiments const&                                                  experiments
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
