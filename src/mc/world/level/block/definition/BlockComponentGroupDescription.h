#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockComponentGroupDescription {
public:
    // BlockComponentGroupDescription inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // BlockComponentGroupDescription inner types define
    struct Components {
    public:
        // NOLINTBEGIN
        MCAPI Components();

        MCAPI Components(struct BlockComponentGroupDescription::Components const&);

        MCAPI struct BlockComponentGroupDescription::Components&
        operator=(struct BlockComponentGroupDescription::Components&&);

        MCAPI struct BlockComponentGroupDescription::Components&
        operator=(struct BlockComponentGroupDescription::Components const&);

        MCAPI ~Components();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        MCAPI void* ctor$(struct BlockComponentGroupDescription::Components const&);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // NOLINTBEGIN
    MCAPI BlockComponentGroupDescription();

    MCAPI BlockComponentGroupDescription(struct BlockComponentGroupDescription&&);

    MCAPI BlockComponentGroupDescription(struct BlockComponentGroupDescription const&);

    MCAPI void addComponentDescription(std::shared_ptr<struct BlockComponentDescription>);

    MCAPI void foreachDescription(std::function<void(struct BlockComponentDescription const&)>) const;

    MCAPI struct BlockComponentDescription* getComponentDescription(std::string const& name) const;

    MCAPI struct BlockComponentGroupDescription& operator=(struct BlockComponentGroupDescription&&);

    MCAPI struct BlockComponentGroupDescription& operator=(struct BlockComponentGroupDescription const&);

    MCAPI ~BlockComponentGroupDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(struct BlockComponentGroupDescription const&);

    MCAPI void* ctor$(struct BlockComponentGroupDescription&&);

    MCAPI void dtor$();

    // NOLINTEND
};
