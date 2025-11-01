#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class HashedString;
// clang-format on

namespace BlockTraitConversionUtils {

struct ConvertedSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>> const> mNames;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<int>(::BlockType const&, int)>> mGetter;
    ::ll::TypedStorage<8, 64, ::std::function<::Block const*(::BlockType const&, int, int)>> mSetter;
    // NOLINTEND

};

}
