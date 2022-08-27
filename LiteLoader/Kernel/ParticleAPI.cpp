//
// Created by OEOTYAN on 2022/08/27.
//
#include "ParticleAPI.h"
#include "MC/Player.hpp"
#include "MC/Dimension.hpp"
#include "MC/Level.hpp"

namespace {
template <typename T>
std::string fto_string(const T a_value) {
    std::ostringstream out;
    out << a_value;
    return out.str();
}

int highestOneBit(unsigned int num) {
    num |= (num >> 1);
    num |= (num >> 2);
    num |= (num >> 4);
    num |= (num >> 8);
    num |= (num >> 16);
    return num - (num >> 1);
}
std::vector<std::pair<double, int>> binSplit(double start, double end) {
    std::vector<std::pair<double, int>> lengthMap;
    double size = end - start;
    int length = static_cast<int>(size);
    if (length > 4096) {
        while (length >= 4096) {
            length -= 2048;
            auto point = 1024.0 + start;
            start += 2048.0;
            lengthMap.push_back({point, 2048});
        }
        if (length > 0) {
            lengthMap.push_back({end - 1024.0, 2048});
        }
    } else {
        int potLength = highestOneBit(length);
        lengthMap.push_back({start + potLength * 0.5, potLength});
        if (length != potLength || length < size) {
            lengthMap.push_back({end - potLength * 0.5, potLength});
        }
    }
    return lengthMap;
}

} // namespace


void ParticleCUI::spawnParticle(Vec3 const& pos, std::string const& particleName, int dimId) {
    auto diminsion = Global<Level>->getDimension(dimId);
    diminsion->forEachPlayer([&](Player& player) {
        if (displayRadius == UINT_MAX || player.getPosition().distanceTo(pos) < displayRadius) {
            player.sendSpawnParticleEffectPacket(pos, dimId, particleName);
        }
        return true;
    });
}

