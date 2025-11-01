#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LegacyStructureSettings;
class Random;
// clang-format on

class ILegacyStructureTemplate {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unordered_map<::BlockPos, ::std::string> getMarkers(::BlockPos const&, ::LegacyStructureSettings&) const = 0;

    // vIndex: 1
    virtual void placeInWorld(::BlockSource&, ::BlockPos const&, ::LegacyStructureSettings&, ::Random&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
