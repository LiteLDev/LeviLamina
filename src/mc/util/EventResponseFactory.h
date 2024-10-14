#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EventResponseFactory {
public:
    // prevent constructor by default
    EventResponseFactory& operator=(EventResponseFactory const&);
    EventResponseFactory(EventResponseFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EventResponseFactory();

    // vIndex: 1
    virtual void initializeFactory(class Experiments const& experiments) = 0;

    // vIndex: 2
    virtual void initSchema() = 0;

    MCAPI EventResponseFactory();

    MCAPI void initSchema(std::string const& schemaName, class SemVersion const& version);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
