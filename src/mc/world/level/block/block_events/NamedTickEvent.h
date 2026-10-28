#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BlockType;
// clang-format on

namespace BlockEvents {

class NamedTickEvent : public ::BlockEvents::BlockEventBase {
public:
    // NamedTickEvent inner types define
    using NamespaceMap = ::std::unordered_map<uint, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource const&> mRegion;
    ::ll::TypedStorage<8, 8, ::BlockType const&>   mCreationBlockType;
    ::ll::TypedStorage<8, 32, ::std::string>       mNamespace;
    ::ll::TypedStorage<8, 32, ::std::string>       mEventName;
    ::ll::TypedStorage<8, 8, ::Tick>               mCreationTime;
    ::ll::TypedStorage<8, 8, ::Tick>               mTriggerTime;
    // NOLINTEND

public:
    // prevent constructor by default
    NamedTickEvent& operator=(NamedTickEvent const&);
    NamedTickEvent(NamedTickEvent const&);
    NamedTickEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NamedTickEvent(
        ::BlockSource const& region,
        ::BlockPos           blockPos,
        ::BlockType const&   blockType,
        ::std::string const& nameSpace,
        ::std::string const& eventName,
        ::Tick               creationTime,
        ::Tick               triggerTime
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockSource const& region,
        ::BlockPos           blockPos,
        ::BlockType const&   blockType,
        ::std::string const& nameSpace,
        ::std::string const& eventName,
        ::Tick               creationTime,
        ::Tick               triggerTime
    );
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
