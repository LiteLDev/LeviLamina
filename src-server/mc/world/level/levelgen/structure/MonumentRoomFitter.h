#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class OceanMonumentPiece;
class Random;
class RoomDefinition;
// clang-format on

class MonumentRoomFitter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MonumentRoomFitter() = default;

    // vIndex: 1
    virtual bool fits(::RoomDefinition const&) const = 0;

    // vIndex: 2
    virtual ::std::unique_ptr<::OceanMonumentPiece> create(int&, ::std::shared_ptr<::RoomDefinition>, ::Random&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
