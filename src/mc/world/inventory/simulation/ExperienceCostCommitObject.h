#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class ExperienceCostCommitObject : public ::ContainerValidationCommitObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk21fe08;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceCostCommitObject& operator=(ExperienceCostCommitObject const&);
    ExperienceCostCommitObject(ExperienceCostCommitObject const&);
    ExperienceCostCommitObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExperienceCostCommitObject() /*override*/ = default;

    virtual bool append(::ContainerValidationCommitObject*) /*override*/;

    virtual bool canCommit(::ContainerScreenContext const&) const /*override*/;

    virtual void commit(::ContainerScreenContext const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
