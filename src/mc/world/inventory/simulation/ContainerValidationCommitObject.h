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
    ::ll::TypedStorage<4, 4, ::ContainerValidationCommitObject::Type> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerValidationCommitObject() = default;

    virtual bool append(::ContainerValidationCommitObject*) = 0;

    virtual bool canCommit(::ContainerScreenContext const&) const = 0;

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
