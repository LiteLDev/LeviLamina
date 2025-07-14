#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/level/block/BlockRenderLayer.h"

struct BlockMaterialInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk47e562;
    ::ll::UntypedStorage<4, 4>  mUnk22148c;
    ::ll::UntypedStorage<1, 1>  mUnkdce191;
    ::ll::UntypedStorage<1, 1>  mUnk50874f;
    ::ll::UntypedStorage<1, 1>  mUnk12dc06;
    ::ll::UntypedStorage<1, 1>  mUnkf63cee;
    ::ll::UntypedStorage<8, 16> mUnk6e50da;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaterialInstance(BlockMaterialInstance const&);
    BlockMaterialInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockMaterialInstance& operator=(::BlockMaterialInstance&&);

    MCNAPI ::BlockMaterialInstance& operator=(::BlockMaterialInstance const&);

    MCNAPI ~BlockMaterialInstance();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<::std::string, ::BlockRenderLayer> const& renderLayerNameBiMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
