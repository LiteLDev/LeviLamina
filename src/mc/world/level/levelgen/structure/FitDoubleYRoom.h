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

class FitDoubleYRoom : public ::MonumentRoomFitter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool fits(::RoomDefinition const& definition) const /*override*/;

    virtual ::std::unique_ptr<::OceanMonumentPiece>
    create(int& orientation, ::std::shared_ptr<::RoomDefinition> definition, ::Random& random) /*override*/;

    virtual ~FitDoubleYRoom() /*override*/ = default;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
