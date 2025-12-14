#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/feature/FeaturePlacementFailureLogProxy.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
class SemVersion;
// clang-format on

class IFeature {
public:
    // IFeature inner types declare
    // clang-format off
    struct PlacementContext;
    // clang-format on

    // IFeature inner types define
    struct PlacementContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI&>              mTarget;
        ::ll::TypedStorage<4, 12, ::BlockPos>                       mPos;
        ::ll::TypedStorage<8, 8, ::Random&>                         mRandom;
        ::ll::TypedStorage<8, 8, ::RenderParams&>                   mRenderParams;
        ::ll::TypedStorage<8, 8, ::FeaturePlacementFailureLogProxy> mLogger;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlacementContext& operator=(PlacementContext const&);
        PlacementContext(PlacementContext const&);
        PlacementContext();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mInternal;
    ::ll::TypedStorage<1, 1, bool> mCanUseInternalFeature;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFeature();

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const&) const = 0;

    virtual bool isValidPlacement(::std::string const& pass);

    virtual void upgradeFormat(::SemVersion const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    isExposedTo(::IBlockWorldGenAPI const& target, ::BlockPos const& candidatePos, ::BlockDescriptor const& exposedTo);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& DEFAULT_NOT_SUPPORTED_PASS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidPlacement(::std::string const& pass);

    MCFOLD void $upgradeFormat(::SemVersion const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
