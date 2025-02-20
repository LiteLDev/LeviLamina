#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class IStructurePoolBlockTagPredicate;
// clang-format on

class StructurePoolBlockTagRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5e9b61;
    ::ll::UntypedStorage<8, 32> mUnk41ce9d;
    ::ll::UntypedStorage<8, 32> mUnk8c2cad;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockTagRule& operator=(StructurePoolBlockTagRule const&);
    StructurePoolBlockTagRule(StructurePoolBlockTagRule const&);
    StructurePoolBlockTagRule();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolBlockTagRule(
        ::std::unique_ptr<::IStructurePoolBlockTagPredicate>&& sourceBlockTagPredicate,
        ::std::string                                          resultKey,
        ::std::string                                          resultValue
    );

    MCAPI bool processRule(::Block const& sourceBlock, ::CompoundTag& sourceTag) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::IStructurePoolBlockTagPredicate>&& sourceBlockTagPredicate,
        ::std::string                                          resultKey,
        ::std::string                                          resultValue
    );
    // NOLINTEND
};
