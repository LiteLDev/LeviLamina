#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/MonumentRoomFitter.h"

// auto generated forward declare list
// clang-format off
class OceanMonumentPiece;
class Random;
class RoomDefinition;
// clang-format on

class FitSimpleTopRoom : public ::MonumentRoomFitter {
public:
    // prevent constructor by default
    FitSimpleTopRoom& operator=(FitSimpleTopRoom const&);
    FitSimpleTopRoom(FitSimpleTopRoom const&);
    FitSimpleTopRoom();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool fits(::RoomDefinition const& definition) const /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::OceanMonumentPiece>
    create(int& orientation, ::std::shared_ptr<::RoomDefinition> definition, ::Random& random) /*override*/;

    // vIndex: 0
    virtual ~FitSimpleTopRoom() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $fits(::RoomDefinition const& definition) const;

    MCAPI ::std::unique_ptr<::OceanMonumentPiece>
    $create(int& orientation, ::std::shared_ptr<::RoomDefinition> definition, ::Random& random);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
