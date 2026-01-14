#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/world/level/levelgen/structure/JigsawJointType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

class JigsawBlockMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mPoolName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mTargetName;
    ::ll::TypedStorage<8, 32, ::std::string>                 mBlockSerializationId;
    ::ll::TypedStorage<8, 32, ::std::string>                 mFinalBlockSerializationId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::JigsawJointType> mJointType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                    mPosition;
    ::ll::TypedStorage<4, 4, int>                            mSelectionPriority;
    ::ll::TypedStorage<4, 4, int>                            mPlacementPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockMetadata(JigsawBlockMetadata const&);
    JigsawBlockMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawBlockMetadata(::SharedTypes::v1_21_80::JigsawBlockMetadata&&);

    MCFOLD ::SharedTypes::v1_21_80::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_80::JigsawBlockMetadata&&);

    MCFOLD ::SharedTypes::v1_21_80::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_80::JigsawBlockMetadata const&);

    MCFOLD bool operator==(::SharedTypes::v1_21_80::JigsawBlockMetadata const&) const;

    MCAPI ~JigsawBlockMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_80::JigsawBlockMetadata&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
