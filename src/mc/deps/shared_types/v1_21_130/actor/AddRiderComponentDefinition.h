#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130 {

struct AddRiderComponentDefinition {
public:
    // AddRiderComponentDefinition inner types declare
    // clang-format off
    struct RiderData;
    // clang-format on

    // AddRiderComponentDefinition inner types define
    struct RiderData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mEntityType;
        ::ll::TypedStorage<8, 32, ::std::string> mSpawnEvent;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_130::AddRiderComponentDefinition::RiderData>> mRiders;
    ::ll::TypedStorage<8, 32, ::std::string> mEntityType;
    ::ll::TypedStorage<8, 32, ::std::string> mSpawnEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    AddRiderComponentDefinition& operator=(AddRiderComponentDefinition const&);
    AddRiderComponentDefinition(AddRiderComponentDefinition const&);
    AddRiderComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_130::AddRiderComponentDefinition&
    operator=(::SharedTypes::v1_21_130::AddRiderComponentDefinition&&);

    MCAPI ~AddRiderComponentDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130
