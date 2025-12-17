#include "mc/deps/core_graphics/enums/ColorSpace.h"

namespace cg {
cg::ColorSpace translateImageUsage(const mce::ImageUsage imageUsage) {
    switch (imageUsage) {
    case mce::ImageUsage::Unknown:
        return ColorSpace::Unknown;
    case mce::ImageUsage::SRGB:
        return ColorSpace::SRGB;
    case mce::ImageUsage::Data:
        return ColorSpace::Linear;
    default:
        return ColorSpace::Unknown;
    }
}
} // namespace cg