#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
struct BlockRedstoneConsumerConstructionOptions;
// clang-format on

class BlockRedstoneConsumerDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar> mMinPower;
    ::ll::TypedStorage<1, 1, bool>  mPropagatePower;
    ::ll::TypedStorage<1, 1, bool>  mConsumePowerAnyDirection;
    ::ll::TypedStorage<1, 1, bool>  mAcceptSameDirection;
    ::ll::TypedStorage<1, 1, bool>  mAcceptHalfPulse;
    ::ll::TypedStorage<1, 1, bool>  mIgnoreFirstUpdate;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRedstoneConsumerDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual ~BlockRedstoneConsumerDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockRedstoneConsumerDescription(::BlockRedstoneConsumerConstructionOptions constructionOptions);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockRedstoneConsumerConstructionOptions constructionOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
