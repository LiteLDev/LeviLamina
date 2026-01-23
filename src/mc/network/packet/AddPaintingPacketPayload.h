#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"

struct AddPaintingPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>  mEntityId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<4, 12, ::Vec3>          mPos;
    ::ll::TypedStorage<4, 4, int>              mDir;
    ::ll::TypedStorage<8, 32, ::std::string>   mMotif;
    // NOLINTEND

public:
    // prevent constructor by default
    AddPaintingPacketPayload(AddPaintingPacketPayload const&);
    AddPaintingPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AddPaintingPacketPayload& operator=(::AddPaintingPacketPayload&&);

    MCAPI ::AddPaintingPacketPayload& operator=(::AddPaintingPacketPayload const&);

    MCAPI ~AddPaintingPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
