#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename... T2>
class ViewT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIEWT
public:
    ViewT& operator=(ViewT const&) = delete;
    ViewT(ViewT const&)            = delete;
    ViewT()                        = delete;
#endif

public:
};
