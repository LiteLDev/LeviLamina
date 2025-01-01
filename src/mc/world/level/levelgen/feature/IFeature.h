#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
class SemVersion;
// clang-format on

class IFeature {
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
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, ::RenderParams&) const = 0;

    // vIndex: 2
    virtual bool isValidPlacement(::std::string const& pass);

    // vIndex: 3
    virtual void upgradeFormat(::SemVersion const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isAllowedToPlaceFeature(::IFeature const& feature) const;

    MCAPI bool isInternal() const;

    MCAPI bool operator==(::IFeature const& other) const;

    MCAPI bool
    setBlockSafe(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block, int updateFlags) const;

    MCAPI bool setBlockSafeSimple(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void setCanUseInternalFeature(bool canUseInternalFeature);

    MCAPI void setIsInternal(bool isInternal);
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValidPlacement(::std::string const& pass);

    MCAPI void $upgradeFormat(::SemVersion const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
