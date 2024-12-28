#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class EventResponse;
class IPackLoadContext;
class SemVersion;
// clang-format on

class EventResponseFactory : public ::Factory<::EventResponse> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk687030;
    // NOLINTEND

public:
    // prevent constructor by default
    EventResponseFactory& operator=(EventResponseFactory const&);
    EventResponseFactory(EventResponseFactory const&);
    EventResponseFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EventResponseFactory();

    // vIndex: 1
    virtual void initializeFactory(::IPackLoadContext const& packLoadContext) = 0;

    // vIndex: 2
    virtual void initSchema() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initSchema(::std::string const& schemaName, ::SemVersion const& version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
