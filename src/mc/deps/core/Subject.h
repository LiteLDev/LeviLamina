#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

template <typename T0, typename T1>
class Subject {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_SUBJECT
public:
    Subject& operator=(Subject const&) = delete;
    Subject(Subject const&)            = delete;
    Subject()                          = delete;
#endif

public:
};

}; // namespace Core
