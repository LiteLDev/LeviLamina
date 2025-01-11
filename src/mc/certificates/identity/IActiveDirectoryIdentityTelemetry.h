#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/events/identity/EduSignInStage.h"

class IActiveDirectoryIdentityTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IActiveDirectoryIdentityTelemetry() = default;

    // vIndex: 1
    virtual void
    fireEventSignInEdu(::std::string const&, ::edu::Role, ::Identity::EduSignInStage, ::std::string const&, ::std::string const&, ::std::vector<::std::pair<::std::string, ::std::string>> const&) = 0;

    // vIndex: 2
    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) = 0;

    // vIndex: 3
    virtual ::std::string getAppSessionId() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
