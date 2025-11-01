#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockEventDispatcherToken;
class BlockPos;
class ListenerInfo;
class Vec3;
// clang-format on

class BlockEventDispatcher : public ::Bedrock::EnableNonOwnerReferences {
public:
    // BlockEventDispatcher inner types define
    using CallbackFunction = ::std::function<void(::BlockPos const&, uint, ::Block const&, ::Actor*)>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::unique_ptr<::ListenerInfo>>> mRegisteredListeners;
    ::ll::TypedStorage<4, 4, int> mHandleCounter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventDispatcher() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockEventDispatcherToken registerListener(::Vec3 const& shapePos, float shapeRadius, ::std::function<void(::BlockPos const&, uint, ::Block const&, ::Actor*)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
