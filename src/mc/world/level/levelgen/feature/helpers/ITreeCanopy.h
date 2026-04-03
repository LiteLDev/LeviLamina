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

class ITreeCanopy {
public:
    // ITreeCanopy inner types declare
    // clang-format off
    struct BranchSize;
    // clang-format on

    // ITreeCanopy inner types define
    struct BranchSize {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> sizeX;
        ::ll::TypedStorage<4, 4, int> sizeZ;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITreeCanopy() = default;

    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::ITreeCanopy::BranchSize const&,
        ::Random&,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
