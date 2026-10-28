#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class IStructurePoolBlockPredicate;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mTargetPredicate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mPositionPredicate;
    ::ll::TypedStorage<8, 8, ::Block const*>                                          mResultBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void appendMetadataKey(::Util::XXHash& hash) const;
#endif
    // NOLINTEND
};
