#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
// clang-format on

class BlockTickConfigurationComponentDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint> mDelayIntervalMaxTicks;
    ::ll::TypedStorage<1, 1, bool> mLooping;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 0
    virtual ~BlockTickConfigurationComponentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
