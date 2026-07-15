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

class FitDoubleZRoom : public ::MonumentRoomFitter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool fits(::RoomDefinition const&) const /*override*/;

    virtual ::std::unique_ptr<::OceanMonumentPiece>
    create(int&, ::std::shared_ptr<::RoomDefinition>, ::Random&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
