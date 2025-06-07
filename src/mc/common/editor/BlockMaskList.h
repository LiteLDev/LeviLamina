#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::BlockMask {

class BlockMaskList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1c25b4;
    ::ll::UntypedStorage<4, 4>  mUnkfef619;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaskList& operator=(BlockMaskList const&);
    BlockMaskList(BlockMaskList const&);
    BlockMaskList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromStringList(::std::vector<::std::string> const& blockNames);

    MCNAPI ::std::vector<::std::string> toStringList() const;

    MCNAPI ~BlockMaskList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::BlockMask
