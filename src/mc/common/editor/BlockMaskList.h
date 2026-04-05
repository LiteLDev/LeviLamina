#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::BlockMask {

class BlockMaskList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk199e63;
    ::ll::UntypedStorage<4, 4>  mUnkfef619;
    ::ll::UntypedStorage<1, 1>  mUnkf76b97;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaskList& operator=(BlockMaskList const&);
    BlockMaskList(BlockMaskList const&);
    BlockMaskList();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool containsBlock(::HashedString const& blockName) const;
#endif

    MCNAPI void fromStringList(::std::vector<::std::string> const& blockNames);

#ifdef LL_PLAT_C
    MCNAPI bool match(::Block const* block) const;
#endif

    MCNAPI ::std::vector<::std::string> toStringList() const;

    MCNAPI ~BlockMaskList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::BlockMask
