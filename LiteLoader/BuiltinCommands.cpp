#include <Global.h>
#include <LLAPI.h>
#include <ServerAPI.h>
#include <EventAPI.h>
#include <MC/CommandRegistry.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandOrigin.hpp>
#include <MC/CommandPosition.hpp>
#include <RegCommandAPI.h>
#include <filesystem>
#include <MC/Packet.hpp>
#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
void checkUpdate();
bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
    outp.success("The server is running Bedrock Dedicated Server " + LL::getBdsVersion() + " with LiteLoaderBDS " +
        LL::getLoaderVersionString() + "\nGithub: https://github.com/LiteLDev/LiteLoaderBDS", {});
    return true;
}

bool pluginsCommand(CommandOrigin const& ori, CommandOutput& outp, optional<string> pl) {
    if (pl.set) {
        std::string name = pl.val() + ".dll";
        auto plugin = LL::getPlugin(name);
        if (plugin) {
            std::ostringstream oss;
            auto fn = std::filesystem::path(plugin->filePath).filename().u8string();

            oss << "Plugin [" << name << ']' << std::endl;
            oss << "- Name: " << plugin->name << '(' << fn << ')' << std::endl;
            oss << "- Version: " << plugin->version << std::endl;
            oss << "- Introduction: " << plugin->introduction << std::endl;
            if (!plugin->git.empty())
                oss << "Git: " << plugin->git << std::endl;
            if (!plugin->license.empty())
                oss << "License: " << plugin->license << std::endl;
            if (!plugin->website.empty())
                oss << "Website: " << plugin->website << std::endl;
            auto text = oss.str();
            text.pop_back();
            outp.success(text, {});
        } else {
            outp.error("Plugin [" + name + "] is not found!", {});
        }
        return true;
    }
    auto plugins = LL::getAllPlugins();
    std::ostringstream oss;
    oss << "Plugin Lists[" << plugins.size() << "]\n";
    for (auto& [name, plugin] : plugins) {
        // Plugin List
        // - LiteLoader(LiteLoader.dll)[v1.0.0-Beta]: plugin introduction
        auto fn = std::filesystem::path(plugin.filePath).filename().u8string();
        oss << "- " << name << "(" << fn << ")[" << plugin.version << "]: "
            << plugin.introduction << std::endl;
    }
    oss << "\n* Send command \"plugins <Plugin Name>\" for more information";
    outp.success(oss.str(), {});
    return true;
}

// Test CommandPosition
#include "Header/MC/VanillaDimensions.hpp"
bool tpdimCommand(CommandOrigin const& ori, CommandOutput& outp, int dimid, optional<CommandPosition> cmdpos) {
    auto actor = const_cast<CommandOrigin&>(ori).getEntity();
    auto dim = VanillaDimensions::toString(dimid);
    if (!actor) {
        outp.error("", {});
        return false;
    }
    if (dimid < 0 || dimid > 3) {
        outp.error("Invaild dimid: " + std::to_string(dimid), {});
        return false;
    }
    auto pos = cmdpos.set ? cmdpos.val().getPosition(ori, {0, 0, 0}) : actor->getPos();
    actor->teleport(pos, dimid);
    outp.success(fmt::format("Teleported {} to {} ({:2f}, {:2f}, {:2f})",
                             actor->getNameTag(), dim, pos.x, pos.y, pos.z),{});
    return true;
}

enum class McstructureOption : int {
    save = 1,
    load = 2,
};
#include "Header/MC/CompoundTag.hpp"
#include "Header/MC/Dimension.hpp"
#include "Header/MC/ListTag.hpp"
#include "Header/MC/StructureTemplate.hpp"
#include "Header/Utils/FileHelper.h"
bool mcstructureCommand(CommandOrigin const& ori, CommandOutput& outp, MyEnum<McstructureOption> opt, std::string name, CommandPosition fromCpos, optional<CommandPosition> toCposOpt) {
    BlockPos from = fromCpos.getBlockPos(ori, {0, 0, 0});
    string filepath = fmt::format("plugins/liteloader/mcstructure/{}.mcstructure", name);
    int dimid = ori.getDimension()->getDimensionId();
    switch (opt) {
        case McstructureOption::load: {
            auto& nbtOpt = ReadAllFile(filepath, true);
            if (!nbtOpt.has_value()) {
                outp.error(fmt::format("File {} Not Found", filepath));
            } else {
                CompoundTag* tag = Tag::fromBinaryNBT((void*)nbtOpt.value().c_str(), nbtOpt.value().size());
                StructureTemplate& st = StructureTemplate::fromTag(name, tag);
                tag->destroy();
                bool result = st.toWorld(dimid, from, Mirror::None, Rotation::None);
                if (result) {
                    outp.success(fmt::format("Set structure success"));
                } else {
                    outp.error(fmt::format("Set structure failed"));
                }
            }
            break;
        }
        case McstructureOption::save: {
            if (!toCposOpt.set) {
                outp.error("Need <to> param");
            } else {
                BlockPos to = toCposOpt.val().getBlockPos(ori, {0, 0, 0}); //Vec3{(float)from.x, (float)from.y, (float)from.z}
                StructureTemplate& st = StructureTemplate::fromWorld(name, dimid, from, to);
                CompoundTag* tag = st.toTag().release();
                string nbt = tag->toBinaryNBT();
                tag->destroy();
                bool result = WriteAllFile(filepath, nbt, true);
                if (result) {
                    outp.success(fmt::format("Success to save structure file {}", filepath));
                } else {
                    outp.error(fmt::format("Failed to save structure file"));
                }
            }
            break;
        }
        default:
            break;
    }
    return outp.getSuccessCount();
}
enum class DataItemType : unsigned char;
class DataItem {
public:
    DataItemType type;
    uint16_t id;
    bool dirty;

