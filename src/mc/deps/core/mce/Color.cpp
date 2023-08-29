#include "mc/deps/core/mce/Color.h"

namespace mce {
double Color::deltaE94(Color const& dst) const noexcept {
    auto m1 = this->sRGBToLinear().LinearToXYZ().XYZToLab().toVec3();
    Vec2 ab1{m1.y, m1.z};
    auto m2 = dst.sRGBToLinear().LinearToXYZ().XYZToLab().toVec3();
    Vec2 ab2{m2.y, m2.z};
    auto C1 = ab1.length();
    auto C2 = ab2.length();
    auto dC = C1 - C2;
    Vec3 D{m1.x - m2.x, dC, sqrt(ab1.distanceToSqr(ab2) - dC)};
    return (D / Vec3{1.0, 1.0 + 0.045 * C1, 1.0 + 0.015 * C2}).length();
}

double Color::deltaE00(Color const& dst) const noexcept {
    auto ma = this->sRGBToLinear().LinearToXYZ().XYZToLab().toVec3();
    auto mb = dst.sRGBToLinear().LinearToXYZ().XYZToLab().toVec3();

    // https://doi.org/10.1002/col.20070
    // The CIEDE2000 color-difference formula: Implementation notes,
    // supplementary test data, and mathematical observations

    double L1  = ma.r;
    double L2  = mb.r;
    double a1  = ma.g;
    double a2  = mb.g;
    double b1  = ma.b;
    double b2  = mb.b;
    double dL  = L1 - L2;
    double C1  = sqrt(a1 * a1 + b1 * b1);
    double C2  = sqrt(a2 * a2 + b2 * b2);
    double L_  = (L1 + L2) * 0.5;
    double C_  = (C1 + C2) * 0.5;
    double C_7 = pow(C_, 7.0);
    double G   = (1 - sqrt(C_7 / (C_7 + 6103515625))) * 0.5;
    double a1p = a1 * (1 + G);
    double a2p = a2 * (1 + G);
    double C1p = sqrt(a1p * a1p + b1 * b1);
    double C2p = sqrt(a2p * a2p + b2 * b2);
    double C_p = (C1p + C2p) * 0.5;
    double dCp = C1p - C2p;
    double h1p = atan2(b1, a1p);
    double h2p = atan2(b2, a2p);
    if (h1p < 0)
        h1p += 6.2831853071796;
    if (h2p < 0)
        h2p += 6.2831853071796;
    h1p        *= 57.2957795131;
    h2p        *= 57.2957795131;
    double h_p  = (h1p + h2p) * 0.5;
    double dhp  = 0;
    double H_p  = 0;
    if (C1p == 0 || C2p == 0) {
        H_p = h_p * 2;
    } else {
        if (180 < abs(h1p - h2p)) {
            if (h2p <= h1p) {
                dhp = h2p - h1p + 360;
            } else {
                dhp = h2p - h1p - 360;
            }
            if (h2p + h1p < 360) {
                H_p = h_p + 180;
            } else {
                H_p = h_p - 180;
            }
        } else {
            dhp = h2p - h1p;
            H_p = h_p;
        }
    }
    double T = 1 - 0.17 * cos((H_p - 30) * (std::numbers::pi / 180.0)) +
               0.24 * cos((2 * H_p) * (std::numbers::pi / 180.0)) +
               0.32 * cos((3 * H_p + 6) * (std::numbers::pi / 180.0)) -
               0.20 * cos((4 * H_p - 63.0) * (std::numbers::pi / 180.0));
    double dHp   = 2 * sqrt(C1p * C2p) * sin(dhp * 0.5 * (std::numbers::pi / 180.0));
    L_          -= 50;
    L_          *= L_;
    double SL    = 1.0 + 0.015 * L_ / sqrt(L_ + 20);
    double SC    = 1.0 + 0.045 * C_p;
    double SH    = 1.0 + 0.015 * C_p * T;
    double C_p7  = pow(C_p, 7.0);
    double kH    = (H_p - 275) / 25;
    double RT = -2 * sqrt(C_p7 / (C_p7 + 6103515625 /*25^7*/)) * sin(60 * exp(-kH * kH) * (std::numbers::pi / 180.0));

    dL  = dL / SL;
    dCp = dCp / SC;
    dHp = dHp / SH;

    return sqrt(dL * dL + dCp * dCp + dHp * dHp + RT * dCp * dHp);
}
} // namespace mce
