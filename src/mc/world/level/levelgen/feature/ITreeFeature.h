#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ITreeFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkb57e2f;
    ::ll::UntypedStorage<8, 8>   mUnka20747;
    ::ll::UntypedStorage<8, 8>   mUnk986fde;
    ::ll::UntypedStorage<8, 8>   mUnk4eed88;
    // NOLINTEND

public:
    // prevent constructor by default
    ITreeFeature& operator=(ITreeFeature const&);
    ITreeFeature(ITreeFeature const&);
    ITreeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITreeFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> _place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
