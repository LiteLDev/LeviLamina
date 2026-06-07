#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

namespace BlockEvents {

class ActorEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>             mEntity;
    ::ll::TypedStorage<8, 32, ::std::string const> mName;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEvent& operator=(ActorEvent const&);
    ActorEvent(ActorEvent const&);
    ActorEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorEvent(::BlockPos pos, ::Actor& entity, ::std::string const& name);

    MCFOLD ::Actor& getEntity() const;

    MCFOLD ::std::string const& getName() const;

    MCFOLD bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BlockPos pos, ::Actor& entity, ::std::string const& name);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockSource const& $getBlockSource() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
