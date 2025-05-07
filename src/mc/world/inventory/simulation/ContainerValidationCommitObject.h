#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class ContainerValidationCommitObject {
public:
    // ContainerValidationCommitObject inner types define
    enum class Type : int {
        DropItem         = 0,
        ExperienceCost   = 1,
        ExperienceReward = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6fbc7d;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationCommitObject& operator=(ContainerValidationCommitObject const&);
    ContainerValidationCommitObject(ContainerValidationCommitObject const&);
    ContainerValidationCommitObject();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerValidationCommitObject() = default;

    // vIndex: 1
    virtual bool append(::ContainerValidationCommitObject*) = 0;

    // vIndex: 2
    virtual bool canCommit(::ContainerScreenContext const&) const = 0;

    // vIndex: 3
    virtual void commit(::ContainerScreenContext const&) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void append(
        ::std::shared_ptr<::ContainerValidationCommitObject>                 commitObject,
        ::std::vector<::std::shared_ptr<::ContainerValidationCommitObject>>& objectList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
