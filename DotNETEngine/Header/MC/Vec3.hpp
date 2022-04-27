#pragma once
#include "Types.hpp"
#include "BlockPos.hpp"

namespace MC
{
ref class BlockPos;
ref class Vec2;
} // namespace MC

namespace MC
{
public
ref class Vec3 : ClassTemplate<Vec3, ::Vec3>
{
public:
    __ctor_all(Vec3, ::Vec3);

    property float X
    {
        inline float get();
        inline void set(float mx);
    }
    property float Y
    {
        inline float get();
        inline void set(float my);
    }
    property float Z
    {
        inline float get();
        inline void set(float mz);
    }
    inline static Vec3 ^ Create();
    inline static Vec3 ^ Create(float _x, float _y, float _z);
    inline static Vec3 ^ Create(BlockPos ^ pos);
    inline static Vec3 ^ Create(double _x, double _y, double _z);
    inline static Vec3 ^ Create(int _x, int _y, int _z);

    inline String ^ ToString() override;
    inline BlockPos ^ ToBlockPos();
    inline float Length();
    inline float DistanceTo(Vec3 ^ vec3);
    inline Vec3 ^ Add(float dx, float dy, float dz);
    inline Vec3 ^ Normalize();
    static Vec3 ^ operator*(Vec3 ^ a, float num);
    static Vec3 ^ operator+(Vec3 ^ a, Vec3 ^ b);
    static Vec3 ^ operator-(Vec3 ^ a, Vec3 ^ b);
    static bool operator==(Vec3 ^ a, Vec3 ^ b);

#ifdef INCLUDE_MCAPI

    Vec3(MC::Vec3 ^ _0);


    property MC::Vec3 ^ Abs {
        MC::Vec3 ^ get();
    };

    property bool IsNan
    {
        bool get();
    }

    property float MaxComponent
    {
        float get();
    }

    property MC::Vec3 ^ Normalized {
        MC::Vec3 ^ get();
    };

    property MC::Vec3 ^ Xz {
        MC::Vec3 ^ get();
    };

    MC::Vec3 ^ Ceil();

    float DistanceToLineSquared(MC::Vec3 ^ _0, MC::Vec3 ^ _1);

    float DistanceToSqr(MC::Vec3 ^ _0);

    MC::Vec3 ^ Floor(float _0);

    static MC::Vec3 ^ Clamp(MC::Vec3 ^ _0, MC::Vec3 ^ _1, MC::Vec3 ^ _2);

    static MC::Vec3 ^ DirectionFromRotation(MC::Vec2 ^ _0);

    static MC::Vec2 ^ RotationFromDirection(MC::Vec3 ^ _0);

    static property MC::Vec3 ^ HALF {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ MAX {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ MIN {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ NEG_UNIT_X {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ NEG_UNIT_Y {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ NEG_UNIT_Z {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ ONE {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ TWO {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ UNIT_X {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ UNIT_Y {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ UNIT_Z {
        MC::Vec3 ^ get();
    };

    static property MC::Vec3 ^ ZERO {
        MC::Vec3 ^ get();
    };

#endif // INCLUDE_MCAPI
};
} // namespace MC
