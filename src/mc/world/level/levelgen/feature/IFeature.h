#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
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
        ::ll::UntypedStorage<8, 8>  mUnk82d3a6;
        ::ll::UntypedStorage<4, 12> mUnke9f615;
        ::ll::UntypedStorage<8, 8>  mUnk7c4004;
        ::ll::UntypedStorage<8, 8>  mUnk7b914f;
        ::ll::UntypedStorage<8, 8>  mUnk45ed6b;
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
    // vIndex: 0
    virtual ~IFeature();

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const&) const = 0;

    // vIndex: 2
    virtual bool isValidPlacement(::std::string const& pass);

    // vIndex: 3
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
