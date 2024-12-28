#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/OperationType.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    BlockMaskList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockMaskList(::Editor::BlockMask::BlockMaskList const&);

    MCAPI void addBlock(::Block const* block);

    MCAPI void fromStringList(::std::vector<::std::string> const& blockNames);

    MCAPI ::Editor::BlockMask::BlockMaskList& operator=(::Editor::BlockMask::BlockMaskList&&);

    MCAPI void setOperationType(::Editor::BlockMask::OperationType operationType);

    MCAPI ::std::vector<::std::string> toStringList() const;

    MCAPI ~BlockMaskList();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::BlockMask::BlockMaskList const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::BlockMask
