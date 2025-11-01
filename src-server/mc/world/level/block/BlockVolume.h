#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/Pos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BlockVolume {
public:
    // BlockVolume inner types declare
    // clang-format off
    struct BlockVolumeIter;
    // clang-format on
    
    // BlockVolume inner types define
    struct BlockVolumeIter {
    public:
        // BlockVolumeIter inner types define
        using iterator_category = ::std::forward_iterator_tag;
        
        using reference = ::std::pair<::Block const*, ::Pos> const&;
        
        using value_type = ::std::pair<::Block const*, ::Pos> const;
        
        using pointer = ::std::pair<::Block const*, ::Pos> const*;
        
        using difference_type = int64;
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Pos> pos;
        ::ll::TypedStorage<4, 12, ::Pos> dims;
        ::ll::TypedStorage<8, 8, ::buffer_span_mut<::Block const*>::iterator> blockIter;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::buffer_span_mut<::Block const*>> mBlocks;
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    ::ll::TypedStorage<4, 4, uint> mDepth;
    ::ll::TypedStorage<4, 4, int> mDimensionBottom;
    ::ll::TypedStorage<8, 8, ::Block const*> mInitBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::std::vector<short>> computeHeightMap() const;
    // NOLINTEND

};
