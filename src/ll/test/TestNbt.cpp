#include "ll/api/memory/Hook.h"
#include "ll/api/utils/FileHelper.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/common/ColorFormat.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerInstance.h"

LL_AUTO_TYPED_INSTANCE_HOOK(
    NbtTest,
    ll::memory::HookPriority::Normal,
    ServerInstance,
    &ServerInstance::startServerThread,
    void
) {
    origin();

    auto nbt = CompoundTag{
        {
         {"string?", StringTag{R"(streee _ _o-ix 我超, utf8 "\asfa%"*)##q)$\\"\Q34\\""'':)"}},
         {"num", 1_i},
         {"nums", 3_s},
         {"byte", 127_b},
         {"list",
             ListTag{
                 5_b,
                 ByteTag{true},
                 ByteTag{false},
                 ByteTag{-2},
             }},
         {"compound",
             CompoundTag{{
                 {"float", 0.1_f},
                 {"long", 10000_l},
                 {"double", 0.3_d},
                 {"sdouble", 1.0_d},
             }}},
         {"bytearray", ByteArrayTag{{1, 2, 3, 4, 5, -2, -3, -6}}},
         {"intarray", IntArrayTag{{1, 2, 3, 4, 5, -2, -3, -6}}},
         }
    };

    nbt["some"]["new"]["compound"]          = nbt;
    nbt["hello"]["789\xDB\xFE"]["\u123456"] = StringTag{std::string{R"(\n\t\r\b\u1234\uffffffff)"} + "\xDB\xFE"};


    auto nbt2 = *CompoundTag::fromSnbt(R"(

{
    "byte": 127b,
    "bytearray": [B;1b, 2b, 3b, 4b, 5b, -2b, -3b, -6b],
    "compound": {
        "sdouble": 1.0 /*d*/,
        "double": 0.3D,
        "float": 0.1f,
        "long": 10000l
    },
    "hello": {
        "Nzg52/4=" /*BASE64*/: {
            "ሴ56": "XG5cdFxyXGJcdTEyMzRcdWZmZmZmZmZm2/4=" /*BASE64*/  // hellow
        }
    },
    "intarray": [I;1, 2, 3, 4, 5, -2, -3, -6],
    "list": [5b, 1b, 0b, -2b],
    "num": 1,
    "nums": 3s,
    "some": {
        "new": {
            "compound": {
                "byte": 127b,
                "bytearray": [B;1b, 2b, 3b, 4b, 5b, -2b, -3b, -6b],  // orld   /**/ /*     34t */
                "compound": {
                    "sdouble": 1.0 /*d*/,
                    "double": 0.3D,
                    "float": 0.1f,
                    "long": 10000l
                },
                "intarray": [ /*I;*/1,2,3,4,5,-2,-3,-6],
                "list": [
                    5 /*b*/,
                    1 /*b*/,
                    0 /*b*/,
                    -2 /*b*/
                ],
                "num": 1,
                "nums": 3s,
                "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':"
            }
        }
    },
    "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':"
}

    )");


    ll::logger.debug("\n{}", nbt.toSnbt(SnbtFormat::PrettyConsolePrint));

    ll::logger.debug("\n{}", nbt2.toSnbt(SnbtFormat::Colored | SnbtFormat::Console | SnbtFormat::Jsonify));

    ll::logger.debug(
        "\n{}",
        ((StringTag*)(Tag::parseSnbt(StringTag{nbt2.toNetworkNBT()}.toSnbt()).get()))
            ->toSnbt(SnbtFormat::PrettyConsolePrint | SnbtFormat::ForceAscii)
    );

    ll::logger.debug("\n{}", nbt.equals(nbt2));

    ll::logger.debug("\n{}", nbt.toSnbt() == nbt2.toSnbt());

    ll::logger.debug("\n{}", nbt.toBinaryNBT() == nbt2.toBinaryNBT());

    ll::logger.debug("\n{}", nbt.toNetworkNBT() == nbt2.toNetworkNBT());

    ll::logger.debug("\n{}", nbt.toNetworkNBT() == nbt.toNetworkNBT());

    ll::logger.debug("\n{}", nbt.toBinaryNBT() == nbt.toBinaryNBT());

    ll::logger.debug(ColorFormat::AQUA);
    ll::logger.debug(ColorFormat::MINECOIN_GOLD);
    ll::logger.debug(ColorFormat::LIGHT_PURPLE);
    ll::logger.debug(ColorFormat::ColorFromColorCode(ColorFormat::AQUA)->toString());
    ll::logger.debug(ColorFormat::ColorFromColorCode(ColorFormat::MINECOIN_GOLD)->toString());
    ll::logger.debug(ColorFormat::ColorFromColorCode(ColorFormat::LIGHT_PURPLE)->toString());
    ll::logger.debug(ColorFormat::ColorFromColorCode(ColorFormat::LIGHT_PURPLE)->toString());
    ll::logger.debug("{}", ColorFormat::FormatCodeFromName("Bold"));

    using namespace ll::StringUtils;

    ll::logger.debug("\n{}", replaceAnsiToMcCode(nbt.toSnbt(SnbtFormat::Colored | SnbtFormat::Console)));
}