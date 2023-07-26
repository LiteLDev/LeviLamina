#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateEntityAfterFallOnEntityProxyBase {

public:
    // prevent constructor by default
    UpdateEntityAfterFallOnEntityProxyBase& operator=(UpdateEntityAfterFallOnEntityProxyBase const&) = delete;
    UpdateEntityAfterFallOnEntityProxyBase(UpdateEntityAfterFallOnEntityProxyBase const&)            = delete;
    UpdateEntityAfterFallOnEntityProxyBase()                                                         = delete;

public:
    /**
     * @symbol ?mDummy\@UpdateEntityAfterFallOnEntityProxyBase\@\@2VVec3\@\@A
     */
    MCAPI static class Vec3 mDummy; // NOLINT
};
