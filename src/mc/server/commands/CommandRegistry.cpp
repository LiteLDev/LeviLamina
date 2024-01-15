#include "mc/server/commands/CommandRegistry.h"
#include "ll/api/base/ErrorInfo.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandVersion.h"

CommandRegistry::Overload::Overload(CommandVersion version, FactoryFn factory, std::vector<CommandParameterData> args)
: Overload(version, factory) {
    params = std::move(args);
}

CommandRegistry::Signature::Signature(
    std::string_view       name,
    std::string_view       desc,
    CommandPermissionLevel perm,
    Symbol                 symbol,
    CommandFlag            flag
)
: name(name),
  desc(desc),
  perm(perm),
  main_symbol(symbol),
  flag(flag) {}

void CommandRegistry::registerOverload(
    std::string const&                  name,
    FactoryFn                           factory,
    std::vector<CommandParameterData>&& args
) {
    auto& signature = *findCommand(name);
    auto& overload  = signature.overloads.emplace_back(CommandVersion{}, factory, std::move(args));
    registerOverloadInternal(signature, overload);
}

std::vector<std::string> CommandRegistry::getEnumNames() {
    std::vector<std::string> results;
    results.reserve(this->mEnums.size());
    for (auto& e : this->mEnums) results.push_back(e.name);
    return results;
}

std::vector<std::string> CommandRegistry::getSoftEnumNames() {
    std::vector<std::string> results;
    results.reserve(this->mSoftEnums.size());
    for (auto& e : this->mSoftEnums) results.push_back(e.mName);
    return results;
}

std::vector<std::string> CommandRegistry::getEnumValues(std::string const& name) {
    std::vector<std::string> results;
    auto&                    enums = this->mEnums;
    auto                     iter =
        std::find_if(enums.begin(), enums.end(), [&](CommandRegistry::Enum const& r) { return r.name == name; });
    if (iter == enums.end()) return results;
    for (auto& i : iter->values) results.push_back(this->mEnumValues.at(std::get<3>(i)));
    return results;
}

std::vector<std::string> CommandRegistry::getSoftEnumValues(std::string const& name) {
    std::vector<std::string> results;
    auto&                    enums = this->mSoftEnums;
    auto                     iter =
        std::find_if(enums.begin(), enums.end(), [&](CommandRegistry::SoftEnum const& r) { return r.mName == name; });
    if (iter != enums.end()) return iter->mValues;
    return {};
}

std::string CommandRegistry::getCommandFullName(std::string const& name) {
    auto sig = this->findCommand(name);
    if (sig) return sig->name;
    return "";
}

bool CommandRegistry::unregisterCommand(std::string const& name) {
    ll::logger.warn("Unregister Command \"{}\"!", name);
    try {
        auto command = getCommandFullName(name);
        if (command.empty()) return false;
        auto          alias       = getAliases(name);
        auto          aliasKey    = command + "CommandAliases";
        static size_t removeIndex = 0;
        auto iter = std::find_if(mEnums.begin(), mEnums.end(), [](Enum const& e) { return e.name == "CommandName"; });
        for (auto i = iter->values.begin(); i != iter->values.end();) {
            auto& enumValue = mEnumValues.at(std::get<3>(*i));
            if (enumValue == command || std::find(alias.begin(), alias.end(), enumValue) != alias.end()) {
                mEnumValueLookup.erase(enumValue);
                i         = iter->values.erase(i);
                enumValue = fmt::format("removed_{}", removeIndex++);
            } else {
                ++i;
            }
        }
        auto aliasIter =
            std::find_if(mEnums.begin(), mEnums.end(), [&aliasKey](Enum const& e) { return e.name == aliasKey; });
        if (aliasIter != mEnums.end()) {
            aliasIter->values.clear();
            mEnumLookup.erase(aliasIter->name);
            aliasIter->name = fmt::format("removed_{}", removeIndex++);
        }
        if (!mSignatures.contains(command)) return false;

        auto sig = mSignatures.find(command);
        std::erase_if(mCommandSymbols, [&](Symbol const& r) {
            return r == sig->second.main_symbol || r == sig->second.alt_symbol;
        });

        std::erase_if(mFactorizations, [&](Factorization const& r) {
            return r.commandSymbol == sig->second.main_symbol || r.commandSymbol == sig->second.alt_symbol;
        });

        mSignatures.erase(sig);
        mAliases.erase(command);
        return true;
    } catch (...) {
        ll::error_info::printCurrentException(ll::logger);
    }
    return false;
}
