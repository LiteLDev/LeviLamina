#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
namespace Util { class XXHash; }
// clang-format on

class IStructurePoolBlockTagPredicate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructurePoolBlockTagPredicate() = default;

    virtual bool test(::Block const&, ::CompoundTag const&) const = 0;

    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
