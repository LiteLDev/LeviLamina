#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Property {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_EVENTS_PROPERTY
public:
    Property& operator=(Property const&) = delete;
    Property(Property const&)            = delete;
    Property()                           = delete;
#endif

public:
    /**
     * @symbol ??1Property\@Events\@Social\@\@QEAA\@XZ
     */
    MCAPI ~Property();
};

}; // namespace Social::Events
