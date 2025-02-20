#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class JsonValidator {
public:
    // JsonValidator inner types declare
    // clang-format off
    class Property;
    // clang-format on

    // JsonValidator inner types define
    class Property {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk120916;
        ::ll::UntypedStorage<1, 1>  mUnk7ec7d1;
        ::ll::UntypedStorage<1, 1>  mUnk88cb04;
        ::ll::UntypedStorage<8, 32> mUnkbf71d5;
        ::ll::UntypedStorage<8, 16> mUnk255cfa;
        ::ll::UntypedStorage<8, 24> mUnkf4a8ae;
        ::ll::UntypedStorage<8, 24> mUnk5bd6f2;
        ::ll::UntypedStorage<8, 64> mUnk5364ba;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Property();

        MCAPI Property(::JsonValidator::Property const&);

        MCAPI Property(::JsonValidator::Property&&);

        MCAPI ::JsonValidator::Property& addChildProperty(::JsonValidator::Property const& prop);

        MCAPI ::JsonValidator::Property&
        addConditionalProperty(::Json::Value const& value, ::JsonValidator::Property const& prop);

        MCAPI ::JsonValidator::Property& operator=(::JsonValidator::Property const&);

        MCAPI ::JsonValidator::Property& operator=(::JsonValidator::Property&&);

        MCAPI ::JsonValidator::Property& operator[](::std::string const& propName);

        MCAPI ~Property();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();

        MCAPI void* $ctor(::JsonValidator::Property const&);

        MCAPI void* $ctor(::JsonValidator::Property&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool validate(
        ::JsonValidator::Property const& rootProp,
        ::Json::Value const&             rootData,
        ::std::vector<::std::string>*    errors
    );
    // NOLINTEND
};
