#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopy;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class ITreeTrunk {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITreeTrunk() = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    placeTrunk(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&, ::ITreeCanopy const*)
        const = 0;

    // vIndex: 2
    virtual int getTreeHeight(::Random&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
