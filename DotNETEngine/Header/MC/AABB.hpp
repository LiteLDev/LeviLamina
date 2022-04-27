#pragma once
#include <MC/AABB.hpp>
#include "Types.hpp"

namespace MC
{
ref class Vec3;
}

namespace MC
{
public
ref class AABB : ClassTemplate<AABB, ::AABB>
{
public:
    __ctor_all(AABB, ::AABB);

    static AABB ^ Create(Vec3 ^ vec1, Vec3 ^ vec2);
    static AABB ^ Create(Vec3 ^ vec1, float f1);
    static AABB ^ Create(float f1, float f2, float f3, float f4, float f5, float f6);

    Vec3 ^ AxisInside(AABB ^ aabb, Vec3 ^ vec);

    property Vec3 ^ PointA {Vec3^ get(); void set(Vec3^ arg); };
    property Vec3 ^ PointB {Vec3^ get(); void set(Vec3^ arg); };

#ifdef INCLUDE_MCAPI

    AABB(MC::AABB ^ _0);

    property MC::Vec3 ^ Bounds {
        MC::Vec3 ^ get();
    };

    property MC::Vec3 ^
        Center {
            MC::Vec3 ^ get();
        }

        property float Size
    {
        float get();
    }

    property float Volume
    {
        float get();
    }

    property bool HasZeroVolume
    {
        bool get();
    }

    property bool IsValid
    {
        bool get();
    }

    MC::Vec3 ^ ClipCollide(MC::AABB ^ _0, MC::Vec3 ^ _1, bool _2, [::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out ] float % _3);

    MC::AABB ^ CloneAndExpandAlongDirection(MC::Vec3 ^ _0);

    MC::AABB ^ CloneAndFloor(float _0, float _1);

    MC::AABB ^ CloneAndFloorMinAndCeilingMax();

    MC::AABB ^ CloneAndGrow(MC::Vec3 ^ _0);

    MC::AABB ^ CloneAndShrink(MC::Vec3 ^ _0);

    bool Contains(MC::Vec3 ^ _0);

    float DistanceTo(MC::AABB ^ _0);

    float DistanceTo(MC::Vec3 ^ _0);

    bool IntersectSegment(MC::Vec3 ^ _0, MC::Vec3 ^ _1, MC::Vec3 ^ _2, MC::Vec3 ^ _3);

    bool Intersects(MC::AABB ^ _0);

    bool Intersects(MC::Vec3 ^ _0, MC::Vec3 ^ _1);

    bool IntersectsInner(MC::AABB ^ _0);

    static bool operator==(MC::AABB ^ __op, MC::AABB ^ _0);

    virtual bool Equals(::System::Object ^ obj) override;

    MC::AABB ^ Set(float _0, float _1, float _2, float _3, float _4, float _5);

    MC::AABB ^ Set(MC::AABB ^ _0);

    MC::AABB ^ Set(MC::Vec3 ^ _0, MC::Vec3 ^ _1);

    MC::AABB ^ Shrink(MC::Vec3 ^ _0);

    MC::AABB ^ TranslateCenterTo(MC::Vec3 ^ _0);

    static property MC::AABB ^ BLOCK_SHAPE {
        MC::AABB ^ get();
    };

    static property MC::AABB ^
        BOX_AT_ORIGIN_WITH_NO_VOLUME {
            MC::AABB ^ get();
        }
#endif // INCLUDE_MCAPI
};
} // namespace MC