    DataItem(DataItemType type, uint16_t id, bool dirty)
        : type(type)
        , id(id)
        , dirty(dirty) {
    }

    virtual ~DataItem() {
    }
    virtual bool isDataEqual(DataItem const& rhs) const = 0;
    virtual std::unique_ptr<DataItem> clone() const = 0;

    inline void setDirty() {
        dirty = true;
    }
    inline uint16_t getId() const {
        return id;
    }
};
class SynchedActorData {
public:
    std::vector<std::unique_ptr<DataItem>> datas;
    int unk24 = 0xFFFF;
};
#include <MC/ByteTag.hpp>
#include <MC/Util.hpp>
void testCompoundTag(CompoundTag* tag) {

    auto a = (ByteTag*)Tag::createTag(Tag::Type::Byte);
    tag->put("", std::move(*a));
    tag->putBoolean("Boolean", false);
    tag->putByte("Byte", 1);
    tag->putShort("Short", 2);
    tag->putInt("Int", 3);
    tag->putInt64("Int64", 4);
    tag->putFloat("Float", 5);
    tag->putDouble("Double", 6);
    string str = "1234567";
    uint8_t* written = new uint8_t[str.length()];
    memcpy(written, str.c_str(), str.length());
    TagMemoryChunk tmc(str.length(), written);
    tag->putByteArray("ByteArray", tmc.copy());
    tag->putString("String", "8");
    auto listtag = ListTag::create();
    tag->put("List", std::move(*listtag));
    auto cmptag = CompoundTag::create();
    tag->put("Compound", std::move(*cmptag));
    //string str2 = "12345678901";
    //TagMemoryChunk tmc2(str.length(), (uint8_t*)str.c_str());
    //tag->putIntArray("IntArray", tmc2);

    std::cout << std::endl
              << tag->get("");
    std::cout << std::endl
              << tag->getBoolean("Boolean");
    std::cout << std::endl
              << tag->getByte("Byte");
    std::cout << std::endl
              << tag->getShort("Short");
    std::cout << std::endl
              << tag->getInt("Int");
    std::cout << std::endl
              << tag->getInt64("Int64");
    std::cout << std::endl
              << tag->getFloat("Float");
    std::cout << std::endl
              << tag->getDouble("Double");
    std::cout << std::endl
              << tag->getByteArray("ByteArray").size;
    std::cout << std::endl
              << tag->getString("String");
    std::cout << std::endl
              << tag->getList("List");
    std::cout << std::endl
              << tag->getCompound("Compound");
    //std::cout<<std::endl<<tag->getIntArray("IntArray").size;

    *(*tag)["Byte"]->asByteTag() = 4;
    tag->getByteTag("Byte");
    tag->getShortTag("Short");
    tag->getIntTag("Int");
    tag->getInt64Tag("Int64");
    tag->getFloatTag("Float");
    tag->getDoubleTag("Double");
    tag->getByteArrayTag("ByteArray");
    tag->getStringTag("String");
    tag->getListTag("List");
    tag->getCompoundTag("Compound");
    //tag->getIntArrayTag("IntArray");
}

void testListTag(ListTag* tag) {
    int a = 0;
    //tag->add(std::make_unique<Tag>(*(Tag*)a));
    std::cout << std::endl
              << tag->get(0);
    tag->deleteChildren();
    tag->addByte(1);
    std::cout << std::endl
              << tag->getByte(0);
    tag->deleteChildren();
    tag->addShort(2);
    std::cout << std::endl
              << tag->getShort(0);
    tag->deleteChildren();
    tag->addInt(3);
    std::cout << std::endl
              << tag->getInt(0);
    tag->deleteChildren();
    tag->addInt64(4);
    std::cout << std::endl
              << tag->getInt64(0);
    tag->deleteChildren();
    tag->addFloat(5);
    std::cout << std::endl
              << tag->getFloat(0);
    tag->deleteChildren();
    tag->addDouble(6);
    std::cout << std::endl
              << tag->getDouble(0);
    tag->deleteChildren();
    //tag->addByteArray(*(TagMemoryChunk*)&a);
    //tag->getByteArray(0);
    //tag->deleteChildren();
    tag->addString("8");
    std::cout << std::endl
              << tag->getString(0);
    tag->deleteChildren();
    //tag->addList(*(ListTag*)&a);
    //tag->getList(0);
    //tag->addCompound(*(CompoundTag*)&a);
    //tag->getCompound(0);
    //tag->addIntArray(*(TagMemoryChunk*)&a);
    //tag->getIntArray(0);
}
bool testApiCommand(CommandOrigin const& ori, CommandOutput& outp) {
    auto tag = CompoundTag::create();
    testCompoundTag(tag);
    auto listtag = ListTag::create();
    listtag->add(tag);
    testListTag(listtag);
    return true;
}
static_assert(sizeof(std::vector<int>) == 24);

void registerCommands() {
    Event::addEventListener([](RegCmdEV ev) { // Register commands
        MakeCommand("version", "Get the version of this server", 0);
        MakeCommand("plugins", "View plugin information", 0);
        MakeCommand("tpdim", "Teleport", 0);

        CmdOverload(version, versionCommand);
        CmdOverload(plugins, pluginsCommand, "plugin name");
        CmdOverload(tpdim, tpdimCommand, "dimid", "position");

        // Test structure and enum
        CEnum<McstructureOption> _1("operation", {"save", "load"});
        MakeCommand("mcstructure", "View plugin information", 0);
        CmdOverload(mcstructure, mcstructureCommand, "operation", "name", "from", "to");

        // Export ActorDataIds
        MakeCommand("testapi", "View plugin information", 0);
        CmdOverload(testapi, testApiCommand);

    });
}