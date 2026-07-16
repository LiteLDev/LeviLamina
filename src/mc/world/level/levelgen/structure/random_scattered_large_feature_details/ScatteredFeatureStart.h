#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

namespace RandomScatteredLargeFeatureDetails {

class ScatteredFeatureStart : public ::StructureStart {
public:
    // ScatteredFeatureStart inner types define
    enum class Type : int {
        JunglePyramid = 0,
        SwamplandHut  = 1,
        DesertPyramid = 2,
        Igloo         = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RandomScatteredLargeFeatureDetails::ScatteredFeatureStart::Type> type;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMaxYSpawnOffset() const /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RandomScatteredLargeFeatureDetails
