#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/BlockArchetypePtr.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  mBlockID;
    ::ll::TypedStorage<4, 4, ::MaterialType>       mMaterial;
    ::ll::TypedStorage<8, 16, ::BlockArchetypePtr> mBlockArchetype;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockData(VanillaBlockData const&);
    VanillaBlockData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

    MCAPI ::VanillaBlockData& operator=(::VanillaBlockData&&);

    MCAPI ::VanillaBlockData& operator=(::VanillaBlockData const&);

    MCAPI ~VanillaBlockData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
