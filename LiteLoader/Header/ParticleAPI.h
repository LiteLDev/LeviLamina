/**
 * @file   ParticleAPI.h
 * @author OEOTYAN (https://github.com/OEOTYAN)
 * @brief  Spawn Particles for Client User Interface
 *
 * @copyright Created by OEOTYAN on 2022/08/27.
 *
 */
#pragma once
#include "Global.h"

class ParticleCUI {
public:
    unsigned int displayRadius;
    bool highDetial;
    bool doubleSide;

    ParticleCUI()
    : displayRadius(UINT_MAX), highDetial(true), doubleSide(true) {
    }
    ParticleCUI(unsigned int dr, bool hd = true, bool ds = true)
    : displayRadius(dr), highDetial(hd), doubleSide(ds) {
    }

    enum Direction : char {
        NEG_Y = 0,
        POS_Y = 1,
        NEG_Z = 2,
        POS_Z = 3,
        NEG_X = 4,
        POS_X = 5,
    };

    enum PointSize : char {
        PX1 = 1,
        PX2 = 2,
        PX4 = 4,
        PX8 = 8,
        PX16 = 16,
    };

    enum NumType : char {
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

    LIAPI void spawnParticle(Vec3 const& pos, std::string const& particleName, int dimId);
    LIAPI void spawnParticle(BlockPos const& pos, std::string const& particleName, int dimId);

    LIAPI void drawPoint(Vec3 const& pos, int dimId, enum PointSize lineWidth = PointSize::PX4, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawPoint(BlockPos const& pos, int dimId, enum PointSize lineWidth = PointSize::PX4, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawNumber(Vec3 const& pos, int dimId, enum NumType num = NumType::NUM0, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawNumber(BlockPos const& pos, int dimId, enum NumType num = NumType::NUM0, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawAxialLine(const Vec3& originPoint, enum Direction direction, double length, int dimId, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawOrientedLine(const Vec3& start, const Vec3& end, int dimId, enum PointSize lineWidth = PointSize::PX4, double minSpacing = 1, int maxParticlesNum = 64, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawOrientedLine(const BlockPos& start, const BlockPos& end, int dimId, enum PointSize lineWidth = PointSize::PX4, double minSpacing = 1, int maxParticlesNum = 64, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawCuboid(const AABB& aabb, int dimId, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawCuboid(const BoundingBox& box, int dimId, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawCuboid(const BlockPos& box, int dimId, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawCircle(const Vec3& originPoint, enum Direction facing, double radius, int dimId, enum PointSize lineWidth = PointSize::PX4, double minSpacing = 1, int maxParticlesNum = 64, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
    LIAPI void drawCircle(const BlockPos& originPoint, enum Direction facing, double radius, int dimId, enum PointSize lineWidth = PointSize::PX4, double minSpacing = 1, int maxParticlesNum = 64, enum class mce::ColorPalette color = mce::ColorPalette::WHITE);
};
    