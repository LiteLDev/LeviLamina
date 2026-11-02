#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class AnvilDamageCommitObject : public ::ContainerValidationCommitObject {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnvilDamageCommitObject() /*override*/ = default;

    virtual bool append(::ContainerValidationCommitObject* other) /*override*/;

    virtual bool canCommit(::ContainerScreenContext const&) const /*override*/;

    virtual void commit(::ContainerScreenContext const& screenContext) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $append(::ContainerValidationCommitObject* other);

    MCNAPI bool $canCommit(::ContainerScreenContext const&) const;

    MCNAPI void $commit(::ContainerScreenContext const& screenContext);


    // NOLINTEND
};
