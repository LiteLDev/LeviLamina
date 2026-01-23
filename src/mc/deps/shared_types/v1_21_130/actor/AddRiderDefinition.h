#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130 {

struct AddRiderDefinition {
public:
    // AddRiderDefinition inner types declare
    // clang-format off
    struct RiderData;
    // clang-format on

    // AddRiderDefinition inner types define
    struct RiderData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mEntityType;
        ::ll::TypedStorage<8, 32, ::std::string> mSpawnEvent;
        // NOLINTEND

    public:
        // prevent constructor by default
        RiderData(RiderData const&);
        RiderData();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SharedTypes::v1_21_130::AddRiderDefinition::RiderData&
        operator=(::SharedTypes::v1_21_130::AddRiderDefinition::RiderData&&);

        MCFOLD ::SharedTypes::v1_21_130::AddRiderDefinition::RiderData&
        operator=(::SharedTypes::v1_21_130::AddRiderDefinition::RiderData const&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_130::AddRiderDefinition::RiderData>> mRiders;
    ::ll::TypedStorage<8, 32, ::std::string>                                                          mEntityType;
    ::ll::TypedStorage<8, 32, ::std::string>                                                          mSpawnEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    AddRiderDefinition& operator=(AddRiderDefinition const&);
    AddRiderDefinition(AddRiderDefinition const&);
    AddRiderDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_130::AddRiderDefinition& operator=(::SharedTypes::v1_21_130::AddRiderDefinition&&);

    MCAPI ~AddRiderDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
