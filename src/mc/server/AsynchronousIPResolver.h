#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsynchronousIPResolver {
public:
    // prevent constructor by default
    AsynchronousIPResolver& operator=(AsynchronousIPResolver const&);
    AsynchronousIPResolver(AsynchronousIPResolver const&);
    AsynchronousIPResolver();

public:
    // NOLINTBEGIN
    MCAPI explicit AsynchronousIPResolver(std::string url);

    MCAPI std::string getIp() const;

    MCAPI std::string const& getOriginalUrl() const;

    MCAPI bool isDone() const;

    MCAPI ~AsynchronousIPResolver();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _resolve();

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
