#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PotentialPositionIndex {
public:
    // PotentialPositionIndex inner types define
    enum class Names : uchar {
        Down                    = 0,
        Up                      = 1,
        North                   = 2,
        South                   = 3,
        West                    = 4,
        East                    = 5,
        NorthWest               = 6,
        WestSouth               = 7,
        SouthEast               = 8,
        EastNorth               = 9,
        UpNorth                 = 10,
        UpWest                  = 11,
        UpSouth                 = 12,
        UpEast                  = 13,
        DownNorth               = 14,
        DownWest                = 15,
        DownSouth               = 16,
        DownEast                = 17,
        MaxIndex                = 18,
        DiagonalEnd             = 18,
        FacingStart             = 0,
        HorizontalFacingStart   = 2,
        DiagonalStart           = 6,
        HorizontalDiagonalStart = 6,
        VerticalDiagonalStart   = 10,
        HorizontalDiagonalEnd   = 10,
        FacingEnd               = 6,
    };

public:
    // prevent constructor by default
    PotentialPositionIndex& operator=(PotentialPositionIndex const&);
    PotentialPositionIndex(PotentialPositionIndex const&);
    PotentialPositionIndex();
};
