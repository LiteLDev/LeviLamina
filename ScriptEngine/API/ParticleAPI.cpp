//
// Created by OEOTYAN on 2022/08/27.
//
#include "ParticleAPI.h"
#include "McAPI.h"
#include "APIHelp.h"
#include "BaseAPI.h"

#define GETVEC3(v, d, u)                                                          \
    if (IsInstanceOf<IntPos>(u)) {                                                \
        auto pos2 = EngineScope::currentEngine()->getNativeInstance<IntPos>(u);   \
        v = Vec3(pos2->x, pos2->y, pos2->z);                                      \
        v += 0.5f;                                                                \
        d = pos2->dim;                                                            \
    } else if (IsInstanceOf<FloatPos>(u)) {                                       \
        auto pos2 = EngineScope::currentEngine()->getNativeInstance<FloatPos>(u); \
        v = Vec3(pos2->x, pos2->y, pos2->z);                                      \
        d = pos2->dim;                                                            \
    } else {                                                                      \
        LOG_WRONG_ARG_TYPE();                                                     \
        return Local<Value>();                                                    \
    }

namespace {
template <typename T>
std::string fto_string(const T a_value) {
    std::ostringstream out;
    out << a_value;
    return out.str();
}
mce::ColorPalette getColorType(std::string s) {
    switch (s[0]) {
        case 'B':
            return mce::ColorPalette::BLACK;
            break;
        case 'I':
            return mce::ColorPalette::INDIGO;
            break;
        case 'L':
            return mce::ColorPalette::LAVENDER;
            break;
        case 'T':
            return mce::ColorPalette::TEAL;
            break;
        case 'C':
            return mce::ColorPalette::COCOA;
            break;
        case 'D':
            return mce::ColorPalette::DARK;
            break;
        case 'O':
            return mce::ColorPalette::OATMEAL;
            break;
        case 'W':
            return mce::ColorPalette::WHITE;
            break;
        case 'R':
            return mce::ColorPalette::RED;
            break;
        case 'A':
            return mce::ColorPalette::APRICOT;
            break;
        case 'Y':
            return mce::ColorPalette::YELLOW;
            break;
        case 'G':
            return mce::ColorPalette::GREEN;
            break;
        case 'V':
            return mce::ColorPalette::VATBLUE;
            break;
        case 'S':
            return mce::ColorPalette::SLATE;
            break;
        case 'P':
            return mce::ColorPalette::PINK;
            break;
        case 'F':
            return mce::ColorPalette::FAWN;
            break;
        default:
            return mce::ColorPalette::WHITE;
            break;
    }
}
} // namespace


ParticleSpawner* ParticleSpawner::create(const Arguments& args) {
    if (args.size() < 3)
        return nullptr;
    try {
        ParticleSpawner* p = new ParticleSpawner(args.thiz());
        p->displayRadius = args[0].asNumber().toInt64();
        p->highDetial = args[1].asBoolean().value();
        p->doubleSide = args[2].asBoolean().value();
        p->init();
        return p;
    } catch (...) {
        return nullptr;
    }
}
Local<Value> McClass::newParticleSpawner(const Arguments& args) {
    auto size = args.size();
    unsigned int displayRadius = UINT_MAX;
    bool highDetial = true;
    bool doubleSide = true;

    if (size > 0) {
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
        displayRadius = args[0].asNumber().toInt64();
    }
    if (size > 1) {
        CHECK_ARG_TYPE(args[1], ValueKind::kBoolean);
        highDetial = args[1].asBoolean().value();
    }
    if (size > 2) {
        CHECK_ARG_TYPE(args[2], ValueKind::kBoolean);
        doubleSide = args[2].asBoolean().value();
    }
    return EngineScope::currentEngine()->newNativeClass<ParticleSpawner>(displayRadius, highDetial, doubleSide);
}

Local<Value> ParticleSpawner::spawnParticle(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    Vec3 pos;
    int dimId;
    std::string particleName;
    GETVEC3(pos, dimId, args[0])
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    particleName = args[1].asString().toString();
    ParticleCUI::spawnParticle(pos, particleName, dimId);
    return Boolean::newBoolean(true);
}
Local<Value> ParticleSpawner::drawPoint(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    Vec3 pos;
    int dimId;
    GETVEC3(pos, dimId, args[0])
    auto pointSize = ParticleCUI::PointSize::PX4;

    if (args.size() > 1) {
        CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
        pointSize = static_cast<ParticleCUI::PointSize>(args[1].asNumber().toInt32());
    }
    std::string color = "W";
    if (args.size() > 2) {
        CHECK_ARG_TYPE(args[2], ValueKind::kString);
        color = args[2].asString().toString();
    }
    ParticleCUI::drawPoint(pos, dimId, pointSize, getColorType(color));
    return Boolean::newBoolean(true);
}

