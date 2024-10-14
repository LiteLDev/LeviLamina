#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class CraftingContext {
public:
    // CraftingContext inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // CraftingContext inner types define
    class Impl {
    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // NOLINTBEGIN
        MCAPI explicit Impl(Bedrock::NotNullNonOwnerPtr<class ILevel> level);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CraftingContext& operator=(CraftingContext const&);
    CraftingContext(CraftingContext const&);
    CraftingContext();

public:
    // NOLINTBEGIN
    MCAPI explicit CraftingContext(Bedrock::NotNullNonOwnerPtr<class ILevel> level);

    MCAPI ~CraftingContext();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
