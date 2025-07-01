#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/gamerefs_entity/GameRefsEntity.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class WeakEntityRef : public ::WeakRef<::EntityContext> {
public:
    using Base = ::WeakRef<::EntityContext>;
    using Base::Base;
    WeakEntityRef()                                = default;
    WeakEntityRef(::WeakEntityRef&&)               = default;
    WeakEntityRef(::WeakEntityRef const&)          = default;
    WeakEntityRef& operator=(const WeakEntityRef&) = default;
    WeakEntityRef& operator=(WeakEntityRef&&)      = default;
};