Local<Value> ParticleSpawner::drawNumber(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    Vec3 pos;
    int dimId;
    GETVEC3(pos, dimId, args[0])
    std::string numName;
    std::string color = "W";
    if (args.size() > 2) {
        CHECK_ARG_TYPE(args[2], ValueKind::kString);
        color = args[2].asString().toString();
    }
    if (args[1].getKind() == ValueKind::kNumber || args[1].getKind() == ValueKind::kString) {
        numName = args[1].asString().toString();
    } else {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    ParticleCUI::spawnParticle(pos, std::string("ll:num") + numName + color, dimId);
    return Boolean::newBoolean(true);
}
Local<Value> ParticleSpawner::drawAxialLine(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 3);
    Vec3 pos;
    int dimId;
    ParticleCUI::Direction direction;
    double length;
    GETVEC3(pos, dimId, args[0])
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    direction = static_cast<ParticleCUI::Direction>(args[1].asNumber().toInt32());
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
    length = args[2].asNumber().toDouble();
    std::string color = "W";
    if (args.size() > 3) {
        CHECK_ARG_TYPE(args[3], ValueKind::kString);
        color = args[3].asString().toString();
    }
    ParticleCUI::drawAxialLine(pos, direction, length, dimId, getColorType(color));
    return Boolean::newBoolean(true);
}
Local<Value> ParticleSpawner::drawOrientedLine(const Arguments& args) {
    auto size = args.size();
    CHECK_ARGS_COUNT(args, 2);
    Vec3 start;
    Vec3 end;
    int dimId1;
    int dimId2;
    auto lineWidth = ParticleCUI::PointSize::PX4;
    double minSpacing = 1;
    int maxParticlesNum = 64;
    GETVEC3(start, dimId1, args[0])
    GETVEC3(end, dimId2, args[1])
    if (dimId1 != dimId2) {
        LOG_ERROR_WITH_SCRIPT_INFO("Pos should in the same dimension!");
        return Local<Value>();
    }

    if (size > 2) {
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
        lineWidth = static_cast<ParticleCUI::PointSize>(args[2].asNumber().toInt32());
    }

    if (size > 3) {
        CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
        minSpacing = args[3].asNumber().toDouble();
    }

    if (size > 4) {
        CHECK_ARG_TYPE(args[4], ValueKind::kNumber);
        maxParticlesNum = args[4].asNumber().toInt32();
    }

    std::string color = "W";
    if (args.size() > 5) {
        CHECK_ARG_TYPE(args[5], ValueKind::kString);
        color = args[5].asString().toString();
    }

    ParticleCUI::drawOrientedLine(start, end, dimId1, lineWidth, minSpacing, maxParticlesNum, getColorType(color));

    return Boolean::newBoolean(true);
}
Local<Value> ParticleSpawner::drawCuboid(const Arguments& args) {
    auto size = args.size();
    CHECK_ARGS_COUNT(args, 1);
    Vec3 min;
    Vec3 max;
    int dimId1;
    int dimId2 = -1;
    std::string color = "W";

    if (IsInstanceOf<IntPos>(args[0])) {
        auto pos2 = EngineScope::currentEngine()->getNativeInstance<IntPos>(args[0]);
        min = Vec3(pos2->x, pos2->y, pos2->z);
        dimId1 = pos2->dim;
    } else if (IsInstanceOf<FloatPos>(args[0])) {
        auto pos2 = EngineScope::currentEngine()->getNativeInstance<FloatPos>(args[0]);
        min = Vec3(pos2->x, pos2->y, pos2->z);
        dimId1 = pos2->dim;
    } else {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    if (size > 1) {
        if (IsInstanceOf<IntPos>(args[1])) {
            auto pos2 = EngineScope::currentEngine()->getNativeInstance<IntPos>(args[1]);
            max = Vec3(pos2->x, pos2->y, pos2->z) + 1;
            dimId2 = pos2->dim;
        } else if (IsInstanceOf<FloatPos>(args[1])) {
            auto pos2 = EngineScope::currentEngine()->getNativeInstance<FloatPos>(args[1]);
            max = Vec3(pos2->x, pos2->y, pos2->z);
            dimId2 = pos2->dim;
        } else {
            max = min + 1;
            CHECK_ARG_TYPE(args[1], ValueKind::kString);
            color = args[1].asString().toString();
            return Local<Value>();
        }
    } else {
        max = min + 1;
    }

    if (dimId2 != -1 && dimId1 != dimId2) {
        LOG_ERROR_WITH_SCRIPT_INFO("Pos should in the same dimension!");
        return Local<Value>();
    }

    if (size > 2) {
        CHECK_ARG_TYPE(args[2], ValueKind::kString);
        color = args[2].asString().toString();
    }

    ParticleCUI::drawCuboid(AABB(min, max), dimId1, getColorType(color));

    return Boolean::newBoolean(true);
}
Local<Value> ParticleSpawner::drawCircle(const Arguments& args) {
    auto size = args.size();
    CHECK_ARGS_COUNT(args, 3);
    Vec3 pos;
    int dimId;
    ParticleCUI::Direction facing;
    double radius;
    GETVEC3(pos, dimId, args[0])
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
    facing = static_cast<ParticleCUI::Direction>(args[1].asNumber().toInt32());
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
    radius = args[2].asNumber().toDouble();

    auto lineWidth = ParticleCUI::PointSize::PX4;
    double minSpacing = 1;
    int maxParticlesNum = 64;

    if (size > 3) {
        CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
        lineWidth = static_cast<ParticleCUI::PointSize>(args[3].asNumber().toInt32());
    }

    if (size > 4) {
        CHECK_ARG_TYPE(args[4], ValueKind::kNumber);
        minSpacing = args[4].asNumber().toDouble();
    }

    if (size > 5) {
        CHECK_ARG_TYPE(args[5], ValueKind::kNumber);
        maxParticlesNum = args[5].asNumber().toInt32();
    }

    std::string color = "W";
    if (args.size() > 6) {
        CHECK_ARG_TYPE(args[6], ValueKind::kString);
        color = args[6].asString().toString();
    }

    ParticleCUI::drawCircle(pos, facing, radius, dimId, lineWidth, minSpacing, maxParticlesNum, getColorType(color));

    return Boolean::newBoolean(true);
}

ClassDefine<ParticleSpawner> ParticleSpawnerBuilder =
    defineClass<ParticleSpawner>("ParticleSpawner")
        .constructor(&ParticleSpawner::create)
        .instanceProperty("displayRadius", &ParticleSpawner::getDisplayRadius, &ParticleSpawner::setDisplayRadius)
        .instanceProperty("highDetial", &ParticleSpawner::getHighDetial, &ParticleSpawner::setHighDetial)
        .instanceProperty("doubleSide", &ParticleSpawner::getDoubleSide, &ParticleSpawner::setDoubleSide)

        .instanceFunction("spawnParticle", &ParticleSpawner::spawnParticle)
        .instanceFunction("drawPoint", &ParticleSpawner::drawPoint)
        .instanceFunction("drawNumber", &ParticleSpawner::drawNumber)
        .instanceFunction("drawAxialLine", &ParticleSpawner::drawAxialLine)
        .instanceFunction("drawOrientedLine", &ParticleSpawner::drawOrientedLine)
        .instanceFunction("drawCuboid", &ParticleSpawner::drawCuboid)
        .instanceFunction("drawCircle", &ParticleSpawner::drawCircle)
        .build();
// clang-format off
ClassDefine<void> ParticleColorBuilder =
    defineClass("ParticleColor")
        .property("Black",    []() { return String::newString("B"); })
        .property("Indigo",   []() { return String::newString("I"); })
        .property("Lavender", []() { return String::newString("L"); })
        .property("Teal",     []() { return String::newString("T"); })
        .property("Cocoa",    []() { return String::newString("C"); })
        .property("Dark",     []() { return String::newString("D"); })
        .property("Oatmeal",  []() { return String::newString("O"); })
        .property("White",    []() { return String::newString("W"); })
        .property("Red",      []() { return String::newString("R"); })
        .property("Apricot",  []() { return String::newString("A"); })
        .property("Yellow",   []() { return String::newString("Y"); })
        .property("Green",    []() { return String::newString("G"); })
        .property("Vatblue",  []() { return String::newString("V"); })
        .property("Slate",    []() { return String::newString("S"); })
        .property("Pink",     []() { return String::newString("P"); })
        .property("Fawn",     []() { return String::newString("F"); })
        .build();
// clang-format on

// clang-format off
ClassDefine<void> DirectionBuilder =
    defineClass("Direction")
        .property("NEG_Y", []() { return Number::newNumber(0); })
        .property("POS_Y", []() { return Number::newNumber(1); })
        .property("NEG_Z", []() { return Number::newNumber(2); })
        .property("POS_Z", []() { return Number::newNumber(3); })
        .property("NEG_X", []() { return Number::newNumber(4); })
        .property("POS_X", []() { return Number::newNumber(5); })
        .build();
// clang-format on