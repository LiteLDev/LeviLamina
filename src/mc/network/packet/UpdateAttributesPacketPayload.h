#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"

// auto generated forward declare list
// clang-format off
class AttributeInstanceHandle;
class BaseAttributeMap;
struct AttributeData;
// clang-format on

struct UpdateAttributesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mRuntimeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeData>> mAttributeData;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>               mTick;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateAttributesPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateAttributesPacketPayload(
        ::ActorRuntimeID const&                         id,
        ::BaseAttributeMap const&                       map,
        ::std::vector<::AttributeInstanceHandle> const& dirtyData,
        ::PlayerInputTick                               tick
    );

    MCNAPI ~UpdateAttributesPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorRuntimeID const&                         id,
        ::BaseAttributeMap const&                       map,
        ::std::vector<::AttributeInstanceHandle> const& dirtyData,
        ::PlayerInputTick                               tick
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
