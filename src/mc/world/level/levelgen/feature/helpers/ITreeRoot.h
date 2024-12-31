#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class ITreeRoot {
public:
    // prevent constructor by default
    ITreeRoot& operator=(ITreeRoot const&);
    ITreeRoot(ITreeRoot const&);
    ITreeRoot();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITreeRoot() = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    placeRoots(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, int, ::RenderParams&, ::TreeHelper::TreeParams const&)
        const = 0;
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
