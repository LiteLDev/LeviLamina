#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"

struct BlockPartVisibilityDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockPartVisibilityDescription& operator=(BlockPartVisibilityDescription const&);
    BlockPartVisibilityDescription(BlockPartVisibilityDescription const&);
    BlockPartVisibilityDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 0
    virtual ~BlockPartVisibilityDescription() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;
    // NOLINTEND
};
