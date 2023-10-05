#include "mc/nbt/CompoundTag.h"

#include "liteloader/api/memory/Hook.h"
#include "liteloader/api/utils/FileHelper.h"
#include "liteloader/core/LiteLoader.h"
#include "mc/server/ServerInstance.h"

#include "mc/common/ColorFormat.h"
#include "mc/deps/core/mce/Color.h"

LL_AUTO_TYPED_INSTANCE_HOOK(
    NbtTest,
    ServerInstance,
    ll::memory::HookPriority::Normal,
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
    nbt["hello"]["world"]["\u123456"] = StringTag{R"(\u1234\uffffffff)"};


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
            "s56": "\n\t\r\b\\u1234\\uffffffff"
        }
    },
    'intarray': [I;1, 2, 3, 4, 5, -2, -3, -6],
    list: [5b, true,false, -2b],
    num: 1,
    nums: 3s,   /* nmmmmmm*/    
    "some": {
        "new": {
            "compound": {    //hhhhhhhhh   
                "byte": 127b,
                "bytearray": [B;1b, 2b, 3b, 4b, 5b, -2b, -3b, -6b],
                "compound": {
                    "double": 0.3,
                    "float": 0.1f,
                    "long": 10000l
                },
                "intarray": [I;1, 2, 3, 4, 5, -2, -3, -6],
                "list": [5b, true, 0b, -2b],
                "num": 1,
                "nums": 3s,
                "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':"
            }
        }
    },
    "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':"
}

    )");


    ll::logger.info("\n{}", nbt.toSnbt(4, SnbtFormat::PrettyConsolePrint));

    ll::logger.info("\n{}", nbt2.toSnbt(4, SnbtFormat::PrettyConsolePrint));

    ll::logger.info(ColorFormat::AQUA);
    ll::logger.info(ColorFormat::MINECOIN_GOLD);
    ll::logger.info(ColorFormat::LIGHT_PURPLE);
    ll::logger.info(ColorFormat::ColorFromColorCode(ColorFormat::AQUA)->toString());
    ll::logger.info(ColorFormat::ColorFromColorCode(ColorFormat::MINECOIN_GOLD)->toString());
    ll::logger.info(ColorFormat::ColorFromColorCode(ColorFormat::LIGHT_PURPLE)->toString());
    ll::logger.info(ColorFormat::ColorFromColorCode(ColorFormat::LIGHT_PURPLE)->toString());
    ll::logger.info("{}", ColorFormat::FormatCodeFromName("Bold"));
}