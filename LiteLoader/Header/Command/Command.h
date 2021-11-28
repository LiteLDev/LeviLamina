#pragma once
#include <cstdio>
#include <cstring>
#include <memory>
#include <utils/optional.h>
#include <string>
#include <string_view>
#include <MC/CommandOrigin.hpp>
#include <MC/HashedString.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>
#include <MC/Command.hpp>
#include <MC/CommandSelectorBase.hpp>
// MC_COMMAND_EXTRA
class CommandRegistry;
class CommandOrigin;
class CommandOutput;

template <typename T>
class CommandSelectorResults;

class CommandOutputParameter {
    std::string str;
    int type;
  public:
    MCINLINE CommandOutputParameter(std::string str, int type) : str(str), type(type) {}
};
class CommandOutput {
  public:
    MCINLINE void error(
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0,
        class std::vector<class CommandOutputParameter,
                          class std::allocator<class CommandOutputParameter>> const& a1 = {});
    
    MCINLINE void success(
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const& a0 = "",
        class std::vector<class CommandOutputParameter,
                          class std::allocator<class CommandOutputParameter>> const& a1 = {});
    void addMessage(std::string const &str);
};


template <typename T>
struct InvertableFilter {
    T value;
    bool inverted;
};

// static_assert(offsetof(CommandSelectorBase, explicitIdSelector) == 165);
template <typename T>
class CommandSelector : public CommandSelectorBase {
  public:
    MCINLINE CommandSelector() : CommandSelectorBase(std::is_same_v<T, Player>) {}
    CommandSelectorResults<T> results(CommandOrigin const &a0) {
        CommandSelectorResults<T> (CommandSelector<T>::*rv)(CommandOrigin const &a0);
        if constexpr (std::is_same_v<class Actor, T>) {
            *((void **)&rv) = dlsym(
                "?results@?$CommandSelector@VActor@@@@QEBA?AV?$CommandSelectorResults@VActor@@@@"
                "AEBVCommandOrigin@@@Z");
            return (this->*rv)(a0);
        } else {
            *((void **)&rv) = dlsym(
                "?results@?$CommandSelector@VPlayer@@@@QEBA?AV?$CommandSelectorResults@VPlayer@@@@"
                "AEBVCommandOrigin@@@Z");
            return (this->*rv)(a0);
        }
    }
};

template <typename T>
class CommandSelectorResults {
    std::shared_ptr<std::vector<T *>> data;

  public:
    auto begin() { return data->begin(); }
    auto end() { return data->end(); }
    auto count() const { return data->size(); }
    auto empty() const { return data->empty(); }
};