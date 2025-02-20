#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

class EcsEventDispatcher : public ::std::enable_shared_from_this<::EcsEventDispatcher>,
                           public ::EnableGetWeakRef<::EcsEventDispatcher> {
public:
    // EcsEventDispatcher inner types define
    using BaseWeak = ::EnableGetWeakRef<::EcsEventDispatcher>;

    using BaseShared = ::std::enable_shared_from_this<::EcsEventDispatcher>;

    using Token = ::gsl::final_action<::std::function<void()>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::entt::dispatcher> mDispatcher;
    // NOLINTEND
};
