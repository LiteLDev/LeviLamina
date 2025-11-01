#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class Measurement; }
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class Event {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk34803d;
    ::ll::UntypedStorage<8, 32> mUnk8db555;
    ::ll::UntypedStorage<1, 1> mUnk69fed0;
    ::ll::UntypedStorage<4, 4> mUnk4d8050;
    ::ll::UntypedStorage<8, 8> mUnked1ee5;
    ::ll::UntypedStorage<8, 8> mUnk406331;
    ::ll::UntypedStorage<4, 4> mUnk510604;
    ::ll::UntypedStorage<8, 64> mUnk5e4cad;
    ::ll::UntypedStorage<8, 64> mUnk95b6af;
    ::ll::UntypedStorage<8, 64> mUnkfae032;
    ::ll::UntypedStorage<1, 1> mUnkab0bd8;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Event(::Social::Events::Event const&);

    MCNAPI Event(uint id, ::std::string const& eventName, ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties, int eventTags);

    MCNAPI Event(uint id, ::std::string const& eventName, ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties, ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform, int eventTags);

    MCNAPI void addMeasurement(::Social::Events::Measurement const& measurement);

    MCNAPI void addProperty(::Social::Events::Property const& property);

    MCNAPI bool operator==(::Social::Events::Event const& other) const;

    MCNAPI void updateMeasurements(::Social::Events::Event const& event);

    MCNAPI ~Event();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::Events::Event const&);

    MCNAPI void* $ctor(uint id, ::std::string const& eventName, ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties, int eventTags);

    MCNAPI void* $ctor(uint id, ::std::string const& eventName, ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties, ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform, int eventTags);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
