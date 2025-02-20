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
    MCAPI void fromStringList(::std::vector<::std::string> const& blockNames);

    MCAPI ::Editor::BlockMask::BlockMaskList& operator=(::Editor::BlockMask::BlockMaskList&&);

    MCAPI ::std::vector<::std::string> toStringList() const;

    MCAPI ~BlockMaskList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::BlockMask
