#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util { class XXHash; }
// clang-format on

class IStructurePoolActorPredicate {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IStructurePoolActorPredicate() = default;

    // vIndex: 1
    virtual bool test(::std::string const&) const = 0;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
