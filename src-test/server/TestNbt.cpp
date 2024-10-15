#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/math/Color.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerInstance.h"
#include "mc/util/ColorFormat.h"

#include "nlohmann/json.hpp"

LL_AUTO_TYPE_INSTANCE_HOOK(NbtTest, HookPriority::Normal, ServerInstance, &ServerInstance::startServerThread, void) {
    origin();

    using namespace ll::literals;

    auto nbt = CompoundTag{
        {"anull",     nullptr                                                           },
        {"string?",   R"(streee _ _o-ix 我超, utf8 "\asfa%"*)##q)$\\"\Q34\\""'':)"_tag},
        {"1num",      1                                                                 },
        {"nums",      (int16)3                                                          },
        {"byte",      (int8)127                                                         },
        {"list",      ListTag{5_b, ByteTag{true}, ByteTag{false}, -2_b}                 },
        {"compound",
         CompoundTag{
             {"float", 0.1f},
             {"long", 10000ull},
             {"double", 0.3},
             {"sdouble", 1.0},
         }                                                                              },
        {"bytearray", ByteArrayTag{1, 2, 3, 4, 5, 62, 63, 66}                           },
        {"intarray",  IntArrayTag{1, 2, 3, 4, 5, -2, -3, -6}                            },
    };

    nbt["some"]["new"]["compound"]          = nbt;
    nbt["hello"]["789\xDB\xFE"]["\u123456"] = std::string{R"(\n\t\r\b\u1234\uffffffff)"} + "\xDB\xFE";


    nlohmann::json j{
        {"num",  1        },
        {"nums", (int16)3 },
        {"byte", (int8)127}
    };
    j["some"]["new"]["json"] = 2;

    size_t iter = 0;

    std::string_view snbt2{R"(

{
    anull = null,
    byte = 127b,
    bytearray = [B;1b, 2b, 3b, 4b, 5b, 62b, 63b, 66b],
    compound = {
        sdouble = 1.0 /*d*/,
        double = 0.3D,
        float = 0.1f,
        long = 10000l
    },
    hello = {
        "Nzg52/4=" /*BASE64*/= {
            'ሴ56' = "XG5cdFxyXGJcdTEyMzRc\
                //hi
            dWZmZmZmZmZm2/4=" /*BASE64*/ // hellow
        }
    },
    intarray = [I;1, 2, 3, 4, 5, -2, -3, -6],
    list = [5b, 1b, 0b, -2b],
    1num = 1,
    nums = 3s,                # teabawwb 4atg @zg5y 
    some = {
        new = {              ; hi
            compound = {
                anull = null,
                "byte" = 127b
                "bytearray" = [B;1b, 2b, 3b, 4b, 5b, 62b, 63b, 66b],  // orld   /**/ /*     34t */
                "compound" = {
                    "sdouble" = 1.0 /*d*/
                    "double" = 0.3D
                    "float" = 0.1f
                    "long" = 10000l
                }
                "intarray": [ /*I;*/1,2,3,4,5,-2,-3,-6]
                list = [
                    5 /*b*/
                    1 /*b*/
                    0 /*b*/,
                    -2 /*b*/,
                ]
                "1num": 1
                'nums': 3s
                "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':",
            }
        }
    }
    "string?": "streee _ _o-ix 我超, utf8 \"\\asfa%\"*)##q)$\\\\\"\\Q34\\\\\"\"'':"
}

    )"};

    auto nbt2 = CompoundTag::fromSnbt(snbt2, iter);


    if (!nbt2) {

        ll::getLogger().debug(
            "{}, at: \"{}\"",
            nbt2.error().message(),
            std::string_view{
                snbt2.data() + std::max(0ll, (int64)iter - 8ll),
                snbt2.data() + std::min(snbt2.size() - 1, iter + 8)
            }
        );
    } else {
        ll::getLogger().debug("success {} {}", iter, snbt2.size());
    }

    CompoundTag nbt3;

    nbt3["hello"]["world"] = ListTag{1.0, 2.0, 3.0};

    nbt3["hello"]["world"][1] = 7.0_d;

    nbt3["hello"][", "] = "world";

    ll::getLogger().debug("\n{}", nbt3["hello"][", "] == "world");

    ll::getLogger().debug("\n{}", nbt.toSnbt(SnbtFormat::Colored | SnbtFormat::Console | SnbtFormat::Jsonify));

    ll::getLogger().debug("\n{}", nbt.toSnbt(SnbtFormat::PrettyConsolePrint));
    ll::getLogger().debug("\n{}", nbt2.value().toSnbt(SnbtFormat::PrettyConsolePrint));

    ll::getLogger().debug("\n{}", nbt3.toSnbt(SnbtFormat::PrettyConsolePrint));

    ll::getLogger().debug(
        "\n{}",
        CompoundTagVariant::parse(StringTag{nbt2.value().toNetworkNbt()}.toSnbt())
            ->get<StringTag>()
            .toSnbt(SnbtFormat::PrettyConsolePrint | SnbtFormat::ForceAscii)
    );

    ll::getLogger().debug("\n{}", nbt.equals(nbt2.value()));

    ll::getLogger().debug("\n{}", nbt.toSnbt() == nbt2.value().toSnbt());

    ll::getLogger().debug(
        "\n{}",
        CompoundTag::fromBinaryNbt(nbt.toBinaryNbt()).value()
            == CompoundTag::fromBinaryNbt(nbt2.value().toBinaryNbt()).value()
    );
    ll::getLogger().debug("\n{}", nbt.toBinaryNbt() == nbt2.value().toBinaryNbt());

    ll::getLogger().debug(
        "\n{}",
        CompoundTag::fromNetworkNbt(nbt.toNetworkNbt()).value()
            == CompoundTag::fromNetworkNbt(nbt2.value().toNetworkNbt()).value()
    );

    ll::getLogger().debug("\n{}", nbt.toNetworkNbt() == nbt2.value().toNetworkNbt());


    ll::getLogger().debug(ColorFormat::AQUA);
    ll::getLogger().debug(ColorFormat::MINECOIN_GOLD);
    ll::getLogger().debug(ColorFormat::LIGHT_PURPLE);

    using namespace ll::string_utils;

    ll::getLogger().debug(
        "\n{}",
        replaceMcToAnsiCode(replaceAnsiToMcCode(nbt.toSnbt(SnbtFormat::Colored | SnbtFormat::Console)))
    );
    ll::getLogger().debug("\n{}", replaceMcToAnsiCode(nbt2.value().toSnbt(SnbtFormat::Colored)));


    ll::getLogger().debug(
        "\n{}",
        CompoundTag::fromSnbt(R"({
    Findable: 0b,
    Items: [],
    id: Chest,
    isMovable: 1b,
    x: -3,
    y: 88,
    z: -1
})")
            ->toSnbt(SnbtFormat::PrettyConsolePrint)
    );

    ll::getLogger().debug("signature {}", "48 8D 05 ? ? ? ? E8"_sig.toString(false, false));
    ll::getLogger().debug("resolve   {}", "48 8D 05 ? ? ? ? E8"_sig.resolve());
}
