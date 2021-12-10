#pragma once
#include "CommandSelectorBase.hpp"

// static_assert(offsetof(CommandSelectorBase, explicitIdSelector) == 165);
template <typename T>
class CommandSelector : public CommandSelectorBase {
public:
    LIAPI CommandSelector() : CommandSelectorBase(std::is_same_v<T, Player>) {}

    inline CommandSelectorResults<T> results(CommandOrigin const& a0) const
    {
        CommandSelectorResults<T> (CommandSelector<T>::*rv)(CommandOrigin const& a0) const;
        if constexpr (std::is_same_v<class Actor, T>) {
            *((void**)&rv) = dlsym("?results@?$CommandSelector@VActor@@@@QEBA?AV?$CommandSelectorResults@VActor@@@@AEBVCommandOrigin@@@Z");
            return (this->*rv)(a0);
        }
        else {
            *((void**)&rv) = dlsym("?results@?$CommandSelector@VPlayer@@@@QEBA?AV?$CommandSelectorResults@VPlayer@@@@AEBVCommandOrigin@@@Z");
            return (this->*rv)(a0);
        }
    }
};