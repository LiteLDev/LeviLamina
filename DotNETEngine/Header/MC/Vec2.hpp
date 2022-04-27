#pragma once
#include "Types.hpp"
namespace MC
{
public
ref class Vec2 : ClassTemplate<Vec2, ::Vec2>
{
public:
    __ctor_all(Vec2, ::Vec2);

    static Vec2 ^ Create(float a, float b);

    inline String ^ ToString() override;
    static Vec2 ^ operator*(Vec2 ^ obj, float num);
    static Vec2 ^ operator+(Vec2 ^, Vec2 ^ b);
    static Vec2 ^ operator-(Vec2 ^ a, Vec2 ^ b);

    property float X
    {
        inline float get();
        inline void set(float my);
    }
    property float Y
    {
        inline float get();
        inline void set(float mz);
    }

#ifdef INCLUDE_MCAPI

    Vec2(MC::Vec2 ^ _0);

    static property MC::Vec2 ^ LOWEST {
        MC::Vec2 ^ get();
    };

    static property MC::Vec2 ^ MAX {
        MC::Vec2 ^ get();
    };

    static property MC::Vec2 ^ MIN {
        MC::Vec2 ^ get();
    };

    static property MC::Vec2 ^ NEG_UNIT_X {
        MC::Vec2 ^ get();
    };

    static property MC::Vec2 ^ NEG_UNIT_Y {
        MC::Vec2 ^ get();
    };

    static property MC::Vec2 ^ ONE {
        MC::Vec2 ^ get();
    };

    static property MC::Vec2 ^ UNIT_X {
        MC::Vec2 ^ get();
    };

    static property MC::Vec2 ^ UNIT_Y {
        MC::Vec2 ^ get();
    };

    static property MC::Vec2 ^ ZERO {
        MC::Vec2 ^ get();
    };
#endif // INCLUDE_MCAPI
};
} // namespace MC
