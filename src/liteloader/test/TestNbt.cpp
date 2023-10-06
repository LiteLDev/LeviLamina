#include "mc/nbt/CompoundTag.h"

#include "liteloader/api/memory/Hook.h"
#include "liteloader/api/utils/FileHelper.h"
#include "liteloader/core/LiteLoader.h"
#include "mc/server/ServerInstance.h"

#include "mc/common/ColorFormat.h"
#include "mc/deps/core/mce/Color.h"

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
             }}},
         {"bytearray", ByteArrayTag{{1, 2, 3, 4, 5, -2, -3, -6}}},
         {"intarray", IntArrayTag{{1, 2, 3, 4, 5, -2, -3, -6}}},
         }
    };

    nbt["some"]["new"]["compound"]    = nbt;
    nbt["hello"]["world"]["\u123456"] = StringTag{R"(\n\t\r\b\u1234\uffffffff)"};


    auto nbt2 = *CompoundTag::fromSnbt(R"(

{
    "byte": 127b,
    "bytearray": [B;1b, 2b, 3b, 4b, 5b, -2b, -3b, -6b],
    "compound": {
        "double": 0.3,
        "float": 0.1f,
        "long": 10000l
    },
    "hello": {
        "world": {
            "\u123456": "\\n\\t\\r\\b\\u1234\\uffffffff"
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
                "bytearray": [B;1b, 2b, 3b, 4b, 5b, -2b, -3b, -6b],
                "compound": {
                    "double": 0.3,
                    "float": 0.1f,
                    "long": 10000l
                },
                "intarray": [I;1, 2, 3, 4, 5, -2, -3, -6],
                "list": [5b, 1b, 0b, -2b],
                "num": 1,
                "nums": 3s,
                "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':"
            }
        }
    },
    "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':"
}

    )");


    ll::logger.info("\n{}", nbt.toSnbt(SnbtFormat::PrettyConsolePrint));

    ll::logger.info("\n{}", nbt2.toSnbt(SnbtFormat::PrettyConsolePrint));

    ll::logger.info("\n{}", nbt.equals(nbt2));

    ll::logger.info("\n{}", nbt.toSnbt() == nbt2.toSnbt());

    ll::logger.info("\n{}", nbt.toBinaryNBT() == nbt2.toBinaryNBT());

    ll::logger.info("\n{}", nbt.toNetworkNBT() == nbt2.toNetworkNBT());

    ll::logger.info("\n{}", StringTag{nbt.toBinaryNBT()}.toSnbt(SnbtFormat::PrettyConsolePrint));
    ll::logger.info("\n{}", StringTag{nbt2.toBinaryNBT()}.toSnbt(SnbtFormat::PrettyConsolePrint));

    ll::logger.info("\n{}", StringTag{nbt.toNetworkNBT()}.toSnbt(SnbtFormat::PrettyConsolePrint));
    ll::logger.info("\n{}", StringTag{nbt2.toNetworkNBT()}.toSnbt(SnbtFormat::PrettyConsolePrint));

    ll::logger.info(
        "\n{}",
        ((StringTag*)(Tag::parseSnbt(StringTag{nbt2.toNetworkNBT()}.toSnbt()).get()))
            ->toSnbt(SnbtFormat::PrettyConsolePrint | SnbtFormat::ForceAscii)
    );

    ll::logger.info("\n{}", nbt.toNetworkNBT() == nbt.toNetworkNBT());

    ll::logger.info("\n{}", nbt.toBinaryNBT() == nbt.toBinaryNBT());

    ll::logger.info(ColorFormat::AQUA);
    ll::logger.info(ColorFormat::MINECOIN_GOLD);
    ll::logger.info(ColorFormat::LIGHT_PURPLE);
    ll::logger.info(ColorFormat::ColorFromColorCode(ColorFormat::AQUA)->toString());
    ll::logger.info(ColorFormat::ColorFromColorCode(ColorFormat::MINECOIN_GOLD)->toString());
    ll::logger.info(ColorFormat::ColorFromColorCode(ColorFormat::LIGHT_PURPLE)->toString());
    ll::logger.info(ColorFormat::ColorFromColorCode(ColorFormat::LIGHT_PURPLE)->toString());
    ll::logger.info("{}", ColorFormat::FormatCodeFromName("Bold"));
}