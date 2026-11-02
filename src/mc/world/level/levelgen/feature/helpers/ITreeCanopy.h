#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
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
    struct AttachmentInfo;
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

    struct AttachmentInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos const>               attachmentPos;
        ::ll::TypedStorage<4, 8, ::ITreeCanopy::BranchSize const> attachmentSize;
        ::ll::TypedStorage<4, 4, int const>                       attachmentHeight;
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
        int,
        ::std::vector<::ITreeCanopy::AttachmentInfo> const&
    ) const = 0;
    // NOLINTEND
};
