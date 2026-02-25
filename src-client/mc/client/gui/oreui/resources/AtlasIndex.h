#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct AtlasIndex {
public:
    // AtlasIndex inner types declare
    // clang-format off
    struct ItemEntry;
    // clang-format on

    // AtlasIndex inner types define
    struct ItemEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> mU;
        ::ll::TypedStorage<2, 2, ushort> mV;
        ::ll::TypedStorage<8, 8, uint64> mImageId;
        // NOLINTEND
    };

    using AtlasIndexContainer = ::std::map<::std::string, ::OreUI::AtlasIndex::ItemEntry>;

    using AtlasIndexIterator = ::std::_Tree_iterator<
        ::std::_Tree_val<::std::_Tree_simple_types<::std::pair<::std::string const, ::OreUI::AtlasIndex::ItemEntry>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                       mTextureWidth;
    ::ll::TypedStorage<4, 4, uint>                                                       mTextureHeight;
    ::ll::TypedStorage<4, 4, uint>                                                       mThumbnailWidth;
    ::ll::TypedStorage<4, 4, uint>                                                       mThumbnailHeight;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::OreUI::AtlasIndex::ItemEntry>> mItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::OreUI::AtlasIndex::ItemEntry const> findItem(::std::string_view item) const;
    // NOLINTEND
};

} // namespace OreUI
