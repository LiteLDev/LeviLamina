#include <MC/Types.hpp>
#include <MC/ColorFormat.hpp>
#include <LoggerAPI.h>

//ChunkBlockPos::ChunkBlockPos(BlockPos const& pos, short minHeight)
//{
//    this->x = (char)pos.x & 0xf;
//    this->z = (char)pos.z & 0xf;
//    this->y = (short)(pos.y - minHeight);
//}

extern Logger logger;
namespace mce
{
std::string mce::Color::toConsoleCode(bool foreground) const
{
    fmt::v8::rgb rgb;
    rgb.r = r * 0xff;
    rgb.g = g * 0xff;
    rgb.b = b * 0xff;
    if (foreground)
        return fmt::v8::detail::make_foreground_color<char>(fmt::v8::detail::color_type(rgb));
    else
        return fmt::v8::detail::make_background_color<char>(fmt::v8::detail::color_type(rgb));
}
std::string mce::Color::toNearestColorCode() const
{
    return ColorFormat::nearestColorCodeFromColor(*this);
};
double mce::Color::distanceTo(mce::Color const dst) const
{
    long rmean = ((long)(r * 0xff) + (long)(dst.r * 0xff)) / 2;
    long dr = (long)(r * 0xff) - (long)(dst.r * 0xff);
    long dg = (long)(g * 0xff) - (long)(dst.g * 0xff);
    long db = (long)(b * 0xff) - (long)(dst.b * 0xff);
    return sqrt((((512 + rmean) * dr * dr) >> 8) + 4 * dg * dg + (((767 - rmean) * db * db) >> 8));
}
class mce::Color mce::Color::fromConsoleCode(std::string const& code)
{
    return ColorFormat::ColorFromConsoleCode(code);
}
mce::Color Color::fromColorCode(std::string const& code)
{
    return *ColorFormat::ColorFromColorCode(code);
};
}

Vec3 BlockPos::toVec3() const {
    return {(float)x, (float)y, (float)z};
}

Vec3 BlockPos::bottomCenter() const {
    return {(float)x + 0.5f, (float)y, (float)z + 0.5f};
}

Vec3 BlockPos::center() const {
    return {(float)x + 0.5f, (float)y + 0.5f, (float)z + 0.5f};
}

BlockPos Vec3::toBlockPos() const {
    auto px = (int)x;
    auto py = (int)y;
    auto pz = (int)z;
    if (px < 0 && px != x)
        px = px - 1;
    if (py < 0 && py != y)
        py = py - 1;
    if (pz < 0 && pz != z)
        pz = pz - 1;
    return {px, py, pz};
}

float Vec3::length() const {
    return sqrt(x * x + y * y + z * z);
}

float Vec3::distanceTo(Vec3 const& a0) const {
    Vec3 tmp = *this - a0;
    return tmp.length();
}

AABB BoundingBox::toAABB() const {
    Vec3 vec1 = {(float)bpos1.x, (float)bpos1.y, (float)bpos1.z};
    Vec3 vec2 = {(float)bpos1.x, (float)bpos1.y, (float)bpos1.z};
    return {vec1, vec2 + Vec3{1, 1, 1}};
}