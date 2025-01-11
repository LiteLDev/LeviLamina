#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Item;
class ItemStack;
class Vec3;
namespace Json { class Value; }
// clang-format on

class SeedItemComponentLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3fb095;
    ::ll::UntypedStorage<8, 8>  mUnk6a0e61;
    ::ll::UntypedStorage<8, 24> mUnk1053b9;
    ::ll::UntypedStorage<1, 1>  mUnkd08ce0;
    ::ll::UntypedStorage<1, 1>  mUnk4cb68b;
    ::ll::UntypedStorage<1, 1>  mUnk18829c;
    // NOLINTEND

public:
    // prevent constructor by default
    SeedItemComponentLegacy& operator=(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SeedItemComponentLegacy(::Item& owner);

    MCAPI bool init(::Json::Value const& data, ::MolangVersion molangVersion);

    MCFOLD bool isPlanting() const;

    MCAPI void setPlanting(bool planting);

    MCAPI bool
    useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3 const& clickPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Item& owner);
    // NOLINTEND
};
