#pragma once

#include <array>
#include <vector>

#include "../FakeGSL/string_span.h"
#include "../dll.h"

class Facing {
public:
    enum class Name : unsigned char { Down,
                                      Up,
                                      North,
                                      South,
                                      West,
                                      East,
                                      Unknown };

    struct Plane {
        MCAPI static class std::vector<unsigned char> HORIZONTAL;
    };

    MCAPI static int const* const                                            STEP_X;
    MCAPI static int const* const                                            STEP_Y;
    MCAPI static int const* const                                            STEP_Z;
    MCAPI static class Vec3 const* const                                     NORMAL;
    MCAPI static unsigned char const* const                                  OPPOSITE_FACING;
    MCAPI static enum Name const* const                                      BY2DDATA;
    MCAPI static enum Name const* const                                      DIRECTIONS;
    MCAPI static class BlockPos const* const                                 DIRECTION;
    MCAPI static class std::vector<unsigned char> const                      ALL_FACES;
    MCAPI static class std::array<class std::vector<unsigned char>, 6> const ALL_EXCEPT;
    MCAPI static class std::array<class std::vector<unsigned char>, 6> const ALL_EXCEPT_AXIS_Y;

    MCAPI static int                 getStepX(unsigned char);
    MCAPI static int                 getStepY(unsigned char);
    MCAPI static int                 getStepZ(unsigned char);
    MCAPI static unsigned char       getOpposite(unsigned char);
    MCAPI static unsigned char       fromVec3(class Vec3 const&);
    MCAPI static gsl::cstring_span<> toString(unsigned char);
};