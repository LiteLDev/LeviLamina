#define COMMAND_REGISTRY_EXTRA
#include <vector>

#include "mc/CommandRegistry.hpp"
#include "mc/CommandParameterData.hpp"
#include "mc/AvailableCommandsPacket.hpp"
#include "liteloader/api/RegCommandAPI.h"
#include "liteloader/api/LoggerAPI.h"

#include "liteloader/core/LiteLoader.h"

using ll::logger;
static_assert(offsetof(CommandParameterData, options) == 73);
static_assert(offsetof(CommandParameterData, name) == 16);
static_assert(offsetof(CommandParameterData, unk56) == 56);
static_assert(offsetof(CommandRegistry::Overload, unk) == 40);
static_assert(sizeof(CommandRegistry::Overload) == 72);
static_assert(offsetof(CommandRegistry::Signature, alt_symbol) == 96);
static_assert(sizeof(CommandRegistry::Signature) == 120);
/*
void CommandRegistry::registerOverload(std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args)
{
    Signature* signature = const_cast<Signature*>(findCommand(name));
    auto& overload = signature->overloads.emplace_back(CommandVersion{}, factory, std::move(args));
    registerOverloadInternal(*signature, overload);
}*/

CommandRegistry::Overload::Overload(CommandVersion version,
                                    FactoryFn factory,
                                    std::vector<CommandParameterData>&& args)
: version(version)
, factory(factory)
, params(std::forward<std::vector<CommandParameterData>>(args))
, unk(255){};

CommandRegistry::Overload::~Overload(){};

std::vector<std::string> CommandRegistry::getEnumNames() {
    if (!Global<CommandRegistry>)
        return {};
    std::vector<std::string> results;
    for (auto& e : Global<CommandRegistry>->mEnums)
        results.push_back(e.name);
    return results;

    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    return packet.getEnumNames();
}
std::vector<std::string> CommandRegistry::getSoftEnumNames() {
    if (!Global<CommandRegistry>)
        return {};
    std::vector<std::string> results;
    for (auto& e : Global<CommandRegistry>->mSoftEnums)
        results.push_back(e.name);
    return results;

    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    return packet.getEnumNames();
}
std::vector<std::string> CommandRegistry::getEnumValues(std::string const& name) {
    if (!Global<CommandRegistry>)
        return {};
    std::vector<std::string> results;
    auto& enums = Global<CommandRegistry>->mEnums;
    auto iter = std::find_if(enums.begin(), enums.end(), [&](CommandRegistry::Enum const& r) { return r.name == name; });
    if (iter == enums.end())
        return results;
    for (auto& i : iter->values)
        results.push_back(Global<CommandRegistry>->mEnumValues.at(std::get<3>(i)));
    return results;

    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    return packet.getEnumValues(name);
}
std::vector<std::string> CommandRegistry::getSoftEnumValues(std::string const& name) {
    if (!Global<CommandRegistry>)
        return {};
    std::vector<std::string> results;
    auto& enums = Global<CommandRegistry>->mSoftEnums;
    auto iter = std::find_if(enums.begin(), enums.end(), [&](CommandRegistry::SoftEnum const& r) { return r.name == name; });
    if (iter != enums.end())
        return iter->list;
    return {};

    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    return packet.getEnumValues(name);
}
std::string CommandRegistry::getCommandFullName(std::string const& name) {
    if (!Global<CommandRegistry>)
        return "";
    auto sig = Global<CommandRegistry>->findCommand(name);
    if (sig)
        return sig->name;
    return "";
}

#include "liteloader/core/Config.h"
bool CommandRegistry::unregisterCommand(std::string const& name) {
    if (!ll::globalConfig.debugMode) {
        logger.error("unregister command is only enabled in debug mode");
        return false;
    }
    logger.warn("Unregister Command \"{}\"!", name);
    try {
        auto command = getCommandFullName(name);
        if (command.empty())
            return false;
        auto alias = getAliases(name);
        auto aliasKey = command + "CommandAliases";
        static size_t removeIndex = 0;
        auto iter = std::find_if(mEnums.begin(), mEnums.end(), [](Enum const& e) { return e.name == "CommandName"; });
        for (auto i = iter->values.begin(); i != iter->values.end();) {
            auto& enumValue = mEnumValues.at(std::get<3>(*i));
            if (enumValue == command || std::find(alias.begin(), alias.end(), enumValue) != alias.end()) {
                mEnumValueLookup.erase(enumValue);
                i = iter->values.erase(i);
                enumValue = fmt::format("removed_{}", removeIndex++);
            } else {
                ++i;
            }
        }
        auto aliasIter = std::find_if(mEnums.begin(), mEnums.end(), [&aliasKey](Enum const& e) { return e.name == aliasKey; });
        if (aliasIter != mEnums.end()) {
            aliasIter->values.clear();
            mEnumLookup.erase(aliasIter->name);
            aliasIter->name = fmt::format("removed_{}", removeIndex++);
        }
        auto sig = mSignatures.find(command);
        if (sig == mSignatures.end())
            return false;
        {
            auto symbolIter = std::remove_if(mCommandSymbols.begin(), mCommandSymbols.end(),
                                       [&](Symbol const& r) { return r == sig->second.main_symbol || r == sig->second.alt_symbol; });
            if (symbolIter != mCommandSymbols.end())
                mCommandSymbols.erase(symbolIter, mCommandSymbols.end());
        }
        //{
        //    auto iter = std::remove_if(mRules.begin(), mRules.end(),
        //                               [&](ParseRule const& r) { return r.sym == sig->second.main_symbol || r.sym == sig->second.alt_symbol; });
        //    if (iter == mRules.end())
        //        mRules.erase(iter, mRules.end());
        //};
        {
            auto factorizationIter = std::remove_if(mFactorizations.begin(), mFactorizations.end(),
                                       [&](Factorization const& r) { return r.sym == sig->second.main_symbol || r.sym == sig->second.alt_symbol; });
            if (factorizationIter != mFactorizations.end())
                mFactorizations.erase(factorizationIter, mFactorizations.end());
        };

        mSignatures.erase(sig);
        mAliases.erase(command);
        return true;
    } catch (...) {
        logger.error("Error in CommandRegistry::unregisterCommand");
    }
    return false;
}

