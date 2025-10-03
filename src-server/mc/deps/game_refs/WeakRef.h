#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/game_refs/GameRefs.h"
#include "mc/deps/game_refs/StackRefResult.h"

template <class T>
class WeakRef : public GameRefs<T>::WeakStorage {
public:
    using Base = GameRefs<T>::WeakStorage;
    using Base::Base;

    constexpr WeakRef(GameRefs<T>::StackResultStorage const& ptr) : Base(ptr) {}
    constexpr WeakRef(Base const& ptr) : Base(ptr) {}
    constexpr WeakRef(Base&& ptr) : Base(std::move(ptr)) {}

    constexpr StackRefResult<T> lock() const {
        if constexpr (requires(Base t) { t.lock(); }) {
            return StackRefResult<T>{this->Base::lock()};
        } else {
            return StackRefResult<T>{*this};
        }
    }
};
