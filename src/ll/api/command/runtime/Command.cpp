#include "ll/api/command/runtime/Command.h"
#include "ll/api/command/Command.h"
#include "ll/api/command/runtime/ParamKind.h"

namespace ll::command::runtime {

Command::Command(std::vector<std::pair<std::string, ParamKindType>> const& params, Executor const& executor)
: paramCount(params.size()),
  executor(executor) {
    size_t idx{0};
    for (auto&& [name, kind] : params) {
        paramIndexMap.try_emplace(name, idx);
        meta::visitIndex<ParamKind::Count>(
            [&]<size_t K> {
                std::
                    construct_at(reinterpret_cast<ParamStorageType*>(reinterpret_cast<uintptr_t>(this) + sizeof(Command)) + idx, std::in_place_index<K>);
            },
            kind
        );
        idx++;
    }
}
Command::~Command() {
    std::destroy_n(
        reinterpret_cast<ParamStorageType*>(reinterpret_cast<uintptr_t>(this) + sizeof(Command)),
        paramCount
    );
}
void* Command::operator new(size_t count, uint paramCount) {
    return ::operator new(count + paramCount * sizeof(ParamStorageType));
}
void Command::operator delete(void* ptr, uint) { ::operator delete(ptr); }
void Command::operator delete(void* ptr) { ::operator delete(ptr); }

void Command::execute(class CommandOrigin const& origin, class CommandOutput& output) const {
    try {
        executor(origin, output, *this);
    } catch (...) {
        ::ll::command::detail::printCommandError(*this);
    }
}
ParamStorageType const& Command::operator[](std::string_view name) const {
    if (!paramIndexMap.contains(name)) {
        throw std::invalid_argument("invalid param " + std::string(name));
    }
    return reinterpret_cast<ParamStorageType*>(
        reinterpret_cast<uintptr_t>(this) + sizeof(Command)
    )[paramIndexMap.find(name)->second];
}
} // namespace ll::command::runtime
