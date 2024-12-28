#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct PackIdVersion;
namespace mce { class UUID; }
// clang-format on

class ResourceInformation {
public:
    // ResourceInformation inner types define
    enum class ResourceType : int {
        Invalid           = 0,
        Resources         = 1,
        DataAddOn         = 2,
        ScriptAddOn       = 3,
        ClientScriptAddOn = 4,
        Mandatory         = 5,
        WorldTemplate     = 6,
        Count             = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk3f1ece;
    ::ll::UntypedStorage<8, 112> mUnk6dfdf0;
    ::ll::UntypedStorage<8, 16>  mUnka8abd4;
    ::ll::UntypedStorage<4, 4>   mUnk4b07d4;
    ::ll::UntypedStorage<8, 32>  mUnk5a12d9;
    ::ll::UntypedStorage<8, 32>  mUnkd60fb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceInformation& operator=(ResourceInformation const&);
    ResourceInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourceInformation(::ResourceInformation const&);

    MCAPI ResourceInformation(
        ::std::string const& description,
        ::SemVersion const&  version,
        ::mce::UUID const&   uuid,
        ::std::string const& type,
        ::std::string const& language,
        ::std::string const& entry
    );

    MCAPI ResourceInformation(
        ::std::string const&                description,
        ::SemVersion const&                 version,
        ::mce::UUID const&                  uuid,
        ::ResourceInformation::ResourceType type,
        ::std::string const&                language,
        ::std::string const&                entry
    );

    MCAPI bool satisfies(::PackIdVersion const& pack) const;

    MCAPI ~ResourceInformation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ResourceInformation::ResourceType ResourceTypeFromString(::std::string const& value);

    MCAPI static ::std::string const& StringFromResourceType(::ResourceInformation::ResourceType value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourceInformation const&);

    MCAPI void* $ctor(
        ::std::string const& description,
        ::SemVersion const&  version,
        ::mce::UUID const&   uuid,
        ::std::string const& type,
        ::std::string const& language,
        ::std::string const& entry
    );

    MCAPI void* $ctor(
        ::std::string const&                description,
        ::SemVersion const&                 version,
        ::mce::UUID const&                  uuid,
        ::ResourceInformation::ResourceType type,
        ::std::string const&                language,
        ::std::string const&                entry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
