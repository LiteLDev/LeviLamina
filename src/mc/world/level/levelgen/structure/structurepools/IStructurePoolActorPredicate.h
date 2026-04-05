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
    virtual ~IStructurePoolActorPredicate() = default;

    virtual bool test(::std::string const& actor) const = 0;

    virtual void appendMetadataKey(::Util::XXHash& hash) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
