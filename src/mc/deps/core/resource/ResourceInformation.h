#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

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
    ::ll::TypedStorage<8, 32, ::std::string>                      mDescription;
    ::ll::TypedStorage<8, 24, ::SemVersion>                       mVersion;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                        mUUID;
    ::ll::TypedStorage<4, 4, ::ResourceInformation::ResourceType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                      mLanguage;
    ::ll::TypedStorage<8, 32, ::std::string>                      mEntry;
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
        ::std::string const&                description,
        ::SemVersion const&                 version,
        ::mce::UUID const&                  uuid,
        ::ResourceInformation::ResourceType type,
        ::std::string const&                language,
        ::std::string const&                entry
    );

    MCAPI ~ResourceInformation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ResourceInformation::ResourceType ResourceTypeFromString(::std::string const& value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourceInformation const&);

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
