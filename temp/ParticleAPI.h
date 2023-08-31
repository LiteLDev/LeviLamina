/**
 * @file   ParticleAPI.h
 * @author OEOTYAN (https://github.com/OEOTYAN)
 * @brief  Spawn Particles for Client User Interface
 *
 * @copyright Created by OEOTYAN on 2022/08/27.
 *
 */
#pragma once
#include "liteloader/api/LLAPI.h"
#include "liteloader/api/Global.h"
#include "mc/BlockPos.hpp"
#include "mc/Vec3.hpp"
#include "mc/BoundingBox.hpp"
#include "mc/AABB.hpp"

class ParticleAPI {
    using FuncSpawnParticle = void (*)(int32_t, Vec3 const&, std::string const&, int32_t);
    using FuncDrawPoint = void (*)(int32_t, Vec3 const&, int32_t, char, enum class mce::ColorPalette);
    using FuncDrawNumber = void (*)(int32_t, Vec3 const&, int32_t, char, enum class mce::ColorPalette);
    using FuncDrawAxialLine = void (*)(int32_t, bool, bool, const Vec3&, char, double, int32_t, enum class mce::ColorPalette);
    using FuncDrawOrientedLine = void (*)(int32_t, const Vec3&, const Vec3&, int32_t, char, double, int32_t, enum class mce::ColorPalette);
    using FuncDrawCuboid = void (*)(int32_t, bool, bool, const AABB&, int32_t, enum class mce::ColorPalette);
    using FuncDrawCircle = void (*)(int32_t, const Vec3&, char, double, int32_t, char, double, int32_t, enum class mce::ColorPalette);

public:
    bool initialized = false;
    HMODULE handle = nullptr;
    FuncSpawnParticle funcSpawnParticle = nullptr;
    FuncDrawPoint funcDrawPoint = nullptr;
    FuncDrawNumber funcDrawNumber = nullptr;
    FuncDrawAxialLine funcDrawAxialLine = nullptr;
    FuncDrawOrientedLine funcDrawOrientedLine = nullptr;
    FuncDrawCuboid funcDrawCuboid = nullptr;
    FuncDrawCircle funcDrawCircle = nullptr;

    template <typename T>
    T inline getFunc(const std::string& name) {
        return (T)GetProcAddress(handle, name.c_str());
    }