void ParticleCUI::drawPoint(Vec3 const& pos, int dimId, PointSize lineWidth, enum class mce::ColorPalette color) {
    spawnParticle(pos, std::string("ll:point") + getParticleColorType(color) + fto_string(static_cast<int>(lineWidth)), dimId);
}
void ParticleCUI::drawNumber(Vec3 const& pos, int dimId, NumType num, enum class mce::ColorPalette color) {
    std::string particleName = "ll:num";
    if (static_cast<int>(num) <= 16) {
        particleName += fto_string(static_cast<int>(num));
    } else {
        particleName += static_cast<char>(num);
    }
    particleName += getParticleColorType(color);
    spawnParticle(pos, particleName, dimId);
}
void ParticleCUI::drawAxialLine(const Vec3& originPoint, Direction direction, double length, int dimId, enum class mce::ColorPalette color) {

    if (length <= 0)
        return;
    if (length < 1) {
        Vec3 vstart = originPoint;
        Vec3 vend = originPoint;
        switch (direction) {
            case Direction::NEG_Y:
                vend.y -= (float)length;
                break;
            case Direction::POS_Y:
                vend.y += (float)length;
                break;
            case Direction::NEG_Z:
                vend.z -= (float)length;
                break;
            case Direction::POS_Z:
                vend.z += (float)length;
                break;
            case Direction::NEG_X:
                vend.x -= (float)length;
                break;
            case Direction::POS_X:
                vend.x += (float)length;
                break;
        }
        if (length>0.375){
            drawOrientedLine(vstart, vend,dimId,PX2,0.125,5,color);
        }else {
            drawOrientedLine(vstart, vend, dimId, PX1, 0.0625, 5, color);
        }
        return;
    }

    double start = 0, end = 0;
    switch (direction) {
        case Direction::NEG_Y:
            start = originPoint.y - length;
            end = originPoint.y;
            break;
        case Direction::POS_Y:
            start = originPoint.y;
            end = originPoint.y + length;
            break;
        case Direction::NEG_Z:
            start = originPoint.z - length;
            end = originPoint.z;
            break;
        case Direction::POS_Z:
            start = originPoint.z;
            end = originPoint.z + length;
            break;
        case Direction::NEG_X:
            start = originPoint.x - length;
            end = originPoint.x;
            break;
        case Direction::POS_X:
            start = originPoint.x;
            end = originPoint.x + length;
            break;
    }

    auto list = binSplit(start, end);
    std::vector<std::pair<Vec3, int>> positionList;
    std::string axisString;
    switch (direction) {
        case Direction::NEG_Y:
        case Direction::POS_Y:
            axisString = "Y";
            for (auto i : list)
                positionList.push_back({{originPoint.x, (float)i.first, originPoint.z}, i.second});
            break;
        case Direction::NEG_Z:
        case Direction::POS_Z:
            axisString = "Z";
            for (auto i : list)
                positionList.push_back({{originPoint.x, originPoint.y, (float)i.first}, i.second});
            break;
        default:
            axisString = "X";
            for (auto i : list)
                positionList.push_back({{(float)i.first, originPoint.y, originPoint.z}, i.second});
            break;
    }
    axisString += getParticleColorType(color);
    for (auto points : positionList) {
        std::string particleName = axisString + fto_string(points.second);
        spawnParticle(points.first, "ll:linep" + particleName, dimId);
        if (highDetial) {
            spawnParticle(points.first, "ll:linem" + particleName, dimId);
        }
        if (doubleSide) {
            spawnParticle(points.first, "ll:line_backp" + particleName, dimId);
            if (highDetial) {
                spawnParticle(points.first, "ll:line_backm" + particleName, dimId);
            }
        }
    }
}
void ParticleCUI::drawOrientedLine(const Vec3& start, const Vec3& end, int dimId, PointSize lineWidth, double minSpacing, int maxParticlesNum, enum class mce::ColorPalette color) {
    double length = (end - start).length() / minSpacing;
    length = std::min(length, (double)maxParticlesNum);
    int len = (int)ceil(length);
    for (int i = 0; i <= len; i++) {
        auto point = start + (end - start) * (float)(i / (double)len);
        drawPoint(point, dimId, lineWidth, color);
    }
}
void ParticleCUI::drawCuboid(const AABB& aabb, int dimId, enum class mce::ColorPalette color) {
    auto p1 = aabb.min, p2 = aabb.max;
    auto dx = p2.x - p1.x;
    auto dy = p2.y - p1.y;
    auto dz = p2.z - p1.z;
    drawAxialLine(p1, Direction::POS_X, dx, dimId, color);
    drawAxialLine(p1, Direction::POS_Y, dy, dimId, color);
    drawAxialLine(p1, Direction::POS_Z, dz, dimId, color);
    Vec3 p3{p2.x, p1.y, p2.z};
    drawAxialLine(p3, Direction::NEG_X, dx, dimId, color);
    drawAxialLine(p3, Direction::POS_Y, dy, dimId, color);
    drawAxialLine(p3, Direction::NEG_Z, dz, dimId, color);
    Vec3 p4{p2.x, p2.y, p1.z};
    drawAxialLine(p4, Direction::NEG_X, dx, dimId, color);
    drawAxialLine(p4, Direction::NEG_Y, dy, dimId, color);
    drawAxialLine(p4, Direction::POS_Z, dz, dimId, color);
    Vec3 p5{p1.x, p2.y, p2.z};
    drawAxialLine(p5, Direction::POS_X, dx, dimId, color);
    drawAxialLine(p5, Direction::NEG_Y, dy, dimId, color);
    drawAxialLine(p5, Direction::NEG_Z, dz, dimId, color);
}
void ParticleCUI::drawCircle(const Vec3& originPoint, Direction facing, double radius, int dimId, PointSize lineWidth, double minSpacing, int maxParticlesNum, enum class mce::ColorPalette color) {
    static const double _2PI_ = 2.0 * M_PI;

    if (radius <= 0)
        return;
    auto length = radius * _2PI_ / minSpacing;
    length = std::min(length, (double)maxParticlesNum);
    int len = (int)ceil(length);
    switch (facing) {
        case Direction::NEG_Y:
        case Direction::POS_Y:
            for (int i = 0; i < len; i++) {
                auto point = originPoint + Vec3(radius * cos(i / (double)len * M_PI), 0.0,
                                                radius * sin(i / (double)len * _2PI_));
                drawPoint(point, dimId, lineWidth, color);
            }
            break;
        case Direction::NEG_Z:
        case Direction::POS_Z:
            for (int i = 0; i < len; i++) {
                auto point = originPoint + Vec3(radius * sin(i / (double)len * _2PI_),
                                                radius * cos(i / (double)len * _2PI_), 0.0);
                drawPoint(point, dimId, lineWidth, color);
            }
            break;
        default:
            for (int i = 0; i < len; i++) {
                auto point = originPoint + Vec3(0.0, radius * cos(i / (double)len * _2PI_),
                                                radius * sin(i / (double)len * _2PI_));
                drawPoint(point, dimId, lineWidth, color);
            }
            break;
    }
}


void ParticleCUI::spawnParticle(BlockPos const& pos, std::string const& particleName, int dimId) {
    spawnParticle(pos.toVec3() + 0.5f, particleName, dimId);
}
void ParticleCUI::drawPoint(BlockPos const& pos, int dimId, PointSize lineWidth, enum class mce::ColorPalette color) {
    drawPoint(pos.toVec3() + 0.5f, dimId, lineWidth, color);
}
void ParticleCUI::drawNumber(BlockPos const& pos, int dimId, NumType num, enum class mce::ColorPalette color) {
    drawNumber(pos.toVec3() + 0.5f, dimId, num, color);
}
void ParticleCUI::drawOrientedLine(const BlockPos& start, const BlockPos& end, int dimId, PointSize lineWidth, double minSpacing, int maxParticlesNum, enum class mce::ColorPalette color) {
    drawOrientedLine(start.toVec3() + 0.5f, end.toVec3() + 0.5f, dimId, lineWidth, minSpacing, maxParticlesNum, color);
}
void ParticleCUI::drawCuboid(const BoundingBox& box, int dimId, enum class mce::ColorPalette color) {
    drawCuboid(box.toAABB(), dimId, color);
}
void ParticleCUI::drawCuboid(const BlockPos& pos, int dimId, enum class mce::ColorPalette color) {
    drawCuboid(pos.toAABB(), dimId, color);
}
void ParticleCUI::drawCircle(const BlockPos& originPoint, Direction facing, double radius, int dimId, PointSize lineWidth, double minSpacing, int maxParticlesNum, enum class mce::ColorPalette color) {
    drawCircle(originPoint.toVec3() + 0.5f, facing, radius, dimId, lineWidth, minSpacing, maxParticlesNum, color);
}