inline void CommandRegistry::printAll() const {
    logger.error("mRules");
    for (auto& rule : mRules) {
        logger.warn("{}", rule.toDebugString());
    }
    logger.error("mParseTableMap");
    for (auto& [key, table] : mParseTableMap) {
        logger.warn("{}: {}", key, table.toDebugString());
    }
    logger.error("mOptionals");
    for (auto& optional : mOptionals) {
        logger.warn("{}", optional.toDebugString());
    }
    logger.error("mEnums");
    for (auto& en : mEnums) {
        logger.warn("{}", en.toDebugString());
    }
    logger.error("mFactorizations");
    for (auto& i : mFactorizations) {
        logger.warn("{}", i.toDebugString());
    }
    logger.error("mCommandSymbols");
    for (auto& i : mCommandSymbols) {
        logger.warn("{}", i.toDebugString());
    }
    logger.error("mSignatures");
    for (auto& [k, v] : mSignatures) {
        logger.warn("{}: {}", k, v.toDebugString());
    }
    logger.error("mConstrainedValues");
    for (auto& i : mConstrainedValues) {
        logger.warn("{}", i.toDebugString());
    }
}
inline void CommandRegistry::printSize() const {
    static auto log = std::unordered_map<std::string, std::string>{
        {"mRules                   ", ""},
        {"mParseTableMap           ", ""},
        {"mOptionals               ", ""},
        {"mEnumValues              ", ""},
        {"mEnums                   ", ""},
        {"mFactorizations          ", ""},
        {"mPostfixes               ", ""},
        {"mEnumLookup              ", ""},
        {"mEnumValueLookup         ", ""},
        {"mCommandSymbols          ", ""},
        {"mSignatures              ", ""},
        {"mTypeLookup              ", ""},
        {"unk376                   ", ""},
        {"mAliases                 ", ""},
        {"mSemanticConstraints     ", ""},
        {"mSemanticConstraintLookup", ""},
        {"mConstrainedValues       ", ""},
        {"mConstrainedValueLookup  ", ""},
        {"mSoftEnums               ", ""},
        {"mSoftEnumLookup          ", ""},
        {"mStateStack              ", ""},
        {"mEnumsValues             ", ""},
        {"mConstrainedValuesValues ", ""},
    };
    auto mEnumsValuesSize = ([&]() -> size_t {
        size_t size = 0;
        for (auto& i : mEnums) {
            size += i.values.size();
        }
        return size;
    })();
    auto mConstrainedValuesSize = ([&]() -> size_t {
        size_t size = 0;
        for (auto& i : mConstrainedValues) {
            size += i.mConstraints.size();
        }
        return size;
    })();
    log["mRules                   "].append(fmt::format(", {:4}", mRules.size()));
    log["mParseTableMap           "].append(fmt::format(", {:4}", mParseTableMap.size()));
    log["mOptionals               "].append(fmt::format(", {:4}", mOptionals.size()));
    log["mEnumValues              "].append(fmt::format(", {:4}", mEnumValues.size()));
    log["mEnums                   "].append(fmt::format(", {:4}", mEnums.size()));
    log["mFactorizations          "].append(fmt::format(", {:4}", mFactorizations.size()));
    log["mPostfixes               "].append(fmt::format(", {:4}", mPostfixes.size()));
    log["mEnumLookup              "].append(fmt::format(", {:4}", mEnumLookup.size()));
    log["mEnumValueLookup         "].append(fmt::format(", {:4}", mEnumValueLookup.size()));
    log["mCommandSymbols          "].append(fmt::format(", {:4}", mCommandSymbols.size()));
    log["mSignatures              "].append(fmt::format(", {:4}", mSignatures.size()));
    log["mTypeLookup              "].append(fmt::format(", {:4}", mTypeLookup.size()));
    log["unk376                   "].append(fmt::format(", {:4}", unk376.size()));
    log["mAliases                 "].append(fmt::format(", {:4}", mAliases.size()));
    log["mSemanticConstraints     "].append(fmt::format(", {:4}", mSemanticConstraints.size()));
    log["mSemanticConstraintLookup"].append(fmt::format(", {:4}", mSemanticConstraintLookup.size()));
    log["mConstrainedValues       "].append(fmt::format(", {:4}", mConstrainedValues.size()));
    log["mConstrainedValueLookup  "].append(fmt::format(", {:4}", mConstrainedValueLookup.size()));
    log["mSoftEnums               "].append(fmt::format(", {:4}", mSoftEnums.size()));
    log["mSoftEnumLookup          "].append(fmt::format(", {:4}", mSoftEnumLookup.size()));
    log["mStateStack              "].append(fmt::format(", {:4}", mStateStack.size()));
    log["mEnumsValues             "].append(fmt::format(", {:4}", mEnumsValuesSize));
    log["mConstrainedValuesValues "].append(fmt::format(", {:4}", mConstrainedValuesSize));
    for (auto& [k, v] : log) {
        logger.warn("{}{}", k, v);
    }
}

void CommandRegistry::registerOverload(
    std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args) {
    auto* signature = const_cast<Signature*>(findCommand(name));
    auto& overload = signature->overloads.emplace_back(CommandVersion{}, factory, std::move(args));
    registerOverloadInternal(*signature, overload);
}