    void inline init(HMODULE hModule = nullptr) {
        if (!hModule) {
            auto pPtr = ll::getPlugin("ParticleAPI");
            if (!pPtr) {
                throw std::runtime_error("Cannot get ParticleAPI.dll");
            }
            handle = pPtr->handle;
        } else {
            handle = hModule;
        }

        funcSpawnParticle = getFunc<FuncSpawnParticle>("PTAPI_spawnParticle");
        funcDrawPoint = getFunc<FuncDrawPoint>("PTAPI_drawPoint");
        funcDrawNumber = getFunc<FuncDrawNumber>("PTAPI_drawNumber");
        funcDrawAxialLine = getFunc<FuncDrawAxialLine>("PTAPI_drawAxialLine");
        funcDrawOrientedLine = getFunc<FuncDrawOrientedLine>("PTAPI_drawOrientedLine");
        funcDrawCuboid = getFunc<FuncDrawCuboid>("PTAPI_drawCuboid");
        funcDrawCircle = getFunc<FuncDrawCircle>("PTAPI_drawCircle");
        initialized = true;
    }
    void inline spawnParticle(int32_t displayRadius, Vec3 const& pos, std::string const& particleName, int32_t dimID) {
        if (funcSpawnParticle == nullptr) {
            throw std::runtime_error("Function PTAPI_spawnParticle not found");
        }
        return funcSpawnParticle(displayRadius, pos, particleName, dimID);
    }
    void inline drawPoint(int32_t displayRadius, Vec3 const& pos, int32_t dimID, char lineWidth, enum class mce::ColorPalette color) {
        if (funcDrawPoint == nullptr) {
            throw std::runtime_error("Function PTAPI_drawPoint not found");
        }
        return funcDrawPoint(displayRadius, pos, dimID, lineWidth, color);
    }
    void inline drawNumber(int32_t displayRadius, Vec3 const& pos, int32_t dimID, char num, enum class mce::ColorPalette color) {
        if (funcDrawNumber == nullptr) {
            throw std::runtime_error("Function PTAPI_drawNumber not found");
        }
        return funcDrawNumber(displayRadius, pos, dimID, num, color);
    }
    void inline drawAxialLine(int32_t displayRadius, bool highDetial, bool doubleSide, const Vec3& originPoint, char direction, double length, int32_t dimID, enum class mce::ColorPalette color) {
        if (funcDrawAxialLine == nullptr) {
            throw std::runtime_error("Function PTAPI_drawAxialLine not found");
        }
        return funcDrawAxialLine(displayRadius, highDetial, doubleSide, originPoint, direction, length, dimID, color);
    }
    void inline drawOrientedLine(int32_t displayRadius, const Vec3& start, const Vec3& end, int32_t dimID, char lineWidth, double minSpacing, int32_t maxParticlesNum, enum class mce::ColorPalette color) {
        if (funcDrawOrientedLine == nullptr) {
            throw std::runtime_error("Function PTAPI_drawOrientedLine not found");
        }
        return funcDrawOrientedLine(displayRadius, start, end, dimID, lineWidth, minSpacing, maxParticlesNum, color);
    }
    void inline drawCuboid(int32_t displayRadius, bool highDetial, bool doubleSide, const AABB& aabb, int32_t dimID, enum class mce::ColorPalette color) {
        if (funcDrawCuboid == nullptr) {
            throw std::runtime_error("Function PTAPI_drawCuboid not found");
        }
        return funcDrawCuboid(displayRadius, highDetial, doubleSide, aabb, dimID, color);
    }
    void inline drawCircle(int32_t displayRadius, const Vec3& originPoint, char facing, double radius, int32_t dimID, char lineWidth, double minSpacing, int32_t maxParticlesNum, enum class mce::ColorPalette color) {
        if (funcDrawCircle == nullptr) {
            throw std::runtime_error("Function PTAPI_drawCircle not found");
        }
        return funcDrawCircle(displayRadius, originPoint, facing, radius, dimID, lineWidth, minSpacing, maxParticlesNum, color);
    }
};

class ParticleCUI {
public:
    uint32_t displayRadius;
    bool highDetial;
    bool doubleSide;

    static LLAPI ParticleAPI api;

    static void init(HMODULE hModule = nullptr) {
        if (!api.initialized) {
            api.init(hModule);
        }
    }
    ParticleCUI()
    : displayRadius(UINT_MAX), highDetial(true), doubleSide(true) {
        init();
    }
    ParticleCUI(uint32_t dr, bool hd = true, bool ds = true)
    : displayRadius(dr), highDetial(hd), doubleSide(ds) {
        init();
    }

    enum Direction : int8_t {
        NEG_Y = 0,
        POS_Y = 1,
        NEG_Z = 2,
        POS_Z = 3,
        NEG_X = 4,
        POS_X = 5,
    };

    enum PointSize : int8_t {
        PX1 = 1,
        PX2 = 2,
        PX4 = 4,
        PX8 = 8,
        PX16 = 16,
    };

    enum NumType : int8_t {
        NUM0 = 0,
        NUM1 = 1,
        NUM2 = 2,
        NUM3 = 3,
        NUM4 = 4,
        NUM5 = 5,
        NUM6 = 6,
        NUM7 = 7,
        NUM8 = 8,
        NUM9 = 9,
        NUMA = 'A',
        NUMB = 'B',
        NUMC = 'C',
        NUMD = 'D',
        NUME = 'E',
        NUMF = 'F',
        NUM10 = 10,
        NUM11 = 11,
        NUM12 = 12,
        NUM13 = 13,
        NUM14 = 14,
        NUM15 = 15,
        NUM16 = 16,
    };

