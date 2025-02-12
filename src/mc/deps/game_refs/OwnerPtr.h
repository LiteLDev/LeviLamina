#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/game_refs/GameRefs.h"

template <typename T>
class OwnerPtr : public GameRefs<T>::OwnerStorage {
public:
    using Base = GameRefs<T>::OwnerStorage;
    using Base::Base;

    constexpr OwnerPtr(Base const& ptr) : Base(ptr) {}
    constexpr OwnerPtr(Base&& ptr) : Base(std::move(ptr)) {}
};
