#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
namespace Social::Events { class Property; }
// clang-format on

class IEventRecorder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEventRecorder() = default;

    virtual uint getPrimaryLocalUser() const = 0;

    virtual ::std::unordered_map<::std::string, ::Social::Events::Property> buildCommonProperties(uint) const = 0;

    virtual void recordEvent(::Social::Events::Event&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
