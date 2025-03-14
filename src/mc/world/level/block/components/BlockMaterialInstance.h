#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"

struct BlockMaterialInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4d33c2;
    ::ll::UntypedStorage<4, 4>  mUnk22148c;
    ::ll::UntypedStorage<1, 1>  mUnkdce191;
    ::ll::UntypedStorage<1, 1>  mUnk50874f;
    ::ll::UntypedStorage<8, 16> mUnk6e50da;
    ::ll::UntypedStorage<1, 1>  mUnkf63cee;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaterialInstance(BlockMaterialInstance const&);
    BlockMaterialInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockMaterialInstance& operator=(::BlockMaterialInstance&&);

    MCAPI ::BlockMaterialInstance& operator=(::BlockMaterialInstance const&);

    MCAPI ~BlockMaterialInstance();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::std::string, ::BlockRenderLayer> const& renderLayerNameBiMap();

    MCAPI static ::BidirectionalUnorderedMap<::std::string, ::TintMethod> const& tintMethodBiMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
