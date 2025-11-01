#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/game_refs/GameRefs.h"

template<typename T>
class StackRefResult : public GameRefs<T>::StackResultStorage {
public:
    using Base = GameRefs<T>::StackResultStorage;
    using Base::Base;

    constexpr StackRefResult(Base const& ptr) : Base(ptr) {}
    constexpr StackRefResult(Base&& ptr) : Base(std::move(ptr)) {}
};