    void inline spawnParticle(Vec3 const& pos, std::string const& particleName, int32_t dimID) {
        api.spawnParticle(displayRadius, pos, particleName, dimID);
    }

    void inline drawPoint(Vec3 const& pos, int32_t dimID, enum PointSize lineWidth = PointSize::PX4, enum class mce::ColorPalette color = mce::ColorPalette::WHITE) {
        api.drawPoint(displayRadius, pos, dimID, lineWidth, color);
    }
    void inline drawNumber(Vec3 const& pos, int32_t dimID, enum NumType num = NumType::NUM0, enum class mce::ColorPalette color = mce::ColorPalette::WHITE) {
        api.drawNumber(displayRadius, pos, dimID, num, color);
    }
    void inline drawAxialLine(const Vec3& originPoint, enum Direction direction, double length, int32_t dimID, enum class mce::ColorPalette color = mce::ColorPalette::WHITE) {
        api.drawAxialLine(displayRadius, highDetial, doubleSide, originPoint, direction, length, dimID, color);
    }
    void inline drawOrientedLine(const Vec3& start, const Vec3& end, int32_t dimID, enum PointSize lineWidth = PointSize::PX4, double minSpacing = 1, int32_t maxParticlesNum = 64, enum class mce::ColorPalette color = mce::ColorPalette::WHITE) {
        api.drawOrientedLine(displayRadius, start, end, dimID, lineWidth, minSpacing, maxParticlesNum, color);
    }
    void inline drawCuboid(const AABB& aabb, int32_t dimID, enum class mce::ColorPalette color = mce::ColorPalette::WHITE) {
        api.drawCuboid(displayRadius, highDetial, doubleSide, aabb, dimID, color);
    }
    void inline drawCircle(const Vec3& originPoint, enum Direction facing, double radius, int32_t dimID, enum PointSize lineWidth = PointSize::PX4, double minSpacing = 1, int32_t maxParticlesNum = 64, enum class mce::ColorPalette color = mce::ColorPalette::WHITE) {
        api.drawCircle(displayRadius, originPoint, facing, radius, dimID, lineWidth, minSpacing, maxParticlesNum, color);
    }
    void inline spawnParticle(BlockPos const& pos, std::string const& particleName, int32_t dimID) {
        spawnParticle(pos.toVec3() + 0.5f, particleName, dimID);
    }
    void inline drawPoint(BlockPos const& pos, int32_t dimID, PointSize lineWidth, enum class mce::ColorPalette color) {
        drawPoint(pos.toVec3() + 0.5f, dimID, lineWidth, color);
    }
    void inline drawNumber(BlockPos const& pos, int32_t dimID, NumType num, enum class mce::ColorPalette color) {
        drawNumber(pos.toVec3() + 0.5f, dimID, num, color);
    }
    void inline drawOrientedLine(const BlockPos& start, const BlockPos& end, int32_t dimID, PointSize lineWidth, double minSpacing, int32_t maxParticlesNum, enum class mce::ColorPalette color) {
        drawOrientedLine(start.toVec3() + 0.5f, end.toVec3() + 0.5f, dimID, lineWidth, minSpacing, maxParticlesNum, color);
    }
    void inline drawCuboid(const BoundingBox& box, int32_t dimID, enum class mce::ColorPalette color) {
        drawCuboid(box.toAABB(), dimID, color);
    }
    void inline drawCuboid(const BlockPos& pos, int32_t dimID, enum class mce::ColorPalette color) {
        drawCuboid(pos.toAABB(), dimID, color);
    }
    void inline drawCircle(const BlockPos& originPoint, Direction facing, double radius, int32_t dimID, PointSize lineWidth, double minSpacing, int32_t maxParticlesNum, enum class mce::ColorPalette color) {
        drawCircle(originPoint.toVec3() + 0.5f, facing, radius, dimID, lineWidth, minSpacing, maxParticlesNum, color);
    }
};