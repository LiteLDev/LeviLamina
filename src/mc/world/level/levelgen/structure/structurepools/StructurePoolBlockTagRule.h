#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class IStructurePoolBlockTagPredicate;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockTagRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockTagPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 32, ::std::string const>                                       mResultKey;
    ::ll::TypedStorage<8, 32, ::std::string const>                                       mResultValue;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockTagRule();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolBlockTagRule(
        ::std::unique_ptr<::IStructurePoolBlockTagPredicate>&& sourceBlockTagPredicate,
        ::std::string                                          resultKey,
        ::std::string                                          resultValue
    );

#ifdef LL_PLAT_C
    MCNAPI void appendMetadataKey(::Util::XXHash& hash) const;

    MCNAPI bool processRule(::Block const& sourceBlock, ::CompoundTag& sourceTag) const;
#endif

    MCNAPI ~StructurePoolBlockTagRule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IStructurePoolBlockTagPredicate>&& sourceBlockTagPredicate,
        ::std::string                                          resultKey,
        ::std::string                                          resultValue
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
