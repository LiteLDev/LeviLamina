#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#define CPPHTTPLIB_OPENSSL_SUPPORT

#include <Configs.h>
#include <Global.h>
#include <Tools/JsonHelper.h>
#include <MC/Types.hpp>
#include <LoggerAPI.h>
#include <vector>
#include <string>
using std::string;
using std::vector;

//全局工具
extern Logger logger;
extern fifo_json globalConfig;

typedef unsigned long long QWORD;

class IntVec4
{
public:
	int x,y,z;
    int dim;

    inline BlockPos getBlockPos()
    {
        return { x,y,z };
    }

    inline int getDimensionId()
    {
        return dim;
    }
};

class FloatVec4
{
public:
	float x,y,z;
    int dim;

    inline Vec3 getVec3()
    {
        return { x,y,z };
    }

    inline int getDimensionId()
    {
        return dim;
    }

    inline IntVec4 toIntVec4() {
        auto px = (int)x;
        auto py = (int)y;
        auto pz = (int)z;
        if (px < 0 && px != x)
            px = px - 1;
        if (py < 0 && py != y)
            py = py - 1;
        if (pz < 0 && pz != z)
            pz = pz - 1;
        return { px, py, pz, dim };
    }
};

inline std::string DimId2Name(int dimid)
{
    std::string name;
    switch (dimid)
    {
    case 0:
        name = tr("base.getDimName.0");
        break;
    case 1:
        name = tr("base.getDimName.1");
        break;
    case 2:
        name = tr("base.getDimName.2");
        break;
    default:
        name = tr("base.getDimName.unknown");
        break;
    }
    return name;
}

//全局变量
extern bool isCmdRegisterEnabled;